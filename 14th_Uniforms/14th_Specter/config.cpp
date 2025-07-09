#include "\cfgPatches.hpp"
class CfgWeapons 
{
	/// H3 ODST Helmets
	class MA_M56SH_Helmet;
	class MA_M56S_Vest;
	class MA_M56S_Medic_Vest;
	class ItemInfo;
	class VestItem;
	class MA_M56SR_Helmet;
	class MA_M56R_Vest;
	class HeadgearItem;
	
	class 14th_ReconBase_helmet:MA_M56SR_Helmet
	{
		scope = 1;
        scopeArsenal = 1;
        picture = "MA_Armor\data\Icons\H3_ODST_Helmet.paa";
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
	class 14th_Specter_NCO_helmet: 14th_ReconBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 NCO Helmet";
		picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Helmet.paa",
        "14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterBase_Visor_co.paa"
		};
	};
	class 14th_Specter_Medic_helmet: 14th_ReconBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Medic Helmet";
		picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Helmet.paa",
        "14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterBase_Visor_co.paa"
		};
	};
	class 14th_Specter_Basic_helmet: 14th_ReconBase_helmet
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Helmet";
		picture="MA_Armor\data\Icons\H3_ODST_Helmet.paa";
		hiddenSelectionsTextures[]=
		{
        "14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Helmet.paa",
		"14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Visor_co.paa"
		};
	};
	class 14th_ReconBase_Vest: MA_M56R_Vest
	{
		scope=1;
		scopeArsenal=1;
		displayName="[14th] Base Recon Vest";
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
	              "Reach_Pauldron_Left",
	              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
	//			  "Reach_Sniper_Pauldron_Left",
	//			  "Reach_Sniper_Pauldron_Right",
				  "Reach_CQB_Pauldron_Left",
				  "Reach_CQB_Pauldron_Right",
	//			  "Thigh_Pouch",
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
	class 14th_ReconVest_M56R: 14th_ReconBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "\14th_Uniforms\14th_Specter\Textures\Basic\14th_Canisters.paa",      //camo6 (Canisters)
            "\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
	};
	class 14th_ReconNCOVest_M56R: 14th_ReconBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 NCO Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_Canisters.paa",      //camo6 (Canisters)
            "\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
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
	              "Reach_Pauldron_Left",
	//              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
	//			  "Reach_Sniper_Pauldron_Left",
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
	              "Canisters"
			};
		};
	};
	class 14th_ReconMedicVest_M56R: 14th_ReconBase_Vest
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Medic Vest";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="\MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]=
		{
            "MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",       //camo1 (H3 Upper Armor)
            "MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",       //camo2 (H3 Lower Armor)
            "MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",//camo3 (Thigh Pouch)
            "\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Upper_co.paa",    //camo4 (Reach Upper Armor)
            "\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Lower_co.paa",    //camo5 (Reach Lower Armor)
            "\14th_Uniforms\14th_Specter\Textures\Medic\14th_Canisters.paa",      //camo6 (Canisters)
            "\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Sniper_co.paa", //camo8 (Sniper Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",  //camo9 (CQB Shoulders)
            "MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa" //camo10 (Shoulder Radio)
		};
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
	              "Reach_Pauldron_Right",
				  "Reach_Shoulder_Radio_Left",
				  "Reach_Shoulder_Radio_Right",
				  "Reach_Sniper_Pauldron_Left",
	//			  "Reach_Sniper_Pauldron_Right",
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
};
class CfgVehicles
{
 class MA_M56S_Rucksack;
 class B_Soldier_F;
 class OPTRE_Weapon_Crate_ODST_S;
 class OPTRE_Ammo_SupplyPod_Empty;
 class OPTRE_S12_SOLA_Jetpack;
 class MA_M56S_Rucksack_ODST_Radio;

	class 14th_SpecterNCO_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 NCO Ruck";
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
			"\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterNCO_Ruck_co.paa",
			"\14th_Uniforms\14th_Specter\Textures\Team_Lead\14th_SpecterBase_Backpack_Radio_co.paa"
		};
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=70000;
		tf_subtype="digital_lr";
	};
	class 14th_Specter_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Ruck";
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
			"\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Ruck_co.paa",
			"\14th_Uniforms\14th_Specter\Textures\Basic\14th_SpecterBase_Backpack_Radio_co.paa"
		};
	};
	class 14th_SpecterMedic_Ruck: MA_M56S_Rucksack_ODST_Radio
	{
		scope=2;
		scopeArsenal=2;
		displayName="[14th] Specter 3-1 Medic Ruck";
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
			"\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterMedic_Ruck_co.paa",
			"\14th_Uniforms\14th_Specter\Textures\Medic\14th_SpecterBase_Backpack_Radio_co.paa"
		};
	};
	class 14th_Specter_ODST: B_Soldier_F    
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th SOB] Specter 3-1 ODST";
        faction = "Fac14th";
        editorSubcategory = "Sub14thPurple";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		backpack = "14th_Specter_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_ReconVest_M56R","14th_Specter_Basic_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_ReconVest_M56R","14th_Specter_Basic_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
	class 14th_Specter_NCO_ODST: B_Soldier_F    
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th SOB] Specter 3-1 NCO";
        faction = "Fac14th";
        editorSubcategory = "Sub14thPurple";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		backpack = "14th_Specter_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_ReconNCOVest_M56R","14th_Specter_NCO_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_ReconNCOVest_M56R","14th_Specter_NCO_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
	class 14th_Specter_Medic_ODST: B_Soldier_F    
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th SOB] Specter 3-1 Medic";
        faction = "Fac14th";
        editorSubcategory = "Sub14thPurple";
        uniformclass = "14th_M56_Uniform";
		facewear = "";
		allowedfacewear[] = {""};
		allowedHeadgear[] = {""};
		llowedHeadgearB[] = {""};
		headgearList[] = {""};
		backpack = "14th_Specter_Ruck";
		weapons[]={"OPTRE_MA37B","Put","Throw"};
		respawnWeapons[]={"OPTRE_MA37B","Put","Throw"};
		magazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
		respawnMagazines[]={"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer"};
        hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
        linkedItems[] = {"14th_ReconMedicVest_M56R","14th_Specter_Medic_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
        respawnLinkedItems[] = {"14th_ReconMedicVest_M56R","14th_Specter_Medic_helmet","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass"};
    };
};