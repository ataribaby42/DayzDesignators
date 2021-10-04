class ab_designator_report extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ab_designator_ActionReadBook);
	}
}