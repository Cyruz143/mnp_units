// IndentityTypes
#define ARAB_MEN \
    genericnames = "TakistaniMen";\
    identityTypes[] = {"LanguagePER_F","Head_TK","NoGlasses"};

#define ARAB_MEN_GOGGLES \
    genericnames = "TakistaniMen";\
    identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

#define ASIAN_MEN \
    genericnames = "ChineseMen";\
    identityTypes[] = {"LanguageCHI_F","Head_Asian","NoGlasses"};

#define ASIAN_MEN_GOGGLES \
    genericnames = "ChineseMen";\
    identityTypes[] = {"LanguageCHI_F","Head_Asian","G_NATO_default"};

#define EURO_MEN \
    genericnames = "NATOMen";\
    identityTypes[] = {"LanguageENG_F","Head_Euro","Head_NATO","NoGlasses"};

#define EURO_MEN_GOGGLES \
    genericnames = "NATOMen";\
    identityTypes[] = {"LanguageENG_F","Head_Euro","Head_NATO","G_NATO_default"};

#define RUSSIAN_MEN \
    genericnames = "RussianMen";\
    identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","NoGlasses"};

#define RUSSIAN_MEN_GOGGLES \
    genericnames = "RussianMen";\
    identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","CUP_G_RU"};

/* 
 * Loudout guide:
 * ------------------------
 * Rifleman: 1 frag, 3 mags
 * FTL: 1 frag, 1 white smoke, 3 mags, 2 203s
 * AR: 1 frag, 3 boxes
 * AT: 0 frags, 3 mags, 1 AT round
 * MED: 0 frags, 1 blue smoke, 3 mags
 * MG: 0 frags, 2 boxes
 */

//Riflemen
#define M4A1_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_Mk16_STD", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_STD", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_Mk17_STD", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_STD", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"arifle_TRG21_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG21_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

#define AK74_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74S_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AKS74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74M_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AK74M_railed", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M_railed", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AK74M2_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AK74M", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AKME_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AKM_Early", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKM_Early", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"};

#define AK47_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_AK47", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK47", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"};

#define G3_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_G3A3_ris", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"};

#define G3KA4_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_G3A3_ris_vfg", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris_vfg", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"};

#define RK62_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"hlc_rifle_RK62", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_RK62", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"};

#define CTAR_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"arifle_CTAR_blk_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_CTAR_blk_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"};

#define KATIBA_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"arifle_Katiba_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_Katiba_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};

#define FAL_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_FNFAL5061", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_FNFAL5061", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"};

#define G36_RIFLEMAN \
    displayName = "Rifleman"; \
    weapons[] = {"CUP_arifle_G36K_RIS", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G36K_RIS", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"};

// FTL
#define M4A1_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define M16A4_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_M16A4_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define MK16_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_Mk16_STD_EGLM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_STD_EGLM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define MK17_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_Mk17_STD_EGLM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_STD_EGLM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define HK416_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_HK416_AGL_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_AGL_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define AUGA3_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"hlc_rifle_auga3_GL", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define TRG_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"arifle_TRG21_GL_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG21_GL_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define AK74_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AK74_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define AK74S_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AKS74_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define AK74M_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define AK74M2_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AK74M_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define AKME_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define AK47_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_AK47_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK47_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define G3_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"HLC_Rifle_g3ka4_GL", "Throw", "put"}; \
    respawnweapons[] = {"HLC_Rifle_g3ka4_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_b_G3", "CUP_1Rnd_HE_GP25_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell"};

