class CfgPatches
{
	class abDesignators
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class abDesignators
	{
		type="mod";
		dependencies[] = {"Game", "World", "Mission"};
		
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]={"abDesignators/GameScripts"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"abDesignators/WorldScripts"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"abDesignators/MissionScripts"};
			};
		};
	};

};

class CfgVehicles
{
	class Inventory_Base;
	class ab_designator_report: Inventory_Base
	{
		scope=2;
		title="$STR_abDesignators_item_designators_report";
		author="$STR_abDesignators_item_designators_author";
		file="abDesignators\Gear\Lore\Data\abDesignators_report.html";
		displayName="$STR_abDesignators_item_designators_report";
		descriptionShort="$STR_abDesignators_item_designators_report_desc";
		model="\dz\gear\consumables\Paper.p3d";
		isMeleeWeapon=1;
		weight=2;
		absorbency=1;
		itemSize[]={1,1};
		rotationFlags=16;
		inventorySlot[]=
		{
			"Paper"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\Loot_Paper.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\Loot_Paper.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPaper_SoundSet";
					id=797;
				};
			};
		};
	};

	class HouseNoDestruct;
	class ab_designator_model_base: HouseNoDestruct
	{
	};
	class ab_designator_model_1: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator1.p3d";
	};
	class ab_designator_model_2: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator2.p3d";
	};
	class ab_designator_model_3: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator3.p3d";
	};
	class ab_designator_model_4: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator4.p3d";
	};
	class ab_designator_model_5: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator5.p3d";
	};
	class ab_designator_model_6: ab_designator_model_base
	{
		scope=2;
		model="abDesignators\Models\designator6.p3d";
	};
};

class CfgSoundShaders
{
	class ab_designator_sync_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\Sounds\sync.ogg",
				1
			}
		};
		range=200;
		volume=1;
	};
	
	class ab_designator_teleport_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\Sounds\teleport1.ogg",
				1
			},
			{
				"abDesignators\Sounds\teleport2.ogg",
				1
			}
		};
		range=150;
		volume=1;
	};
	
	class ab_designator_kill_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\Sounds\kill.ogg",
				1
			}
		};
		range=150; 
		volume=5;
	};
	
	class ab_designator_ambient_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\Sounds\ambient1",
				1
			},
			{
				"abDesignators\Sounds\ambient2",
				1
			},
			{
				"abDesignators\Sounds\ambient3",
				1
			},
			{
				"abDesignators\Sounds\ambient4",
				1
			},
			{
				"abDesignators\Sounds\ambient5",
				1
			}
		};
		range=300;
		volume=0.5;
	};
	
	class ab_designator_creepy_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\Sounds\creepy1",
				1
			},
			{
				"abDesignators\Sounds\creepy2",
				1
			},
			{
				"abDesignators\Sounds\creepy3",
				1
			},
			{
				"abDesignators\Sounds\creepy4",
				1
			},
			{
				"abDesignators\Sounds\creepy5",
				1
			},
			{
				"abDesignators\Sounds\creepy6",
				1
			},
			{
				"abDesignators\Sounds\creepy7",
				1
			},
			{
				"abDesignators\Sounds\creepy8",
				1
			},
			{
				"abDesignators\Sounds\creepy9",
				1
			},
			{
				"abDesignators\Sounds\creepy10",
				1
			},
			{
				"abDesignators\Sounds\creepy11",
				1
			}
		};
		range=200;
		volume=1;
	};
};

class CfgSoundSets
{
	class ab_designator_sync_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_sync_SoundShader"
		};
	};
	
	class ab_designator_teleport_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_teleport_SoundShader"
		};
	};
	
	class ab_designator_kill_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_kill_SoundShader"
		};
	};
	
	class ab_designator_ambient_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_ambient_SoundShader"
		};
	};
	
	class ab_designator_creepy_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_creepy_SoundShader"
		};
	};
};
