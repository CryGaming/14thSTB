#include "\cfgPatches.hpp"
class CfgWeapons 
{
	/// Helmets
	class MA_M56SH_Helmet;
	class MA_M56S_Vest;
	class MA_M56S_Medic_Vest;
	class ItemInfo;
	class VestItem;
	class MA_M56SR_Helmet;
	class MA_M56R_Vest;
	class HeadgearItem;
	class 14th_HammerBase_helmet:MA_M56SR_Helmet
	{
		scope = 1;
        scopeArsenal = 1;
        picture = "MA_Armor\data\Icons\H3_ODST_Helmet.paa";
        hiddenSelectionsMaterials[] = {"", "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        class ItemInfo: HeadgearItem {
            uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
            hiddenSelections[] = {"camo1", "camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=28;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=28;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=28;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=28;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 14th_HammerNCO_Helmet:14th_HammerBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 NCO Helmet";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTMNCO_Helmet_co.paa",
        "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_VSR.paa"
		};
	};
	class 14th_HammerBasic_Helmet:14th_HammerBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Helmet";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_helmet.paa",
        "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_VSR.paa"
		};
	};
	class 14th_HammerMedic_Helmet: 14th_HammerBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Medic Helmet";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Helmet_co.paa",
        "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_VSR.paa"
		};
	};
	class 14th_HammerEOD_Helmet: 14th_HammerBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 EOD Helmet";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Helmet_co.paa",
        "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_VSR.paa"
		};
	};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class 14th_HammerBase_Vest: MA_M56R_Vest
	{
		scope=1;
		scopeArsenal=1;
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]=
			{
				  "camo1",
				  "camo2",
				  "camo3",
				  "camo4",
				  "camo5",
				  "camo6",
				  "camo7",
				  "camo8",
				  "camo9",
				  "camo10",
				  "H3_Forearm_Left",
				  "H3_Forearm_Right",
	//              "Reach_Forearm_Left",
	//              "Reach_Forearm_Right",
				  "H3_Pauldron_Left",
				  "H3_Pauldron_Right",
	//              "Reach_Pauldron_Left",
	//              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
				  "Reach_Sniper_Pauldron_Left",
				  "Reach_Sniper_Pauldron_Right",
				  "Reach_CQB_Pauldron_Left",
				  "Reach_CQB_Pauldron_Right",
				  "Thigh_Pouch",
				  "H3_Armor_Upper",
				  "H3_Armor_Lower",
	//              "Reach_Armor_Upper",
	//              "Reach_Armor_Lower",
	//              "Forearm_Vent_Left",
	//              "Forearm_Vent_Right",
	              "Canisters"
			};
			class HitpointsProtectionInfo
				{
					class Neck
					{
						hitpointName="HitNeck";
						armor=28;
						passThrough=0.5;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=28;
						passThrough=0.5;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=28;
						passThrough=0.5;
					};
					class Hands
					{
						hitpointName="HitHands";
						armor=28;
						passThrough=0.5;
					};
					class Chest
					{
						hitpointName="HitChest";
						armor=28;
						passThrough=0.5;
					};
					class Diaphragm
					{
						hitpointName="HitDiaphragm";
						armor=28;
						passThrough=0.5;
					};
					class Abdomen
					{
						hitpointName="HitAbdomen";
						armor=28;
						passThrough=0.5;
					};
					class Pelvis
					{
						hitpointName="HitPelvis";
						armor=28;
						passThrough=0.5;
					};
					class Body
					{
						hitpointName="HitBody";
						armor=28;
						passThrough=0.5;
					};
				};
		};
	};
	class 14th_HammerNCO_Vest: 14th_HammerBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 NCO Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "\14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTMNCO_Armor_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "\14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTMNCO_Armor_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
            "\14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTM_Forearm Vents_co.paa",   //camo7 (Forearm Vents)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
	};
	class 14th_HammerBasic_Vest: 14th_HammerBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
            "14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
	};
	class 14th_HammerMedic_Vest: 14th_HammerBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Medic Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Canisters_co.paa",      //camo6 (Canisters)
            "14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply400";
			hiddenSelections[]=
			{
				  "camo1",
				  "camo2",
				  "camo3",
				  "camo4",
				  "camo5",
				  "camo6",
				  "camo7",
				  "camo8",
				  "camo9",
				  "camo10",
				  "H3_Forearm_Left",
				  "H3_Forearm_Right",
	//              "Reach_Forearm_Left",
	//              "Reach_Forearm_Right",
				  "H3_Pauldron_Left",
				  "H3_Pauldron_Right",
	//              "Reach_Pauldron_Left",
	//              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
				  "Reach_Sniper_Pauldron_Left",
				  "Reach_Sniper_Pauldron_Right",
				  "Reach_CQB_Pauldron_Left",
				  "Reach_CQB_Pauldron_Right",
	//			  "Thigh_Pouch",
				  "H3_Armor_Upper",
				  "H3_Armor_Lower",
	//              "Reach_Armor_Upper",
	//              "Reach_Armor_Lower",
	//              "Forearm_Vent_Left",
	//              "Forearm_Vent_Right",
	//              "Canisters"
			};
		};
	};
	class 14th_HammerEOD_Vest: 14th_HammerBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 EOD Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Canisters_co.paa",      //camo6 (Canisters)
            "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa", //camo8 (Sniper Shoulders)
            "14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_CQB_Pad.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply400";
			hiddenSelections[]=
			{
				  "camo1",
				  "camo2",
				  "camo3",
				  "camo4",
				  "camo5",
				  "camo6",
				  "camo7",
				  "camo8",
				  "camo9",
				  "camo10",
				  "H3_Forearm_Left",
				  "H3_Forearm_Right",
	//              "Reach_Forearm_Left",
	//              "Reach_Forearm_Right",
				  "H3_Pauldron_Left",
				  "H3_Pauldron_Right",
	              "Reach_Pauldron_Left",
	              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
				  "Reach_Sniper_Pauldron_Left",
				  "Reach_Sniper_Pauldron_Right",
	//			  "Reach_CQB_Pauldron_Left",
	//			  "Reach_CQB_Pauldron_Right",
	//			  "Thigh_Pouch",
				  "H3_Armor_Upper",
				  "H3_Armor_Lower",
	//              "Reach_Armor_Upper",
	//              "Reach_Armor_Lower",
	//              "Forearm_Vent_Left",
	//              "Forearm_Vent_Right",
	//              "Canisters"
			};
		};
	};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////