#define CTAR_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"arifle_CTAR_GL_blk_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_CTAR_GL_blk_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define KATIBA_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"arifle_Katiba_C_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_Katiba_C_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define FAL_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_FNFAL5061", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_FNFAL5061", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define G36_FTL \
    displayName = "Team Leader"; \
    weapons[] = {"CUP_arifle_G36K_RIS_AG36", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G36K_RIS_AG36", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

// AR
#define M249pip1_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_m249_pip1", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip1", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M249pip3_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M249pip4_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_m249_pip4", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M249mini_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_minimipara", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_minimipara", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define MK48_DE_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_Mk48_des", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_Mk48_des", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define HK416_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire", "CUP_60Rnd_556x45_SureFire"};

#define M27_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_HK_M27", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK_M27", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15", "CUP_100Rnd_556x45_BetaCMag_ar15"};

#define MK200_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"LMG_Mk200_F", "Throw", "put"}; \
    respawnweapons[] = {"LMG_Mk200_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"}; \
    respawnmagazines[] = {"HandGrenade", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};

#define RPK74_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_RPK74_45", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_RPK74_45", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

#define RPK74M_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"};

#define RPK74M2_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_RPK74M", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_RPK74M", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M"};

#define RPK47_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_arifle_RPK74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_RPK74", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};

#define CTARS_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"arifle_CTARS_blk_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_CTARS_blk_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F"}; \
    respawnmagazines[] = {"HandGrenade", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F", "100Rnd_580x42_Mag_F"};

#define ZAFIR_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"LMG_Zafir_F", "Throw", "put"}; \
    respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box"}; \
    respawnmagazines[] = {"HandGrenade", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "150Rnd_762x54_Box"};

#define MG3_AR \
    displayName = "Automatic Rifleman"; \
    weapons[] = {"CUP_lmg_MG3", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_MG3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

// AT
#define M4A1_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_M16A4_Base", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_Mk16_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_Mk17_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk17_CQC_FG", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define HK416_AT2 \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"hlc_rifle_auga3", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"arifle_TRG20_F", "CUP_launch_Mk153Mod0", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG20_F", "CUP_launch_Mk153Mod0", "Throw", "put"}; \
    magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_SMAW_HEAA_M"}; \
    respawnmagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "CUP_SMAW_HEAA_M"};

#define AK74_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AK74", "CUP_launch_RPG7V", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "CUP_launch_RPG7V", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_PG7V_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_PG7V_M"};

#define AK74S_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AKS74", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74M_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AK74M2_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AK74M", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AKME_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"};

#define AK47_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_AK47", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK47", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"}; \
    respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"};

#define G3_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_G3A3_ris", "CUP_launch_RPG7V", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris", "CUP_launch_RPG7V", "Throw", "put"}; \
    magazines[] = {"CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_PG7V_M"}; \
    respawnmagazines[] = {"CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_PG7V_M"};

#define G3KA4_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_G3A3_ris", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"}; \
    respawnmagazines[] = {"CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"};

#define RK62_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"hlc_rifle_RK62", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_RK62", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"}; \
    respawnmagazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"};

#define CTAR_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"arifle_CTAR_blk_F", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"arifle_CTAR_blk_F", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"}; \
    respawnmagazines[] = {"30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"};

#define KATIBA_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"arifle_Katiba_F", "CUP_launch_RPG18", "Throw", "put"}; \
    respawnweapons[] = {"arifle_Katiba_F", "CUP_launch_RPG18", "Throw", "put"}; \
    magazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"}; \
    respawnmagazines[] = {"30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};

#define FAL_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_FNFAL", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_FNFAL", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"}; \
    respawnmagazines[] = {"CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"};

#define G36_AT \
    displayName = "Rifleman (AT)"; \
    weapons[] = {"CUP_arifle_G36K_RIS", "CUP_launch_M72A6", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G36K_RIS", "CUP_launch_M72A6", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"};

// Med
#define M4A1_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M16A4_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M16A4_Base", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define MK16_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16", "CUP_30Rnd_556x45_Stanag_Mk16"};

#define MK17_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_Mk17_CQC_FG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_Mk16_CQC_FG", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR", "CUP_20Rnd_762x51_B_SCAR"};

#define HK416_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_HK416_Black", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag", "CUP_30Rnd_556x45_Emag"};

#define AUGA3_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_auga3", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"}; \
    respawnmagazines[] = {"SmokeShellBlue", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_B_AUG"};

#define TRG_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"arifle_TRG20_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_TRG20_F", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

#define AK74_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74S_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AKS74", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74SU_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AKS74U", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74U", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_545x39_AK_M"};

#define AK74U_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AK74M_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AK74M", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AK74M", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M"};

#define AKME_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_AKS", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_AKS", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M"};

#define G3_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_G3A3_ris", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"};

#define G3KA4_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_G3A3_ris_vfg", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G3A3_ris_vfg", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3", "CUP_20Rnd_762x51_G3"};

#define RK62_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"hlc_rifle_RK62", "Throw", "put"}; \
    respawnweapons[] = {"hlc_rifle_RK62", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"}; \
    respawnmagazines[] = {"SmokeShellBlue", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak"};

#define CTAR_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"arifle_CTAR_blk_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_CTAR_blk_F", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"}; \
    respawnmagazines[] = {"SmokeShellBlue", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F", "30Rnd_580x42_Mag_F"};

#define KATIBA_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"arifle_Katiba_F", "Throw", "put"}; \
    respawnweapons[] = {"arifle_Katiba_F", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"}; \
    respawnmagazines[] = {"SmokeShellBlue", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};

#define FAL_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_FNFAL", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M", "CUP_20Rnd_762x51_FNFAL_M"};

#define G36_MED \
    displayName = "Combat Medic"; \
    weapons[] = {"CUP_arifle_G36C_VFG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_G36C_VFG", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_556x45_G36"};

// MMG
#define M240_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define FNMAG_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_FNMAG", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_FNMAG", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define FNMAGRIS_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_FNMAG_RIS", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_FNMAG_RIS", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};

#define FNMAGRIS_MG_G \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_FNMAG_RIS", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_FNMAG_RIS", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M"};

#define MG3_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_MG3_rail", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_MG3_rail", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"};

#define PKM_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_PKM", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_PKM", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

#define PKP_MG \
    displayName = "Machinegunner"; \
    weapons[] = {"CUP_lmg_Pecheneg", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_Pecheneg", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};