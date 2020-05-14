class ab_designator_model_base extends BuildingSuper
{
	protected ref EffectSound m_TeleportFx;
	protected ref EffectSound m_KillFx;
	protected ref EffectSound m_AmbientFx;
	protected ref EffectSound m_CreepyFx;

	void ab_designator_model_base()
	{	
	
	}
	
	void ~ab_designator_model_base()
	{
		
	}
	
	void RequestPlayTeleport()
	{
		if (GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("teleport");
			GetGame().RPCSingleParam(this, abRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayKill()
	{
		if (GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("kill");
			GetGame().RPCSingleParam(this, abRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayAmbient()
	{
		if (GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("ambient");
			GetGame().RPCSingleParam(this, abRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayCreepy()
	{
		if (GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("creepy");
			GetGame().RPCSingleParam(this, abRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void PlayTeleport()
	{
		if(m_TeleportFx) return;
		
		PlaySoundSet(m_TeleportFx, "ab_designator_teleport_SoundSet", 0.1, 0.1);
	}
	
	void PlayKill()
	{
		if(m_KillFx) return;
		
		PlaySoundSet(m_KillFx, "softTreeFall_SoundSet", 0.1, 0.1);
	}
	
	void PlayAmbient()
	{
		if(m_AmbientFx) return;
		
		PlaySoundSet(m_AmbientFx, "ab_designator_ambient_SoundSet", 0.1, 0.1);
	}
	
	void PlayCreepy()
	{
		if(m_CreepyFx) return;
		
		PlaySoundSet(m_CreepyFx, "ab_designator_creepy_SoundSet", 0.1, 0.1);
	}
	
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, rpc_type, ctx);
		
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
			switch(rpc_type)
			{
				case abRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST:

					ref Param1<string> soundRequest = new Param1<string>("");
					
					if (ctx.Read(soundRequest))
					{
						if (soundRequest.param1 == "teleport")
						{
							PlayTeleport();
						}
						else if (soundRequest.param1 == "kill")
						{
							PlayKill();
						}
						else if (soundRequest.param1 == "ambient")
						{
							PlayAmbient();
						}
						else if (soundRequest.param1 == "creepy")
						{
							PlayCreepy();
						}
					}
					
				break;
			}
		}
	}
}