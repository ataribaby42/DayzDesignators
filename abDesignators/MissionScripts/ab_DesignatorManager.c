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
		
    }

	void ~ab_DesignatorManager()
    {
		
    }
	
	void CreateDesignatorController(vector position, float resetRadius, float radius, int designatorCount)
	{
		controllers.Insert(new ref ab_DesignatorController(position, resetRadius, radius, designatorCount));
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