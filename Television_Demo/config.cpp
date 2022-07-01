class CfgPatches
{
	class Television_Demo_Mod
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class Television_Demo_Mod
	{
		dir="Television_Demo";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Television Demo";
		credits=""; //Add yourself if you contribute
		author="RedFalcon";
		authorID="76561198100307085";  //authors steam id
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Television_Demo/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Television_Demo/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Television_Demo/scripts/5_Mission"
				};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Demo_Television: Inventory_Base
	{
		scope = 2;
		displayName = "Demo Television";
		descriptionShort = "This is just an old television used to demonstrate how to build a simple object mod.";
		model = "\Television_Demo\television.p3d";
		inventorySlot[] = {};	
		attachments[] = {};		
		weight = 500;
		itemSize[] = {3,3};
		absorbency = 0;
		rotationFlags = 2;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Television_Demo\data\tv_ca.paa"};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"Television_Demo\data\tv.rvmat"}},
						{0.7,{"Television_Demo\data\tv.rvmat"}},
						{0.5,{"Television_Demo\data\tv_damage.rvmat"}},
						{0.3,{"Television_Demo\data\tv_damage.rvmat"}},
						{0.0,{"Television_Demo\data\tv_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 8.0;
					};
					class Blood
					{
						damage = 8.0;
					};
					class Shock
					{
						damage = 8.0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "seachest_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpSeaChest_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "seachest_drop_SoundSet";
					id = 898;
				};
			};
		};

		
	};
};	



