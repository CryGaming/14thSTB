#include "\cfgPatches.hpp"
class CfgVehicles
{
	class OPTRE_Weapon_Crate_ODST_S;
	class OPTRE_Ammo_SupplyPod_Empty;
	class PMC_Laptop_3S;
 
	class 14th_Arsenal_Box: OPTRE_Weapon_Crate_ODST_S     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th] Full Arsenal Box";
		editorCategory = "14th_Objects";
        editorSubcategory = "14th_Obj_Supplies";
		hiddenSelections[] = {"Texture_Case"};
		hiddenSelectionsTextures[] = {"optre_buildings\military\data\weapon_crate_ODST_co.paa"};
		class UserActions
		{
			class 14th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 14th_GiveMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 14th_TakeMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 14th_GiveEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 14th_TakeEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 14th_GiveEODPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 14th_TakeEODPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 14th_GiveHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""UAVHacker "") || !(player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 1];";
			};
			class 14th_TakeHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""UAVHacker "") || (player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 0];";
			};
			class 14th_Arsenal: 14th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
	class 14th_Arsenal_POD: OPTRE_Ammo_SupplyPod_Empty     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th] Full Arsenal Pod";
		editorCategory = "14th_Objects";
        editorSubcategory = "14th_Obj_Supplies";
		hiddenSelections[] = {"Texture_Case"};
		hiddenSelectionsTextures[] = {"optre_buildings\military\data\weapon_crate_ODST_co.paa"};
		class UserActions
		{
			class 14th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 14th_GiveMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 14th_TakeMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 14th_GiveEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 14th_TakeEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 14th_GiveEODPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 14th_TakeEODPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 14th_GiveHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""UAVHacker "") || !(player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 1];";
			};
			class 14th_TakeHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""UAVHacker "") || (player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 0];";
			};
			class 14th_Arsenal: 14th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
	class 14th_Arsenal_LAPTOP: PMC_Laptop_3S     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[14th] Full Arsenal Laptop";
		editorCategory = "14th_Objects";
        editorSubcategory = "14th_Obj_Supplies";
		hiddenSelections[] = {"Texture_Case"};
		hiddenSelectionsTextures[] = {"optre_buildings\military\data\weapon_crate_ODST_co.paa"};
		class UserActions
		{
			class 14th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 14th_GiveMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 14th_TakeMedicPerms: 14th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 14th_GiveEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 14th_TakeEngiPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 14th_GiveEODPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 14th_TakeEODPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 14th_GiveHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""UAVHacker "") || !(player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 1];";
			};
			class 14th_TakeHackerPerms: 14th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove UAV Hacker Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""UAVHacker "") || (player getUnitTrait ""UAVHacker "")";
				statement = "player setUnitTrait [""UAVHacker "", 0];";
			};
			class 14th_Arsenal: 14th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
};