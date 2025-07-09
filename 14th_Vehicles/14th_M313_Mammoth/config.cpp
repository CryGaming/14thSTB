#include "\cfgPatches.hpp"
class CfgVehicles
{
	class OPTRE_M313_UNSC;
	class 14th_Mammoth_Tank: OPTRE_M313_UNSC
	{
		author="Hound";
		displayname="[14th] Mammoth";
        scope=2;
        faction = "Fac14th";
        editorSubcategory = "sub14thTank";
        crew = "14th_Logi_ODST";
		maxSpeed = 300;
		acceleration = 120;
		enginePower = 1000;
		peakTorque = 8000;
	};
};