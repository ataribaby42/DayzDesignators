modded class PlayerBase extends ManBase
{
	float designatorKillTimer;
	bool designatorKillRequested;
	
	override void Init()
	{
		super.Init();
		
		designatorKillTimer = 0;
		designatorKillRequested = false;
	}
	
	override void EOnFrame(IEntity other, float timeSlice)
	{
		super.EOnFrame(other, timeSlice);
		
		if (GetGame().IsServer() && designatorKillRequested)	
		{
			designatorKillTimer += timeSlice;
			
			if (designatorKillTimer >= 0.35)
			{
				designatorKillTimer = 0;	
				designatorKillRequested = false;
				PlayerIdentity identity = GetIdentity();
				
				if (identity)
				{
					Print("Player " + GetIdentity().GetName() + " has been killed by designator.");
				}
				else
				{
					Print("Player has been killed by designator.");
				}
				
				SetHealth("GlobalHealth", "Health", 0);
			}
		}
	}
	
	void RequestDesignatorKill()
	{
		designatorKillRequested = true;
	}
};