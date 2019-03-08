class CfgVehicles {
    class B_Soldier_base_F;
    // Canadian Rifles
    class MNP_Canada_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_AssaultPack_rgr";
        M16A4_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        faction = MNP_CA_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_S : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_S"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        backpack = "B_Kitbag_rgr";
        M16A4_FTL
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        faction = MNP_CA_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_AR : MNP_Canada_Soldier_S{
        displayName = "Automatic Rifleman";
        backpack = "B_Kitbag_rgr";
        M249pip3_AR
    };
    class MNP_Canada_Soldier_MG : MNP_Canada_Soldier_S{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_Canada_Soldier_M : MNP_Canada_Soldier_F{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        M16A4_MED
    };
    class MNP_Canada_Soldier_AT : MNP_Canada_Soldier_S{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        M16A4_AT
    };
    // Canadian Desert Rifles
    class MNP_Canada_Soldier_DF : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_D"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_AssaultPack_rgr";
        M16A4_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        faction = MNP_CA_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_DS : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Canada_DS"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        backpack = "B_Kitbag_rgr";
        M16A4_FTL
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        faction = MNP_CA_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Canada_Soldier_DAR : MNP_Canada_Soldier_DS{
        displayName = "Automatic Rifleman";
        backpack = "B_Kitbag_rgr";
        M249pip3_AR
    };
    class MNP_Canada_Soldier_DMG : MNP_Canada_Soldier_DS{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_Canada_Soldier_DM : MNP_Canada_Soldier_DF{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        M16A4_MED
    };
    class MNP_Canada_Soldier_DAT : MNP_Canada_Soldier_DS{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        M16A4_AT
    };
    // GERMANY
    class MNP_GER_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Germany"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_Kitbag_rgr";
        HK416_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_GE_WD; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_GER_Soldier_S : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Germany_S"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        backpack = "B_Kitbag_rgr";
        HK416_FTL
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_GE_WD; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_GER_Soldier_AR : MNP_GER_Soldier_S{
        displayName = "Automatic Rifleman";
        backpack = "B_Kitbag_rgr";
        HK416_AR
    };
    class MNP_GER_Soldier_AT : MNP_GER_Soldier_S{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        HK416_AT
    };
    class MNP_GER_Soldier_MED : MNP_GER_Soldier_F{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        HK416_MED
    };
    class MNP_GER_Soldier_MG : MNP_GER_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        MG3_MG
    };
    // German Desert
    class MNP_GER_Soldier_DF : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Germany_D"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        backpack = "B_Kitbag_rgr";
        HK416_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_GE_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Germany_D", "MNP_Vest_Germany_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Germany_D", "MNP_Vest_Germany_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_GER_Soldier_DS : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Germany_SD"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        backpack = "B_Kitbag_rgr";
        HK416_FTL
        hiddenSelections[] = {"Camo", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        faction = MNP_GE_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_GER_D", "MNP_Vest_Germany_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_GER_D", "MNP_Vest_Germany_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_GER_Soldier_AR_D : MNP_GER_Soldier_DS{
        displayName = "Automatic Rifleman";
        backpack = "B_Kitbag_rgr";
        HK416_AR
    };
    class MNP_GER_Soldier_AT_D : MNP_GER_Soldier_DS{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        HK416_AT
    };
    class MNP_GER_Soldier_MED_D : MNP_GER_Soldier_DF{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        HK416_MED
    };
    class MNP_GER_Soldier_MG_D : MNP_GER_Soldier_DF{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        MG3_MG
    };
    // US army Ranger units, UCP
    class MNP_USR_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_A"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        MK16_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        linkedItems[] = {"MNP_Helmet_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_RAN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USR_Soldier_AR : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ranger_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        M249pip4_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier2_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier2_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_RAN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USR_Soldier_MG : MNP_USR_Soldier_F {
        uniformClass = "MNP_CombatUniform_Ranger_E"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        M240_MG
        linkedItems[] = {"H_HelmetB_desert", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_HelmetB_desert", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_USR_Soldier_M : MNP_USR_Soldier_AR {
        uniformClass = "MNP_CombatUniform_Ranger_C"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        MK16_MED
        linkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_RAN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USR_Soldier_O : MNP_USR_Soldier_AR {
        displayName = "Team Leader";
        backpack = "B_Kitbag_rgr";
        MK16_FTL
        linkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_USR_Soldier_AT : MNP_USR_Soldier_MG {
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        MK16_AT
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Dark Multicam
    class MNP_TS_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_TS_A"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        MK17_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        linkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_Sco; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_TS_Soldier_AR : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_TS_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        MK48_DE_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        // hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_US_Sco; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_TS_Soldier_O : MNP_TS_Soldier_F{
        displayName = "Team Leader";
        MK17_FTL
    };
    class MNP_TS_Soldier_MG : MNP_TS_Soldier_AR{
        displayName = "Machinegunner";      
        M240_MG
    };
    class MNP_TS_Soldier_AT : MNP_TS_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        MK17_AT
    };
    class MNP_TS_Soldier_M : MNP_TS_Soldier_AR{
        displayName = "Combat Medic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        MK17_MED
    };
    // Australia
    class MNP_AUS_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Australia"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        AUGA3_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        linkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AUS; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AUS_Soldier_S : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Australia_S"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        AUGA3_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        linkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AUS; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AUS_Soldier_AR : MNP_AUS_Soldier_S{
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249mini_AR
    };
    class MNP_AUS_Soldier_MG : MNP_AUS_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        M240_MG
    };
    class MNP_AUS_Soldier_AT : MNP_AUS_Soldier_S{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
    };
    class MNP_AUS_Soldier_MD : MNP_AUS_Soldier_S{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
    };
    // Republic of Korea
    class MNP_ROK_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROK_B"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        M16A4_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROK; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROK_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROK_A"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        genericnames = "AsianMen";
        identityTypes[] =  {"languagechi_f","Head_Asian","NoGlasses"}; 
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        M16A4_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROK; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROK_Soldier_AR : MNP_ROK_Soldier_F{
        displayName = "Autorifleman";
        M249mini_AR
    };
    class MNP_ROK_Soldier_MG : MNP_ROK_Soldier_F{
        displayName = "Machinegunner";      
        M240_MG
    };
    class MNP_ROK_Soldier_AT : MNP_ROK_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        M16A4_AT
    };
    class MNP_ROK_Soldier_M : MNP_ROK_Soldier_O{
        displayName = "Combat Medic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        M16A4_MED
    };
    // US Arctic Warfare
    class MNP_USMCA_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_USMC_arctic"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_AssaultPack_cbr";
        M4A1_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_USMCA_SN; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_USMCA_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_USMC_arctic_B"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_AssaultPack_cbr";
        M4A1_FTL
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_USMCA_SN; // Puts unit under new faction
    };
    class MNP_USMCA_Soldier_AR : MNP_USMCA_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_cbr";
        M27_AR
    };
    class MNP_USMCA_Soldier_AT : MNP_USMCA_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        M4A1_AT
    };
    class MNP_USMCA_Soldier_MG : MNP_USMCA_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_cbr";
        M240_MG
    };
    class MNP_USMCA_Soldier_MD : MNP_USMCA_Soldier_O{
        displayName = "Corpsman";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        M4A1_MED
    };
    // Ukrainian 
    class MNP_UKR_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ukrainian"; //the uniform item
        class Wounds {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        backpack = "B_FieldPack_khk";
        AK74_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_UKR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_UKR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_UKR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_UKR_MG : MNP_UKR_A{
        displayName = "Machinegunner";      
        PKM_MG
    };
    class MNP_UKR_AR : MNP_UKR_A{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        RPK74_AR
    };
    class MNP_UKR_AT : MNP_UKR_A{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr_RPG7";
        AK74_AT
    };
    class MNP_UKR_O : MNP_UKR_A{
        displayName = "Team Leader";
        backpack = "B_Kitbag_rgr";
        AK74_FTL
    };
    class MNP_UKR_MD : MNP_UKR_A{
        displayName = "Field Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AK74_MED
    };
    // ROK Marines
    class MNP_ROKMC_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ROKMC"; //the uniform item
        Backpack = "B_AssaultPack_rgr";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        genericnames = "AsianMen";
        identityTypes[] =  {"languagechi_f","Head_Asian","NoGlasses"}; 
        HK416_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROKMC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ROKMC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "ItemMap", "G_Aviator", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ROKMC; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ROKMC_MG : MNP_ROKMC_A{
        displayName = "Machinegunner";      
        M240_MG
    };
    class MNP_ROKMC_AR : MNP_ROKMC_A{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        HK416_AR
    };
    class MNP_ROKMC_AT : MNP_ROKMC_A{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        HK416_AT
    };
    class MNP_ROKMC_O : MNP_ROKMC_A{
        displayName = "Team Leader";
        backpack = "B_Kitbag_rgr";
        HK416_FTL  
    };
    class MNP_ROKMC_MD : MNP_ROKMC_A{
        displayName = "Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        HK416_MED
    };
    // Israeli Army
    class MNP_ISR_A : B_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_ISR"; //the uniform item
        Backpack = "B_AssaultPack_rgr";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        TRG_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ISR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ISR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_ISR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_ISR_MG : MNP_ISR_A{
        displayName = "Machinegunner";      
        M240_MG
    };
    class MNP_ISR_AR : MNP_ISR_A{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_cbr";
        MK200_AR
    };
    class MNP_ISR_AT : MNP_ISR_A{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_cbr";
        TRG_AT
    };
    class MNP_ISR_O : MNP_ISR_A{
        displayName = "Grenadier";
        backpack = "B_Kitbag_cbr";
        TRG_FTL
    };
    class MNP_ISR_MD : MNP_ISR_A{
        displayName = "Corpsman";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        TRG_MED
    };
    class MNP_US6co_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_6CO"; //the uniform item
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_WD_FP";        
        G3_RIFLEMAN
        linkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        respawnLinkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        faction = MNP_Irregulars; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US6co_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_6CO_B"; //the uniform item   
        hiddenSelections[] = {"Camo1", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        backpack = "MNP_B_WD_FP";       
        G3_FTL
        linkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        respawnLinkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
        faction = MNP_Irregulars; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_US6Co_Soldier_AR : MNP_US6co_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_cbr";
        RPK74_AR
    };
    class MNP_US6Co_Soldier_AT : MNP_US6co_Soldier_O{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr_RPG7";
        G3_AT
    };
    class MNP_US6Co_Soldier_MG : MNP_US6co_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_cbr";
        PKM_MG
    };
    class MNP_US6Co_Soldier_MD : MNP_US6co_Soldier_O{
        displayName = "Corpsman";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        G3_MED
    };
    // Australian Multicam
    class MNP_AMCU_Soldier_F : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_AMCU_T"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\mnp_units\addons\mnp_main\data\noPatch.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_Kitbag_sgg";
        AUGA3_RIFLEMAN
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AMCU; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_AMCU_Soldier_O : B_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_AMCU_ST"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"x\mnp_units\addons\mnp_main\data\noPatch.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","x\mnp_units\addons\mnp_main\data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        backpack = "B_Kitbag_sgg";
        AUGA3_FTL
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"Camo", "Insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};     
        linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_AMCU; // Puts unit under new faction
    };
    class MNP_AMCU_Soldier_AR : MNP_AMCU_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_sgg";
        M249pip3_AR
    };
    class MNP_AMCU_Soldier_AT : MNP_AMCU_Soldier_O{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        AUGA3_AT
    };
    class MNP_AMCU_Soldier_MG : MNP_AMCU_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_sgg";
        M240_MG
    };
    class MNP_AMCU_Soldier_MD : MNP_AMCU_Soldier_O{
        displayName = "Corpsman";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
    };
    // _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ -
    class B_AssaultPack_blk;
    class B_Kitbag_rgr;
    class MNP_B_ACU_AP : B_AssaultPack_blk{
        displayName = "MNP: ACU Assault Pack";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ACU_AP.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_ROK_AP : B_AssaultPack_blk{
        displayName = "MNP: ROK Assault Pack";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK_AP.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_WB_AP : B_AssaultPack_blk{
        displayName = "MNP: USMC Winter Assault Pack";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_WB_AP.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_ACU_KB : B_Kitbag_rgr{
        displayName = "MNP: ACU Kitbag";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ACU_KB.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_ROK_KB : B_Kitbag_rgr{
        displayName = "MNP: ROK Kitbag";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK_KB.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_WB_KB : B_Kitbag_rgr{
        displayName = "MNP: USMC Winter Kitbag";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_WB_KB.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class B_Carryall_Base;
    class B_FieldPack_Base;
    class MNP_B_WD_FP : B_FieldPack_Base{
        displayName = "MNP: M81 Woodland Field Pack";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\FP_USW.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
    class MNP_B_WD_CA : B_Carryall_Base{
        displayName = "MNP: M81 Woodland CarryAll";
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\CA_USW.paa"};
        class TransportMagazines {};
        class TransportItems {};
    };
};