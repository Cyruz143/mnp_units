class Uniform_Base;
class UniformItem;
class U_I_OfficerUniform;

class MNP_CombatUniform_Canada : Uniform_Base {
    scope = 2;
    displayName = "MNP: CADPAT Combat Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Canada_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply50"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_Canada_S : Uniform_Base {
    scope = 2;
    displayName = "MNP: CADPAT Combat Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Canada_Soldier_S"; //would be same as our made soldier class
        containerClass = "Supply50"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Canada_D : Uniform_Base {
    scope = 2;
    displayName = "MNP: CADPAT Combat Fatigues (Desert)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Canada_Soldier_DF"; //would be same as our made soldier class
        containerClass = "Supply70"; //how much it can carry
        mass = 40; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_Canada_DS : Uniform_Base {
    scope = 2;
    displayName = "MNP: CADPAT Combat Fatigues (Desert)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Canada_Soldier_DS"; //would be same as our made soldier class
        containerClass = "Supply70"; //how much it can carry
        mass = 40; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Australia : Uniform_Base {
    scope = 2;
    displayName = "MNP: AUSCAM Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_AUS_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_Australia_S : Uniform_Base {
    scope = 2;
    displayName = "MNP: AUSCAM Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_AUS_Soldier_S"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_ROK_A : Uniform_Base {
    scope = 2;
    displayName = "MNP: GRANITE-B Fatigues(ROK)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_ROK_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_ROK_B : Uniform_Base {
    scope = 2;
    displayName = "MNP: GRANITE-B Fatigues(ROK)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_ROK_Soldier_O"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Wood_A : Uniform_Base {
    scope = 2;
    displayName = "MNP: M81 Woodland Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_24"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_Wood_B : Uniform_Base {
    scope = 2;
    displayName = "MNP: M81 Woodland Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_25"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_OD_Sh : Uniform_Base {
        scope = 2;
        displayName = "MNP: Olive Drab BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa"};
        //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
        class ItemInfo : UniformItem {
        modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_29"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
};
class MNP_CombatUniform_OD_Rg : Uniform_Base {
    scope = 2;
    displayName = "MNP: Olive Drab BDU";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa"};
    hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_28"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_USMC_arctic : Uniform_Base {
    scope = 2;
    displayName = "MNP: Winter MARPAT Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_USMCA_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_USMC_arctic_B : Uniform_Base {
    scope = 2;
    displayName = "MNP: Winter MARPAT Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_USMCA_Soldier_O"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Police : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: Police Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_POPO_A.paa", "\x\mnp_units\addons\mnp_main\data\C_POPO_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_30"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Ukrainian : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: Ukrainian TTSkO Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_UKR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_UKR_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_UKR_A"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_DPMR : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: DPM Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPM_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_13"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_DDPMR : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: DPM Uniform(Desert)";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DDPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DDPM_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_14"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_ROKMC : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: ROKMC Digital Tiger Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROKMC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ROKMC_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_ROKMC_A"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_AMCU_T : Uniform_Base {
    scope = 2;
    displayName = "MNP: AMCU Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
    hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_AMCU_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply50"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_AMCU_ST : Uniform_Base {
    scope = 2;
    displayName = "MNP: AMCU uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
    hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_AMCU_Soldier_O"; //would be same as our made soldier class
        containerClass = "Supply50"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_ISR : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: Israeli Drab Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ISR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ISR_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_ISR_A"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_Tacneck_A : Uniform_Base {
    scope = 1;
    displayName = "MNP: Tactical Turtleneck";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Tac_Turtle.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Tac_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_Tacneck_B : Uniform_Base {
    scope = 1;
    displayName = "MNP: Tactical Turtleneck 2";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Tac_Turtle.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_Tac_Soldier_AR"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_US3Co : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: 3 Color Desert Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_A.paa", "\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_11"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_US3Co_A : Uniform_Base {
    scope = 2;
    displayName = "MNP: 3 Color Desert Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_9"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_US3Co_B : Uniform_Base {
    scope = 2;
    displayName = "MNP: 3 Color Desert Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_10"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_US3Co_Sh : Uniform_Base {
        scope = 2;
        displayName = "MNP: 3 Color Desert BDU (Shemagh)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
        //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
        class ItemInfo : UniformItem {
        modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_8"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
class MNP_CombatUniform_US3Co_Rg : Uniform_Base {
    scope = 2;
    displayName = "MNP: 3 Color Desert BDU";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
    hiddenSelectionsMaterials[]= {"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_7"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};

class MNP_CombatUniform_US6co : U_I_OfficerUniform {
    scope = 2;
    displayName = "MNP: 6 Color Desert Uniform";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa", "\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_14"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_US6co_A : Uniform_Base {
    scope = 2;
    displayName = "MNP: 6-Color Desert Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_11"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_US6co_B : Uniform_Base {
    scope = 2;
    displayName = "MNP: 6-Color Desert Fatigues";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "Clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "C_mnp_12"; //would be same as our made soldier class
        containerClass = "Supply100"; //how much it can carry
        mass = 10; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};
class MNP_CombatUniform_6CO_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: 6-Color Desert BDU (Shemagh)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
        class ItemInfo : UniformItem {
        modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_US6co_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
class MNP_CombatUniform_6CO : Uniform_Base {
    scope = 2;
    displayName = "MNP: 6-Color Desert BDU";
    picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
    model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
    hiddenSelections[] = {"Camo", "insignia", "clan"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
    hiddenSelectionsMaterials[]= {"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
    class ItemInfo : UniformItem {
        modelSides[] = {6};
        uniformModel = "-";
        uniformClass = "MNP_US6co_Soldier_F"; //would be same as our made soldier class
        containerClass = "Supply60"; //how much it can carry
        mass = 20; //how much it weights
        hiddenSelections[] = {"Camo"};
    };
};