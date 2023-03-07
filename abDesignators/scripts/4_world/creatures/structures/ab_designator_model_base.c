class ab_designator_model_base extends BuildingSuper
{
	protected ref EffectSound m_SyncFx;
	protected ref EffectSound m_TeleportFx;
	protected ref EffectSound m_KillFx;
	protected ref EffectSound m_AmbientFx;
	protected ref EffectSound m_CreepyFx;

	void ab_designator_model_base()
	{	
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(UpdateTheLifeTime, 1000, false);
	}
	
	void ~ab_designator_model_base()
	{
		
	}
	
	void UpdateTheLifeTime()
    {
        SetLifetime(360000);
    }
	
	void RequestPlaySync()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("sync");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayTeleport()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("teleport");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayKill()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("kill");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayAmbient()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("ambient");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayLessIntrusiveAmbient()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("ambientLess");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void RequestPlayCreepy()
	{
		if (GetGame() && GetGame().IsServer())
		{
			Param1<string> p = new Param1<string>("creepy");
			GetGame().RPCSingleParam(this, abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST, p, true);
		}
	}
	
	void PlaySync()
	{
		if(m_SyncFx && m_SyncFx.IsSoundPlaying()) return

		PlaySoundSet(m_SyncFx, "ab_designator_sync_SoundSet", 0.1, 0.1);
	}
	
	void PlayTeleport()
	{
		if(m_TeleportFx && m_TeleportFx.IsSoundPlaying()) return;
		
		PlaySoundSet(m_TeleportFx, "ab_designator_teleport_SoundSet", 0.1, 0.1);
	}
	
	void PlayKill()
	{
		if(m_KillFx && m_KillFx.IsSoundPlaying()) return;
		
		PlaySoundSet(m_KillFx, "ab_designator_kill_SoundSet", 0.1, 0.1);
	}
	
	void PlayAmbient()
	{
		if(m_AmbientFx && m_AmbientFx.IsSoundPlaying()) return;
		
		PlaySoundSet(m_AmbientFx, "ab_designator_ambient_SoundSet", 0.1, 0.1);
	}
	
	void PlayLessIntrusiveAmbient()
	{
		if(m_AmbientFx && m_AmbientFx.IsSoundPlaying()) return;
		
		PlaySoundSet(m_AmbientFx, "ab_designator_less_intrusive_ambient_SoundSet", 0.1, 0.1);
	}
	
	void PlayCreepy()
	{
		if(m_CreepyFx && m_CreepyFx.IsSoundPlaying()) return;
		
		PlaySoundSet(m_CreepyFx, "ab_designator_creepy_SoundSet", 0.1, 0.1);
	}
	
	override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, rpc_type, ctx);
		
		if (GetGame() && (GetGame().IsClient() || !GetGame().IsMultiplayer()))
		{
			switch(rpc_type)
			{
				case abDesignatorRPC.RPC_AB_DESIGNATOR_SOUND_REQUEST:

					ref Param1<string> soundRequest = new Param1<string>("");
					
					if (ctx.Read(soundRequest))
					{
						if (soundRequest.param1 == "sync")
						{
							PlaySync();
						}
						else if (soundRequest.param1 == "teleport")
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
						else if (soundRequest.param1 == "ambientLess")
						{
							PlayLessIntrusiveAmbient();
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