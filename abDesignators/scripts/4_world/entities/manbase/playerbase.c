modded class PlayerBase extends ManBase
{
	protected bool ab_designator_BookMenuToggle;
	float ab_designatorKillTimer;
	string ab_designatorKillName;
	bool ab_designatorKillRequested;
	
	override void Init()
	{
		super.Init();
		
		ab_designatorKillRequested = false;
		ab_designator_BookMenuToggle = false;
	}
	
	override void EOnFrame(IEntity other, float timeSlice)
	{
		super.EOnFrame(other, timeSlice);
		
		if (GetGame() && GetGame().IsServer() && ab_designatorKillRequested)	
		{
			if ((GetGame().GetTime() / 1000) >= ab_designatorKillTimer)
			{
				ab_designatorKillRequested = false;
				PlayerIdentity identity = GetIdentity();
				
				if (identity)
				{
					Print("Player <" + GetIdentity().GetName() + "> has been killed by Designator <" + ab_designatorKillName + ">.");
				}
				else
				{
					Print("Player <unknown> has been killed by Designator <" + ab_designatorKillName + ">.");
				}
				
				ab_designatorKillName = "";
				SetHealth("GlobalHealth", "Health", 0);
			}
		}
	}
	
	void RequestDesignatorKill(string name)
	{
		ab_designatorKillTimer = (GetGame().GetTime() / 1000) + 0.35;
		ab_designatorKillRequested = true;
		ab_designatorKillName = name;
	}
	
	void ab_designator_ToggleBookReading()
	{
		ab_designator_BookMenuToggle = !ab_designator_BookMenuToggle;
	}
	
	bool ab_designator_IsReadingBook()
	{
		return ab_designator_BookMenuToggle;
	}
};