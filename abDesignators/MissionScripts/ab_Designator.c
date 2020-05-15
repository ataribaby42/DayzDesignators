class ab_Designator
{
	private string name;
	private float designatorModelHeightOffset = 1.3;
	private float transmittingRange = 100;
	private float detectionRange = 30;
	private float teleportRange = 10;
	private float teleportKillRange = 10;
	private const ref array<string> designatorModels = {"ab_designator_model_1", "ab_designator_model_2", "ab_designator_model_3"};
	private Object designatorObject;
	private ab_designator_model_base designatorObjectBase;
	bool InRange = false;
	bool InView = false;
	bool IsTransmitting = false;
	
	void ab_Designator(string name, vector position)
	{
		this.name = name;
		designatorObject = GetGame().CreateObject(designatorModels.GetRandomElement(), position);
		designatorObjectBase = ab_designator_model_base.Cast(designatorObject);
	}
	
	void ~ab_Designator()
    {
		
    }
	
	void Setup(vector position, vector orientation)
	{
		float y = GetGame().SurfaceY(position[0], position[2]);
		designatorObject.SetPosition(Vector(position[0], y + designatorModelHeightOffset, position[2]));
		designatorObject.SetOrientation(orientation);
		InRange = false;
		InView = false;
		IsTransmitting = false;
		designatorObjectBase.RequestPlayTeleport();
	}
	
	void RequestPlayTeleport()
	{
		if (designatorObjectBase)
		{
			designatorObjectBase.RequestPlayTeleport();
		}
	}
	
	void RequestPlayAmbient()
	{
		if (designatorObjectBase)
		{
			designatorObjectBase.RequestPlayAmbient();
		}
	}
	
	void RequestPlayCreepy()
	{
		if (designatorObjectBase)
		{
			designatorObjectBase.RequestPlayCreepy();
		}
	}
	
	void Update(float timeslice)
	{
		InView = false;
		InRange = false;
		IsTransmitting = false;
		
		int i;
		float distance = -1;
		Object nearestPerson = NULL;
		vector position = designatorObject.GetPosition();
		ref array<Object> nearest_objects = new array<Object>;
		ref array<CargoBase> proxy_cargos = new array<CargoBase>;
		GetGame().GetObjectsAtPosition3D(position, detectionRange, nearest_objects, proxy_cargos);

		for (i = 0; i < nearest_objects.Count(); ++i)
		{
			Object objectInRange = nearest_objects.Get(i);
			
			if (objectInRange.IsInherited(PlayerBase) && objectInRange.IsAlive())
			{
				float dist = vector.Distance(objectInRange.GetPosition(), position);
				
				if (distance > dist || distance == -1)
				{
					distance = dist;
					nearestPerson = objectInRange;
					InRange = true;
				}
			}
		}
		
		GetGame().GetObjectsAtPosition3D(position, transmittingRange, nearest_objects, proxy_cargos);

		for (i = 0; i < nearest_objects.Count(); ++i)
		{
			Object objectTransmitting = nearest_objects.Get(i);
				
			if (objectTransmitting.IsInherited(PlayerBase) && objectTransmitting.IsAlive())
			{
				IsTransmitting = true;
				break;
			}
		}

		if (nearestPerson != NULL)
		{
			float y;
			PlayerBase player = PlayerBase.Cast(nearestPerson);
			vector angles = vector.Direction(player.GetPosition(), position).Normalized().VectorToAngles();
			vector orientation = Vector(angles[0] + 45, Math.RandomFloatInclusive(-2, 2), Math.RandomFloatInclusive(-2, 2));
			int bone_index = player.GetBoneIndexByName("Head");
			float bone_rot[4];
			player.GetBoneRotationWS(bone_index, bone_rot);
			vector lookDirection = Math3D.QuatToAngles(bone_rot).AnglesToVector();
			float swap = lookDirection[0];
			lookDirection[0] = lookDirection[2];
			lookDirection[2] = swap;
			vector lookPosition= player.GetBonePositionWS(bone_index);
			lookDirection[0] = -lookDirection[0];
			lookDirection[1] = -lookDirection[1];
			float VICINITY_CONE_REACH_DISTANCE	= detectionRange;
			float VICINITY_CONE_ANGLE 			= 30;
			float CONE_HEIGHT_MIN 				= -9999.0;
			float CONE_HEIGHT_MAX 				= 9999.0;
			array<Object> objects_in_vicinity = new array<Object>;
			vector headingDirection = MiscGameplayFunctions.GetHeadingVector(player);
			DayZPlayerUtils.GetEntitiesInCone(lookPosition, lookDirection, VICINITY_CONE_ANGLE, VICINITY_CONE_REACH_DISTANCE, CONE_HEIGHT_MIN, CONE_HEIGHT_MAX, objects_in_vicinity);
			
			for (i = 0; i < objects_in_vicinity.Count(); i++)
			{
				Object object_in_cone = objects_in_vicinity.Get(i);
				
				if (designatorObject == object_in_cone)
				{
					InView = true;
					break;
				}
			}

			if (!InView)
			{
				vector fromPos = designatorObject.GetPosition();
				vector begPos = Vector(fromPos[0], fromPos[1] + 3, position[2]);
				vector endPos = player.GetPosition();
				vector contactPos;
				vector contactDir;
				int contactComponent; 
				set<Object> results = new set<Object>;
				Object with = NULL; 
				Object ignore = designatorObject;  
				bool sorted; 
				bool ground_only = false;  
				int iType = 2;
				float radius = 0;
				bool losCheck = false;
				
				if (DayZPhysics.RaycastRV(begPos, endPos, contactPos, contactDir, contactComponent, results, with, ignore, sorted, ground_only, iType, radius))
				{
					if (results && results.Count() > 0 && results[0] == player)
					{
						losCheck = true;
					}
				}
				
				if(losCheck)
				{
					if (distance <= teleportKillRange)
					{
						vector pos = player.GetPosition();
						designatorObject.SetPosition(Vector(pos[0], pos[1] + designatorModelHeightOffset, pos[2]));
						designatorObject.SetOrientation(orientation);
						designatorObjectBase.RequestPlayKill();
						player.RequestDesignatorKill(name);
					}
					else
					{
						angles[0] = angles[0] + 180;
						float range = teleportRange * Math.RandomFloatInclusive(0.5, 1);
						float x = range * Math.Sin(angles[0] * Math.DEG2RAD);
						float z = range * Math.Cos(angles[0] * Math.DEG2RAD);
						y = GetGame().SurfaceY(position[0] + x, position[2] + z);
						designatorObject.SetPosition(Vector(position[0] + x, y + designatorModelHeightOffset, position[2] + z));
						designatorObject.SetOrientation(orientation);
						designatorObjectBase.RequestPlayTeleport();
					}
				}
			}
		}
	}
}