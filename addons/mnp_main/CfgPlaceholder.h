class I_Soldier_base_F;
class C_mnp_base : I_Soldier_base_F {
    scope = 1;
    displayName = "MNP Unit";
    modelSides[] = {3,1,0,2};
    faction = MNP_MISC;
    author = "ARK";
};
class C_mnp_1 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_1";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_BushCam_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_2 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_2";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Bushcam_A.paa", "\x\mnp_units\addons\mnp_main\data\C_FrLiz_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_3 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_3";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Duck_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_4 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_4";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FrLiz_A.paa", "\x\mnp_units\addons\mnp_main\data\C_FrLiz_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_5 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_5";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SPLRain_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_6 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_AMerc_6";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Duck_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Duck_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_7 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US3Co_Rg";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
    hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
    model = "\A3\Characters_F\OPFOR\O_officer.p3d";
};
class C_mnp_8 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US3Co_Sh";
    hiddenSelections[] = {"Camo1", "Insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_9 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US3Co_A";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_10 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US3Co_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_11 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US6co_A";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_12 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_US6co_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_13 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_DPMR";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPM_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_14 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_DDPMR";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DDPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DDPM_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_15 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B"; //the uniform item
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
};
class C_mnp_16 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_IR_BSJ_Med";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_17 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_IR_IRGC_Med"; //the uniform item
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_18 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC3_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T3.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_19 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC3";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T3.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_20 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC2_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T2.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_21 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC2";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T2.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_22 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T3.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_23 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_ASA_GC_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_24 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_Wood_A";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
};
class C_mnp_25 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_Wood_B";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
    model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
};
class C_mnp_28 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_OD_Rg";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa"};
    hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
    model = "\A3\Characters_F\OPFOR\O_officer.p3d";
};
class C_mnp_29 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_OD_Sh";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_30 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_Police";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_POPO_A.paa", "\x\mnp_units\addons\mnp_main\data\C_POPO_B.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class C_mnp_31 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_Rebel_A";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\rev_2.paa"};
    model = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
};
class C_mnp_32 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_Rebel_B";
    hiddenSelections[] = {"Camo1", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\rev_1.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_33 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO_Sh";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_34 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO_Rg";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa"};
    hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
    model = "\A3\Characters_F\OPFOR\O_officer.p3d";
};
class C_mnp_35 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO4_Sh";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_36 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO4_Rg";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa"};
    hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
    model = "\A3\Characters_F\OPFOR\O_officer.p3d";
};
class C_mnp_37 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO2_Sh";
    hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
    model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
};
class C_mnp_38 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_RO2_Rg";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa"};
    hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
    model = "\A3\Characters_F\OPFOR\O_officer.p3d";
};
class C_mnp_40 : C_mnp_base {
    uniformClass = "MNP_CombatUniform_China_SF";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAP_SFA.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAP_SFB.paa"};
    model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};