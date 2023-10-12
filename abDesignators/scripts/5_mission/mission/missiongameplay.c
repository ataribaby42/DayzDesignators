modded class MissionGameplay
{
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
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