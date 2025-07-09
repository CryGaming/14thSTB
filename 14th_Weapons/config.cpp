#include "\cfgPatches.hpp"
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
class cfgMagazines
{
	class OPTRE_8Rnd_127x40_Mag;
	class 14th_10000_MMM: OPTRE_8Rnd_127x40_Mag
	{
		scope = 2;
		displayName = "[14th] MEME MAGIC MAG";
		descriptionShort = "14th MMM";
		displaynameshort = "14th";
		count = 10000;
		initSpeed = 5060;
		tracersEvery = 1;
		lastRoundsTracer = 999;
	};
};
class cfgWeapons
{
	class hgun_P07_F;
	class 14th_MachinePistol9mm: hgun_P07_F
	{
		displayName = "[14th] Magic Missle Machine";
		baseWeapon = "14th_MachinePistol9mm";
		modes[] = {"FullAuto"};
		autoFire = 0;
		magazines[] = {"14th_10000_MMM"};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.02;
			autoFire = 1;
        sounds[]=
        {
            "StandardSound"
        };
		};
	};
};