//////////////////////////////////
	class MA_M56S_BDU;
	class UniformItem;
	class 14th_M56_Uniform:MA_M56S_BDU
	{
		author = "Hound";
		scope = 2;
		displayName = "[14th] M56 BDU";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelectionsTextures[]=
		{
        "MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"
		};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = 14th_Hammer_ODST;
			containerClass = Supply350;
			mass = 40;
		};
	};
};
class CfgVehicles
{
 class MA_M56S_Rucksack;
 class B_Soldier_F;
 class OPTRE_Weapon_Crate_ODST_S;
 class OPTRE_Ammo_SupplyPod_Empty;
 class OPTRE_S12_SOLA_Jetpack;
 class MA_M56S_Rucksack_ODST_Radio;
 class MA_M56S_BDU_Base;

	class 14th_HammerNCO_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 NCO Ruck";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad = 350;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
		//	"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"\14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTMNCO_Ruck_co.paa",
			"\14th_Uniforms\14th_Hammer\Textures\NCO\14th_BTM_SACK_Radio_co.paa"
		};
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=70000;
		tf_subtype="digital_lr";
	};
	class 14th_HammerBasic_Ruck: MA_M56S_Rucksack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Ruck";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad = 350;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_Ruck_co.paa",
			"14th_Uniforms\14th_Hammer\Textures\Basic\14th_Hammer_Ruck_Radio_co.paa"
		};
	};
	class 14th_HammerEOD_Ruck: MA_M56S_Rucksack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 EOD Ruck";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad = 550;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Ruck_co.paa",
			"14th_Uniforms\14th_Hammer\Textures\EOD\14th_Hammer_EOD_Backpack_Radio_co.paa"
		};
	};
	class 14th_HammerMedic_Ruck: MA_M56S_Rucksack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Hammer 1-1 Medic Ruck";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad = 550;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]=
		{
			"14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Ruck_co.paa",
			"14th_Uniforms\14th_Hammer\Textures\Medic\14TH_Hammer_Medic_Backpack_Radio_co.paa"
		};
	};
	class 14th_HammerNCO_ODST: MA_M56S_BDU_Base    
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[14th SOB] Hammer 1-1 NCO";
        faction = "Fac14th";
        editorSubcategory = "Sub14thBlue";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		backpack = "14th_HammerNCO_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_HammerNCO_Vest","14th_HammerNCO_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_HammerNCO_Vest","14th_HammerNCO_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
	class 14th_Hammer_ODST: MA_M56S_BDU_Base    
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[14th SOB] Hammer 1-1 ODST";
        faction = "Fac14th";
        editorSubcategory = "Sub14thBlue";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		backpack = "14th_HammerBasic_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_HammerBasic_Vest","14th_HammerBasic_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_HammerBasic_Vest","14th_HammerBasic_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
	class 14th_Hammer_Medic: MA_M56S_BDU_Base    
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[14th SOB] Hammer 1-1 Medic";
        faction = "Fac14th";
        editorSubcategory = "Sub14thBlue";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		attendant = true;
		backpack = "14th_HammerMedic_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_HammerMedic_Vest","14th_HammerMedic_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_HammerMedic_Vest","14th_HammerMedic_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
	class 14th_Hammer_EOD: MA_M56S_BDU_Base    
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[14th SOB] Hammer 1-1 EOD";
        faction = "Fac14th";
        editorSubcategory = "Sub14thBlue";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		engineer = true;
		canDeactivateMines = true;
		backpack = "14th_HammerEOD_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_HammerEOD_Vest","14th_HammerEOD_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_HammerEOD_Vest","14th_HammerEOD_Helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
};