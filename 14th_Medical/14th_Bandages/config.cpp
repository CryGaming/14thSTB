#include "\cfgPatches.hpp"
class CfgFunctions
{
	class OPTRE
	{
		class ACE_Compat
		{
			class treatmentBandageAndPainReduction;
			class treatmentBandageAndPainReductionLocal;
		};
	};
};
class CfgWeapons
{
	class Default;
	class ACE_ItemCore;
	class ItemCore: Default
	{
		class ItemInfo;
	};
	class CBA_MiscItem_ItemInfo;
	class ACE_fieldDressing;
	class 14th_MedKit: ACE_ItemCore
	{
		scope = 2;
		author = "Hound";
		displayName = "[14th] Medical Kit";
		picture = "\OPTRE_weapons\items\icons\medkit.paa";
		model = "\OPTRE_Weapons\items\MedKit.p3d";
		descriptionShort = "Medical Kit to treat all combat inflicted wounds and injuries";
		type = 0;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
	};
	class 14th_Biofoam: ACE_fieldDressing
	{
		scope = 2;
		author = "Hound";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		displayName = "[14th] Biofoam Canister";
		descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		descriptionUse = "Applying Biofoam...";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
	};
	class 14th_Medigel: ACE_fieldDressing
	{
		scope = 2;
		author = "Hound";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		displayName = "[14th] Medigel";
		descriptionShort = "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		descriptionUse = "Injecting Medigel...";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
	};
};
class CfgVehicles
{

	class Item_Base_F;
	class ACE_fieldDressingItem;
	class 14th_BiofoamItem: ACE_fieldDressingItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[14th] Biofoam";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name = "14th_Biofoam";
				count = 1;
			};
		};
	};
	class 14th_MediGelItem: ACE_fieldDressingItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[14th] Medigel";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Medigel
			{
				name = "14th_Medigel";
				count = 1;
			};
		};
	};
	class 14th_MedkitItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[14th] Medkit";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Medkit
			{
				name = "14th_Medkit";
				count = 1;
			};
		};
	};
};
class ACE_Medical_Treatment
{
	class Bandaging
	{
		class OPTRE_Biofoam;
		class 14th_Biofoam: OPTRE_Biofoam
		{
			class Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AbrasionMinor: Abrasion{};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 6;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = ;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 5;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 6;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 7;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class ContusionMinor: Contusion{};
			class ContusionMedium: Contusion{};
			class ContusionLarge: Contusion{};
			class Crush: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CrushMinor: Crush
			{
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 2.25;
			};
			class CrushLarge: Crush
			{
				effectiveness = 2;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 6;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CutMinor: Cut{};
			class CutMedium: Cut
			{
				effectiveness = 4;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class LacerationMinor: Laceration{};
			class LacerationMedium: Laceration
			{
				effectiveness = 4;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class velocityWoundMinor: velocityWound{};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 4;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 3;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class punctureWoundMinor: punctureWound{};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 3;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 2.5;
			};
		};
		class OPTRE_Medigel;
		class 14th_Medigel: OPTRE_Medigel
		{
			class Abrasion
			{
				effectiveness = 3.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AbrasionMinor: Abrasion{};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class ThermalBurn: Abrasion
			{
				effectiveness = 3.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 2.25;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 2;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 2.25;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class ContusionMinor: Contusion{};
			class ContusionMedium: Contusion{};
			class ContusionLarge: Contusion{};
			class Crush: Abrasion
			{
				effectiveness = 2;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CrushMinor: Crush
			{
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness = 1.75;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 4.5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CutMinor: Cut{};
			class CutMedium: Cut
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 2.75;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 2.5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class LacerationMinor: Laceration{};
			class LacerationMedium: Laceration
			{
				effectiveness = 2;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 1.75;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class velocityWoundMinor: velocityWound{};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 2.75;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 2;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 2.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class punctureWoundMinor: punctureWound{};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 2.15;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 2;
			};
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class BasicBandage;
	class 14th_Biofoam: BasicBandage
	{
		displayName = "Inject [14th] Biofoam";
		displayNameProgress = "Injecting [14th] Biofoam...";
		treatmentTime = 5;
		items[] = {"14th_Biofoam"};
		callbackSuccess = "[_medic, _patient, _bodyPart, _className] call OPTRE_fnc_treatmentBandageAndPainReduction;[_patient, _bodyPart] call kat_pharma_fnc_treatmentAdvanced_TXALocal;";
		animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Biofoam"}};
	};
	class 14th_Medigel: BasicBandage
	{
		displayName = "Apply [14th] Medigel";
		displayNameProgress = "Applying [14th] Medigel...";
		treatmentTime = 5;
		items[] = {"14th_Medigel"};
		callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Medigel"}};
	};
	class PersonalAidKit;
	class 14th_Medkit: PersonalAidKit
	{
		displayName = "Use [14th] Medkit";
		displayNameProgress = "Using [14th] Medkit...";
		treatmentTime = 5;
		items[] = {"14th_MedKit"};
		icon = "OPTRE_Weapons\Items\icons\medkit.paa";
		litter[] = {{},{"ACE_MedicalLitter_Medkit"}};
	};
};
