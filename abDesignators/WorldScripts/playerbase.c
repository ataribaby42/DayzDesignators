modded class PlayerBase extends ManBase
{
	float designatorKillTimer;
	string designatorKillName;
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
					Print("Player <" + GetIdentity().GetName() + "> has been killed by Designator <" + designatorKillName + ">.");
				}
				else
				{
					Print("Player <unknown> has been killed by Designator <" + designatorKillName + ">.");
				}
				
				designatorKillName = "";
				SetHealth("GlobalHealth", "Health", 0);
			}
		}
	}
	
	void RequestDesignatorKill(string name)
	{
		designatorKillRequested = true;
		designatorKillName = name;
	}
};