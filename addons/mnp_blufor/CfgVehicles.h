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
    // US Army Multicam
    class MNP_US_MC_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DS_A"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M4A1_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SD.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_MC; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US_MC_Soldier_AR : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DS_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M249pip1_AR
        EURO_MEN_GOGGLES
        backpack = "B_Carryall_khk";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SD.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_MC; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US_MC_Soldier_MG : MNP_US_MC_Soldier_F {
        backpack = "B_Carryall_khk";
        M240_MG
    };
    class MNP_US_MC_Soldier_M : MNP_US_MC_Soldier_AR {
        backpack = "B_AssaultPack_khk";
        attendant = 1;
        M4A1_MED
    };
    class MNP_US_MC_Soldier_O : MNP_US_MC_Soldier_AR {
        backpack = "";
        M4A1_FTL
    };
    class MNP_US_MC_Soldier_AT : MNP_US_MC_Soldier_F {
        backpack = "B_Carryall_khk";
        M4A1_AT
    };
    // US ARMY ACU
    class MNP_USACU_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_C"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M4A1_RIFLEMAN
        EURO_MEN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        linkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_ACU; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USACU_Soldier_AR : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_E"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M249pip1_AR
        EURO_MEN
        backpack = "MNP_B_ACU_KB";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_ACU; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USACU_Soldier_MG : MNP_USACU_Soldier_F {
        uniformClass = "MNP_CombatUniform_Ranger_E"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        backpack = "MNP_B_ACU_KB";
        M240_MG
        linkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_USACU_Soldier_M : MNP_USACU_Soldier_AR {
        uniformClass = "MNP_CombatUniform_Ranger_C"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        backpack = "MNP_B_ACU_AP";
        attendant = 1;
        M4A1_MED
        linkedItems[] = {"MNP_Boonie_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_ACU; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USACU_Soldier_O : MNP_USACU_Soldier_AR {
        M4A1_FTL
        linkedItems[] = {"MNP_Boonie_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_ACU", "MNP_Vest_ACU_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_USACU_Soldier_AT : MNP_USACU_Soldier_MG {
        backpack = "MNP_B_ACU_KB";
        M4A1_AT
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "MNP_Vest_ACU_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "MNP_Vest_ACU_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Dark Multicam -- Needs to be redressed as Rangers
    class MNP_TS_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_A"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        MK17_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_RAN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_TS_Soldier_AR : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        MK48_DE_AR
        EURO_MEN_GOGGLES
        backpack = "B_Carryall_khk";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_RAN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_TS_Soldier_O : MNP_TS_Soldier_F{
        MK17_FTL
    };
    class MNP_TS_Soldier_MG : MNP_TS_Soldier_AR{
        backpack = "B_Carryall_khk";
        M240_MG
    };
    class MNP_TS_Soldier_AT : MNP_TS_Soldier_F{
        backpack = "B_Carryall_khk";
        MK17_AT
    };
    class MNP_TS_Soldier_M : MNP_TS_Soldier_AR{
        attendant = 1;
        backpack = "B_AssaultPack_khk";
        MK17_MED
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
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles_OPFOR", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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