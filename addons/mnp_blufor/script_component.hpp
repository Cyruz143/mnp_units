/* -- Loudout guide 
Rifleman: 1 frag, 3 mags
FTL: 1 frag, 1 white smoke, 3 mags, 2 203s
AR: 1 frag, 3 boxes
AT: 0 frags, 3 mags, 1 AT round
MED: 0 frags, 1 blue smoke, 3 mags
MG: 0 frags, 3 boxes
*/

//Riflemen
#define M4A1_RIFLEMAN \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_RIFLEMAN \
    weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_RIFLEMAN \
    weapons[] = {"CUP_arifle_Mk16_STD", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_STD", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_RIFLEMAN \
    weapons[] = {"CUP_arifle_Mk17_STD", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_STD", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_RIFLEMAN \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_RIFLEMAN \
    weapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_RIFLEMAN \
    weapons[] = {"arifle_TRG21_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG21_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

#define AK74_RIFLEMAN \
    weapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

// FTL
#define M4A1_FTL \
    weapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define M16A4_FTL \
    weapons[] = {"CUP_arifle_M16A4_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define MK16_FTL \
    weapons[] = {"CUP_arifle_Mk16_STD_EGLM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_STD_EGLM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define MK17_FTL \
    weapons[] = {"CUP_arifle_Mk17_STD_EGLM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_STD_EGLM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define HK416_FTL \
    weapons[] = {"CUP_arifle_HK416_AGL_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_AGL_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define AUGA3_FTL \
    weapons[] = {"hlc_rifle_auga3_GL", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define TRG_FTL \
    weapons[] = {"arifle_TRG21_GL_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG21_GL_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define AK74_FTL \
    weapons[] = {"CUP_arifle_AK74_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

// AR
#define M249pip3_AR \
    weapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M249pip4_AR \
    weapons[] = {"CUP_lmg_m249_pip4", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M249mini_AR \
    weapons[] = {"CUP_lmg_minimipara", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_minimipara", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define MK48_DE_AR \
    weapons[] = {"CUP_lmg_Mk48_des", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_Mk48_des", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define HK416_AR \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire"};

#define M27_AR \
    weapons[] = {"CUP_arifle_HK_M27", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK_M27", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15"};

#define MK200_AR \
    weapons[] = {"LMG_Mk200_F", "Throw", "put"}; \
    respawnweapons[] = {"LMG_Mk200_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"}; \
    respawnmagazines[] = {"HandGrenade", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};

#define RPK74_AR \
    weapons[] = {"CUP_arifle_RPK74_45", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_RPK74_45", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

// AT
#define M4A1_AT \
    weapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_AT \
    weapons[] = {"CUP_arifle_M16A4_Base", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_AT \
    weapons[] = {"CUP_arifle_Mk16_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_AT \
    weapons[] = {"CUP_arifle_Mk17_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_AT \
    weapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_AT \
    weapons[] = {"hlc_rifle_auga3", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_AT \
    weapons[] = {"arifle_TRG20_F", "launch_MRAWS_green_rail_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG20_F", "launch_MRAWS_green_rail_F", "Throw", "put"}; \
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MRAWS_HEAT_F"}; \
    respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "MRAWS_HEAT_F"};

#define AK74_AT \
    weapons[] = {"CUP_arifle_AK74", "CUP_launch_RPG7V", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "CUP_launch_RPG7V", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_PG7V_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_PG7V_M"};

// Med
#define M4A1_MED \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_MED \
    weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_MED \
    weapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_MED \
    weapons[] = {"CUP_arifle_Mk17_CQC_FG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_MED \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_MED \
    weapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"SmokeShellBlue", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_MED \
    weapons[] = {"arifle_TRG20_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG20_F", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

#define AK74_MED \
    weapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

// MMG
#define M240_MG \
    weapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define MG3_MG \
    weapons[] = {"hlc_lmg_MG3", "Throw", "put"}; \
    respawnweapons[] = {"hlc_lmg_MG3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_100Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_M_MG3"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_100Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_M_MG3"};

#define PKM_MG \
    weapons[] = {"CUP_lmg_PKM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_PKM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};