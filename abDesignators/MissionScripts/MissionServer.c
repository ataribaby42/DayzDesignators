// for online server mode
modded class MissionServer extends MissionBase
{
	private float ab_DesignatorsTimeslice;
	private float ab_DesignatorsSoundTimeslice;
	
	void MissionServer() 
	{
		
	}

	void ~MissionServer() 
	{
		
	}

	override void OnInit()
	{
		super.OnInit();
	}
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
		if (GetGame() && GetGame().IsServer())	
		{
			ab_DesignatorsTimeslice += timeslice;
			if (ab_DesignatorsTimeslice >= 5.0)
			{
				Get_ab_DesignatorManager().Update(ab_DesignatorsTimeslice);
				ab_DesignatorsTimeslice = 0;	
			}
			
			ab_DesignatorsSoundTimeslice += timeslice;
			if (ab_DesignatorsSoundTimeslice >= 2.0)
			{
				Get_ab_DesignatorManager().UpdateSounds(ab_DesignatorsSoundTimeslice);
				ab_DesignatorsSoundTimeslice = 0;	
			}
		}
	}
}