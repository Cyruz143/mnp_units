class CfgVehicles {
    class B_Soldier_base_F;

    // Canadian Rifles
    class MNP_Canada_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M16A4_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_CA_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_S : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_S"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        M16A4_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_CA_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_AR : MNP_Canada_Soldier_S{
        backpack = "B_Kitbag_sgg";
        M249pip3_AR
    };
    class MNP_Canada_Soldier_MG : MNP_Canada_Soldier_S{
        backpack = "B_Kitbag_sgg";
        M240_MG
    };
    class MNP_Canada_Soldier_M : MNP_Canada_Soldier_F{
        backpack = "B_AssaultPack_sgg";
        attendant = 1;
        M16A4_MED
    };
    class MNP_Canada_Soldier_AT : MNP_Canada_Soldier_S{
        backpack = "B_Kitbag_sgg";
        M16A4_AT
    };
    // Canadian Desert Rifles
    class MNP_Canada_Soldier_DF : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_D"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M16A4_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_CA_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_DS : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_DS"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        M16A4_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_CA_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_DAR : MNP_Canada_Soldier_DS{
        backpack = "B_Kitbag_cbr";
        M249pip3_AR
    };
    class MNP_Canada_Soldier_DMG : MNP_Canada_Soldier_DS{
        backpack = "B_Kitbag_cbr";
        M240_MG
    };
    class MNP_Canada_Soldier_DM : MNP_Canada_Soldier_DF{
        backpack = "B_AssaultPack_cbr";
        M16A4_MED
    };
    class MNP_Canada_Soldier_DAT : MNP_Canada_Soldier_DS{
        backpack = "B_Kitbag_cbr";
        M16A4_AT
    };

    // Australia
    class MNP_AUS_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Australia"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        AUGA3_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        linkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AUS; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AUS_Soldier_S : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Australia_S"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        AUGA3_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        linkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AUS; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AUS_Soldier_AR : MNP_AUS_Soldier_S{
        backpack = "B_Kitbag_rgr";
        M249mini_AR
    };
    class MNP_AUS_Soldier_MG : MNP_AUS_Soldier_F{
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_AUS_Soldier_AT : MNP_AUS_Soldier_S{
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
    };
    class MNP_AUS_Soldier_MD : MNP_AUS_Soldier_S{
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
    };

    // Republic of Korea
    class MNP_ROK_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROK_B"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        ASIAN_MEN_GOGGLES
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        M16A4_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROK; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROK_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROK_A"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        ASIAN_MEN_GOGGLES
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        M16A4_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROK; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROK_Soldier_AR : MNP_ROK_Soldier_F{
        backpack = "MNP_B_ROK_KB";
        M249mini_AR
    };
    class MNP_ROK_Soldier_MG : MNP_ROK_Soldier_F{
        backpack = "MNP_B_ROK_KB";
        M240_MG
    };
    class MNP_ROK_Soldier_AT : MNP_ROK_Soldier_F{
        backpack = "MNP_B_ROK_KB";
        M16A4_AT
    };
    class MNP_ROK_Soldier_M : MNP_ROK_Soldier_O{
        attendant = 1;
        backpack = "MNP_B_ROK_AP";
        M16A4_MED
    };

    // US Arctic Warfare
    class MNP_USMCA_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_USMC_arctic"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M4A1_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "CUP_V_PMC_CIRAS_Winter_Patrol", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "CUP_V_PMC_CIRAS_Winter_Patrol", "G_Balaclava_blk", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_USMCA_SN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USMCA_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_USMC_arctic_B"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M4A1_FTL
        EURO_MEN_GOGGLES
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "CUP_V_PMC_CIRAS_Winter_TL", "CUP_G_ESS_BLK_Dark", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "CUP_V_PMC_CIRAS_Winter_TL", "CUP_G_ESS_BLK_Dark", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_USMCA_SN; // Puts unit under new faction
    };
    class MNP_USMCA_Soldier_AR : MNP_USMCA_Soldier_F{
        backpack = "MNP_B_WB_KB";
        M27_AR
    };
    class MNP_USMCA_Soldier_AT : MNP_USMCA_Soldier_F{
        backpack = "MNP_B_WB_KB";
        M4A1_AT
    };
    class MNP_USMCA_Soldier_MG : MNP_USMCA_Soldier_F{
        backpack = "MNP_B_WB_KB";
        M240_MG
    };
    class MNP_USMCA_Soldier_MD : MNP_USMCA_Soldier_O{
        backpack = "MNP_B_WB_AP";
        attendant = 1;
        M4A1_MED
    };

    // Ukrainian
    class MNP_UKR_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ukrainian"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        AK74_RIFLEMAN
        RUSSIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_UKR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_UKR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_UKR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_UKR_MG : MNP_UKR_A{
        backpack = "B_FieldPack_khk";
        PKM_MG
    };
    class MNP_UKR_AR : MNP_UKR_A{
        backpack = "B_FieldPack_khk";
        RPK74_AR
    };
    class MNP_UKR_AT : MNP_UKR_A{
        backpack = "B_Kitbag_rgr_RPG7";
        AK74_AT
    };
    class MNP_UKR_O : MNP_UKR_A{
        AK74_FTL
    };
    class MNP_UKR_MD : MNP_UKR_A{
        backpack = "B_FieldPack_khk";
        attendant = 1;
        AK74_MED
    };

    // ROK Marines
    class MNP_ROKMC_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROKMC"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        HK416_RIFLEMAN
        ASIAN_MEN_GOGGLES
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROKMC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ROKMC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "ItemMap", "G_Aviator", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROK_SEAL; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROKMC_MG : MNP_ROKMC_A{
        backpack = "MNP_B_ROK_KB";
        M240_MG
    };
    class MNP_ROKMC_AR : MNP_ROKMC_A{
        backpack = "MNP_B_ROK_KB";
        HK416_AR
    };
    class MNP_ROKMC_AT : MNP_ROKMC_A{
        backpack = "MNP_B_ROK_KB";
        HK416_AT
    };
    class MNP_ROKMC_O : MNP_ROKMC_A{
        HK416_FTL
    };
    class MNP_ROKMC_MD : MNP_ROKMC_A{
        backpack = "MNP_B_ROK_AP";
        attendant = 1;
        HK416_MED
    };

    // Israeli Army
    class MNP_ISR_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ISR"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        TRG_RIFLEMAN
        ARAB_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ISR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ISR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_IDF; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ISR_MG : MNP_ISR_A{
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_ISR_AR : MNP_ISR_A{
        backpack = "B_Kitbag_rgr";
        M249pip4_AR
    };
    class MNP_ISR_AT : MNP_ISR_A{
        backpack = "B_Kitbag_rgr_MRAWS";
        TRG_AT
    };
    class MNP_ISR_O : MNP_ISR_A{
        TRG_FTL
    };
    class MNP_ISR_MD : MNP_ISR_A{
        backpack = "B_AssaultPack_rgr";
        attendant = 1;
        TRG_MED
    };

    // MNP_IRG_DE -- These are Iran, needs classname changed and woodland version
    class MNP_US6co_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_6CO"; //the uniform item
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        FAL_RIFLEMAN
        EURO_MEN
        linkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        faction = MNP_IRG_DE; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US6co_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_6CO_B"; //the uniform item
        hiddenSelections[] = {"Camo1", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        FAL_FTL
        EURO_MEN
        linkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        faction = MNP_IRG_DE; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US6Co_Soldier_AR : MNP_US6co_Soldier_F{
        backpack = "B_Kitbag_cbr";
        M249pip1_AR
    };
    class MNP_US6Co_Soldier_AT : MNP_US6co_Soldier_O{
        backpack = "B_Kitbag_cbr";
        FAL_AT
    };
    class MNP_US6Co_Soldier_MG : MNP_US6co_Soldier_F{
        backpack = "B_Kitbag_cbr";
        FNMAG_MG
    };
    class MNP_US6Co_Soldier_MD : MNP_US6co_Soldier_O{
        backpack = "B_AssaultPack_cbr";
        attendant = 1;
        FAL_MED
    };

    // Australian Multicam
    class MNP_AMCU_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_AMCU_T"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\mnp_units\addons\mnp_main\data\noPatch.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AUGA3_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AMCU; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AMCU_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_AMCU_ST"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\mnp_units\addons\mnp_main\data\noPatch.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AUGA3_FTL
        EURO_MEN_GOGGLES
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AMCU; // Puts unit under new faction
    };
    class MNP_AMCU_Soldier_AR : MNP_AMCU_Soldier_F{
        backpack = "B_Kitbag_rgr";
        M249pip3_AR
    };
    class MNP_AMCU_Soldier_AT : MNP_AMCU_Soldier_O{
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
    };
    class MNP_AMCU_Soldier_MG : MNP_AMCU_Soldier_F{
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_AMCU_Soldier_MD : MNP_AMCU_Soldier_O{
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
    };
};