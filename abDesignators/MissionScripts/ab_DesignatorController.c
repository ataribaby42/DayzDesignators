class ab_DesignatorController
{
	private string name;
	private float resetRadius;
	private float minTimeBetweenCreepySound = 20;
	private float creepySoundChance = 0.4;
	private float lastCreepySoundTimeslice;
	private vector position;
	private float radius;
	private int designatorCount;
	private ref array<ref ab_Designator> designators = new array<ref ab_Designator>();
	private ref array<string> designatorPositions = new array<string>();
	private bool active = false;
	
    void ab_DesignatorController(string name, vector position, float resetRadius, float radius, int designatorCount, ref array<string> designatorPositions)
    {
		if (!designatorPositions)
		{
			Print("Random Designators <" + name + "> created at " + position + ".");
		}
		else
		{
			Print("Predefined Designators <" + name + "> created at " + position + ".");
		}
		
		lastCreepySoundTimeslice = 0;
		this.name = name;
		this.position = position;
		this.radius = radius;
		this.designatorCount = designatorCount;
		this.designatorPositions = designatorPositions;
		this.resetRadius = resetRadius;
		
		for (int i = 0; i < designatorCount; i++)
		{
			designators.Insert(new ref ab_Designator(name, position));
		}
		
		SetupDesignators();
    }

	void ~ab_DesignatorController()
    {
		
    }
	
	void SetupDesignators()
	{
		int i;
		vector pos;
		vector orientation;
		
		if (!designatorPositions)
		{
			for (i = 0; i < designatorCount; i++)
			{
				Vector2 randomPos = GetRandomPointInCircle(radius);
				pos = Vector(position[0] + randomPos.x, position[1], position[2] + randomPos.y);
				orientation = Vector(Math.RandomFloatInclusive(0, 359), Math.RandomFloatInclusive(-2, 2), Math.RandomFloatInclusive(-2, 2));
				designators[i].Setup(pos, orientation);
			}
		}
		else
		{
			for (i = 0; i < designatorPositions.Count(); i++)
			{
				pos = designatorPositions[i].ToVector();
				orientation = Vector(Math.RandomFloatInclusive(0, 359), Math.RandomFloatInclusive(-2, 2), Math.RandomFloatInclusive(-2, 2));
				designators[i].Setup(pos, orientation);
			}
		}
	}
	
	void Update(float timeslice)
	{
		int i;
		bool nobodyNear = true;
		ref array<Object> nearest_objects = new array<Object>;
		ref array<CargoBase> proxy_cargos = new array<CargoBase>;
		GetGame().GetObjectsAtPosition3D(position, resetRadius, nearest_objects, proxy_cargos);
		
		for (i = 0; i < nearest_objects.Count(); ++i)
		{
			Object objectInRange = nearest_objects.Get(i);
			
			if (objectInRange.IsInherited(PlayerBase) && objectInRange.IsAlive())
			{
				if (!active)
				{
					Print("Designators <" + name + "> active at " + position + ".");
				}
				
				nobodyNear = false;
				active = true;
				break;
			}
		}
		
		if (nobodyNear && active)
		{
			SetupDesignators();
			active = false;
			Print("Designators <" + name + "> inactive at " + position + ".");
		}
		
		for (i = 0; i < designators.Count(); i++)
		{
			designators[i].Update(timeslice);
		}
	}
	
	void UpdateSounds(float timeslice)
	{	
		int i;
		array<ab_Designator> designatorsTransmitting = new array<ab_Designator>();
		array<ab_Designator> designatorsInRange = new array<ab_Designator>();
		lastCreepySoundTimeslice += timeslice;
		
		if (lastCreepySoundTimeslice >= minTimeBetweenCreepySound)
		{
			lastCreepySoundTimeslice = 0;	
			
			for (i = 0; i < designators.Count(); i++)
			{
				if (designators[i].InRange)
				{
					designatorsInRange.Insert(designators[i]);
				}
			}
			
			if (designatorsInRange.Count() > 0 && Math.RandomFloat01() < creepySoundChance)
			{
				designatorsInRange.GetRandomElement().RequestPlayCreepy();
			}
		}
		
		for (i = 0; i < designators.Count(); i++)
		{
			if (designators[i].IsTransmitting)
			{
				designatorsTransmitting.Insert(designators[i]);
			}
		}
		
		for (i = 0; i < Math.RandomIntInclusive(1, 4); i++)
		{
			if (designatorsTransmitting.Count() > 0)
			{
				ab_Designator designatorPlay = designatorsTransmitting.GetRandomElement();
				designatorPlay.RequestPlayAmbient();
				designatorsTransmitting.RemoveItem(designatorPlay);
			}
		}
	}
	
	Vector2 GetRandomPointInCircle(float radius)
	{
		float a = Math.RandomFloat01() * 2 * Math.PI;
		float r = radius * Math.Sqrt(Math.RandomFloat01());
		float x = r * Math.Cos(a);
		float y = r * Math.Sin(a);
		return new Vector2(x, y);
	}
}