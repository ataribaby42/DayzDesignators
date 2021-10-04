// for singleplayer / offline mode
modded class MissionGameplay
{
	private float ab_DesignatorsTimeslice;
	private float ab_DesignatorsSoundTimeslice;
	
	void MissionGameplay()
	{

	}
	
	void ~MissionGameplay() 
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
		
		PlayerBase pBase = PlayerBase.Cast(GetGame().GetPlayer());
		if (pBase && pBase.ab_designator_IsReadingBook())
		{
			pBase.ab_designator_ToggleBookReading();
			InventoryItem book = pBase.GetItemInHands();
			BookMenu bookMenu = BookMenu.Cast( GetUIManager().EnterScriptedMenu(MENU_BOOK, NULL) );
			if (bookMenu) 
			{
				PlayerControlDisable(INPUT_EXCLUDE_ALL);
				bookMenu.ReadBook(book);
			}
		}
	}
}