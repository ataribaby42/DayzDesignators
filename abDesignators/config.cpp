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
				files[]={"abDesignators/scripts/3_game"};
			};
			class worldScriptModule
			{
				value="";
				files[]={"abDesignators/scripts/4_world"};
			};
			class missionScriptModule
			{
				value="";
				files[]={"abDesignators/scripts/5_mission"};
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
		file="abDesignators\gear\lore\data\ab_designator_report.html";
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
		storageCategory = 10;
		model="abDesignators\models\designator1.p3d";
	};
	class ab_designator_model_2: ab_designator_model_base
	{
		scope=2;
		storageCategory = 10;
		model="abDesignators\models\designator2.p3d";
	};
	class ab_designator_model_3: ab_designator_model_base
	{
		scope=2;
		storageCategory = 10;
		model="abDesignators\models\designator3.p3d";
	};
	class ab_designator_model_4: ab_designator_model_base
	{
		scope=2;
		storageCategory = 10;
		model="abDesignators\models\designator4.p3d";
	};
	class ab_designator_model_5: ab_designator_model_base
	{
		scope=2;
		storageCategory = 10;
		model="abDesignators\models\designator5.p3d";
	};
	class ab_designator_model_6: ab_designator_model_base
	{
		scope=2;
		storageCategory = 10;
		model="abDesignators\models\designator6.p3d";
	};
};

class CfgSoundShaders
{
	class ab_designator_sync_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\sounds\sync.ogg",
				1
			}
		};
		range=200;
		volume=1.6;
	};
	
	class ab_designator_teleport_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\sounds\teleport1.ogg",
				1
			},
			{
				"abDesignators\sounds\teleport2.ogg",
				1
			}
		};
		range=150;
		volume=1.8;
	};
	
	class ab_designator_kill_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\sounds\kill.ogg",
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
				"abDesignators\sounds\ambient1",
				1
			},
			{
				"abDesignators\sounds\ambient2",
				1
			},
			{
				"abDesignators\sounds\ambient3",
				1
			},
			{
				"abDesignators\sounds\ambient4",
				1
			},
			{
				"abDesignators\sounds\ambient5",
				1
			}
		};
		range=300;
		volume=1.8;
	};
	
	class ab_designator_less_intrusive_ambient_SoundShader
	{
		samples[]=
		{
			{
				"abDesignators\sounds\ambient4",
				1
			}
		};
		range=300;
		volume=1.5;
	};
	
	class ab_designator_creepy_SoundShader
	{
		samples[]=
		{
			
			{
				"abDesignators\sounds\creepy1",
				1
			},
			{
				"abDesignators\sounds\creepy2",
				1
			},
			{
				"abDesignators\sounds\creepy3",
				1
			},
			{
				"abDesignators\sounds\creepy4",
				1
			},
			{
				"abDesignators\sounds\creepy5",
				1
			},
			{
				"abDesignators\sounds\creepy6",
				1
			},
			{
				"abDesignators\sounds\creepy7",
				1
			},
			{
				"abDesignators\sounds\creepy8",
				1
			},
			{
				"abDesignators\sounds\creepy9",
				1
			},
			{
				"abDesignators\sounds\creepy10",
				1
			},
			{
				"abDesignators\sounds\creepy11",
				1
			}
		};
		range=200;
		volume=1.8;
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
	
	class ab_designator_less_intrusive_ambient_SoundSet
	{
		soundShaders[]=
		{
			"ab_designator_less_intrusive_ambient_SoundShader"
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
