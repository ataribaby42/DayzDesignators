modded class PlayerBase extends ManBase
{
	protected bool ab_designator_BookMenuToggle;
	float designatorKillTimer;
	string designatorKillName;
	bool designatorKillRequested;
	
	override void Init()
	{
		super.Init();
		
		designatorKillTimer = 0;
		designatorKillRequested = false;
		ab_designator_BookMenuToggle = false;
	}
	
	override void EOnFrame(IEntity other, float timeSlice)
	{
		super.EOnFrame(other, timeSlice);
		
		if (GetGame() && GetGame().IsServer() && designatorKillRequested)	
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
	
	void ab_designator_ToggleBookReading()
	{
		ab_designator_BookMenuToggle = !ab_designator_BookMenuToggle;
	}
	
	bool ab_designator_IsReadingBook()
	{
		return ab_designator_BookMenuToggle;
	}
};