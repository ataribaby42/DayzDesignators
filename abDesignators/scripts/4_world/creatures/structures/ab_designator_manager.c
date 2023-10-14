ref ab_DesignatorManager g_ab_DesignatorManager;
ab_DesignatorManager Get_ab_DesignatorManager()
{
	if (!g_ab_DesignatorManager) 
	{
		g_ab_DesignatorManager = new ab_DesignatorManager;
	}
	return g_ab_DesignatorManager;
}

class ab_DesignatorManager
{
	private ref array<ref ab_DesignatorController> controllers = new array<ref ab_DesignatorController>();
	private bool lessIntrusiveAmbientSounds = false;
	private float ab_DesignatorsTimeslice;
	private float ab_DesignatorsSoundTimeslice;
	
	void ab_DesignatorManager()
	{
		Print("Designator Manager started.");
	}

	void ~ab_DesignatorManager()
	{
		Print("Designator Manager stopped.");
	}
	
	void SetLessIntrusiveAmbientSounds(bool lessIntrusive)
	{
		lessIntrusiveAmbientSounds = lessIntrusive;
		
		if(lessIntrusiveAmbientSounds)
		{
			Print("Designator Manager LessIntrusiveAmbientSounds set to ON.");
		}
		else
		{
			Print("Designator Manager LessIntrusiveAmbientSounds set to OFF.");
		}
	}
	
	bool GetLessIntrusiveAmbientSounds()
	{
		return lessIntrusiveAmbientSounds;
	}

	void CreateRandomDesignatorController(string name, vector position, float resetRadius, float radius, int designatorCount)
	{
		if (controllers)
		{
			controllers.Insert(new ref ab_DesignatorController(name, position, resetRadius, radius, designatorCount, NULL));
		}
	}
	
	void CreatePredefinedDesignatorController(string name, vector position, float resetRadius, ref array<string> designatorPositions)
	{
		if (controllers)
		{
			controllers.Insert(new ref ab_DesignatorController(name, position, resetRadius, 0, designatorPositions.Count(), designatorPositions));
		}
	}
	
	void Update(float timeslice)
	{
		if (controllers)
		{
			for (int i = 0; i < controllers.Count(); i++)
			{
				if (controllers && controllers[i])
				{
					controllers[i].Update(timeslice);
				}
			}
		}
	}
	
	void UpdateSounds(float timeslice)
	{
		if (controllers)
		{
			for (int i = 0; i < controllers.Count(); i++)
			{
				if (controllers && controllers[i])
				{
					controllers[i].UpdateSounds(timeslice);
				}
			}
		}
	}
}