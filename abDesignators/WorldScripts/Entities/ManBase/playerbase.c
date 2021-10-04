modded class PlayerBase
{
	protected bool ab_designator_BookMenuToggle;

	void ~PlayerBase()
	{
		
	}
	
	override void Init()
	{	
		super.Init();

		ab_designator_BookMenuToggle = false;
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