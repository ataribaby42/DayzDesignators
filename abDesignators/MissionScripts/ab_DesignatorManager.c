static ref ab_DesignatorManager g_ab_DesignatorManager;
static ref ab_DesignatorManager Get_ab_DesignatorManager()
{
	if (!g_ab_DesignatorManager) 
	{
		g_ab_DesignatorManager = new ref ab_DesignatorManager();
	}
	return g_ab_DesignatorManager;
}

class ab_DesignatorManager
{
	private ref array<ref ab_DesignatorController> controllers = new array<ref ab_DesignatorController>();
	
    void ab_DesignatorManager()
    {
		Print("Designator Manager started.");
    }

	void ~ab_DesignatorManager()
    {
		Print("Designator Manager stopped.");
    }
	
	void CreateRandomDesignatorController(string name, vector position, float resetRadius, float radius, int designatorCount)
	{
		controllers.Insert(new ref ab_DesignatorController(name, position, resetRadius, radius, designatorCount, NULL));
	}
	
	void CreatePredefinedDesignatorController(string name, vector position, float resetRadius, ref array<string> designatorPositions)
	{
		controllers.Insert(new ref ab_DesignatorController(name, position, resetRadius, 0, designatorPositions.Count(), designatorPositions));
	}
	
	void Update(float timeslice)
	{
		for (int i = 0; i < controllers.Count(); i++)
		{
			controllers[i].Update(timeslice);
		}
	}
	
	void UpdateSounds(float timeslice)
	{
		for (int i = 0; i < controllers.Count(); i++)
		{
			controllers[i].UpdateSounds(timeslice);
		}
	}
}