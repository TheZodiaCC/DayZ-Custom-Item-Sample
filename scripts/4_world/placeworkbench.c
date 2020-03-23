class workbench : Container_Base
{
	void aworkbench()
	{
		RegisterNetSyncVariableBool("m_IsPlaceSound");
	}
	//================================================================
	// ADVANCED PLACEMENT
	//================================================================
	
	override void OnPlacementComplete( Man player )
	{		
		super.OnPlacementComplete( player );
			
		SetIsPlaceSound( true );
	}
	
	override string GetPlaceSoundset()
	{
		return "placeBarrel_SoundSet";
	}
	
	override void SetActions()
	{
		super.SetActions();
	}
};