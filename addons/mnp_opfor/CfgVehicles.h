class CfgVehicles {
    class O_Soldier_base_F;
    // Peoples Liberation Army units
    class MNP_CN_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLA_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLA_B.paa"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MG : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Army units WOODLAND
    class MNP_CW_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_MG : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Navy units, Marine
    class MNP_CM_Soldier_F : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLN_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLN_B.paa"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        attendant = 1;
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_MG : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Army Units, Arid
    class MNP_CD_Soldier_F : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAD_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAD_B.paa"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_Basic_D";
        attendant = 1;
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_MG : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Desert
    class MNP_RU_Soldier_MEDIUM_D : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RU_Med_D"; //the uniform item
        RUSSIAN_MEN_GOGGLES
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        AK74M_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_RU_VDV_DE; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_O_D : MNP_RU_Soldier_MEDIUM_D{
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AK74M_FTL
        linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_AR_D : MNP_RU_Soldier_MEDIUM_D{
        uniformClass = "MNP_CombatUniform_RU_Med_DB"; //the uniform item
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        backpack = "B_Kitbag_cbr";
        RPK74M_AR
    };
    class MNP_RU_Soldier_MG_D : MNP_RU_Soldier_MEDIUM_D{
        backpack = "B_Kitbag_cbr";
        PKP_MG
    };
    class MNP_RU_Soldier_M_D : MNP_RU_Soldier_MEDIUM_D{
        backpack = "B_AssaultPack_cbr";
        AK74U_MED
        attendant = 1;
        linkedItems[] = {"MNP_Boonie_RU_D", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_RU_D", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_AT_D : MNP_RU_Soldier_MEDIUM_D{
        backpack = "B_Kitbag_cbr";
        AK74M_AT
    };
    // North Korean Conscripts
    class MNP_NK_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_rg"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK47_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NK_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_Sh"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK47_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NK_Soldier_AR : MNP_NK_Soldier_F{
        backpack = "B_FieldPack_oli";
        RPK47_AR
    };
    class MNP_NK_Soldier_AT : MNP_NK_Soldier_F{
        backpack = "B_FieldPack_oli";
        AK47_AT
    };
    class MNP_NK_Soldier_MG : MNP_NK_Soldier_F{
        backpack = "B_FieldPack_oli";
        PKM_MG
    };
    class MNP_NK_Soldier_MD : MNP_NK_Soldier_F{
        backpack = "B_FieldPack_oli";
        attendant = 1;
        AKME_MED
    };
    // North Korean Regulars
    class MNP_NKC_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_rg"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NKC_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_Sh"; //the uniform item
        ASIAN_MEN
        UNIT_ARMOUR_VALUES
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK74_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NKC_Soldier_AR : MNP_NKC_Soldier_F{
        backpack = "B_FieldPack_oli";
        RPK74_AR
    };
    class MNP_NKC_Soldier_AT : MNP_NKC_Soldier_F{
        backpack = "B_FieldPack_oli_RPG7";
        AK74_AT
    };
    class MNP_NKC_Soldier_MG : MNP_NKC_Soldier_F{
        backpack = "B_FieldPack_oli";
        PKM_MG
    };
    class MNP_NKC_Soldier_MD : MNP_NKC_Soldier_F{
        backpack = "B_FieldPack_oli";
        attendant = 1;
        AK74S_MED
    };
    // Russian arctic command
    class MNP_RU_Soldier_Arctic_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Russia_arctic"; //the uniform item
        RUSSIAN_MEN_GOGGLES
        UNIT_ARMOUR_VALUES
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
        KATIBA_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_A.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_A.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_OPF_F_SN; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_Arctic_O : MNP_RU_Soldier_Arctic_F {
        KATIBA_FTL
        linkedItems[] = {"CUP_H_ChDKZ_Beret", "G_Balaclava_lowprofile", "V_HarnessO_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_ChDKZ_Beret", "G_Balaclava_lowprofile", "V_HarnessO_gry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_Arctic_AR : MNP_RU_Soldier_Arctic_F {
        backpack = "MNP_B_RUW_CA";
        ZAFIR_AR
    };
    class MNP_RU_Soldier_Arctic_AT : MNP_RU_Soldier_Arctic_F {
        backpack = "MNP_B_RUW_CA";
        KATIBA_AT
    };
    class MNP_RU_Soldier_Arctic_MG : MNP_RU_Soldier_Arctic_F {
        backpack = "MNP_B_RUW_CA";
        ZAFIR_AR
    };
    class MNP_RU_Soldier_Arctic_M : MNP_RU_Soldier_Arctic_F {
        backpack = "MNP_B_WB_AP";
        attendant = 1;
        KATIBA_MED
    };
    // RU Airbourne
    class MNP_RO3_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_rg"; //the uniform item
        RUSSIAN_MEN
        UNIT_ARMOUR_VALUES
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74S_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_Sh"; //the uniform item
        RUSSIAN_MEN
        UNIT_ARMOUR_VALUES
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK74S_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_AR : MNP_RO3_Soldier_F{
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "CUP_B_SLA_Medicbag";
        RPK74_AR
    };
    class MNP_RO3_Soldier_AT : MNP_RO3_Soldier_O{
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "CUP_B_SLA_Medicbag";
        AK74S_AT
    };
    class MNP_RO3_Soldier_MG : MNP_RO3_Soldier_O{
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "CUP_B_SLA_Medicbag";
        PKM_MG
    };
    class MNP_RO3_Soldier_M : MNP_RO3_Soldier_F{
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "CUP_B_SLA_Medicbag";
        attendant = 1;
        AK74SU_MED
    };
    // Autumn Novorussians
    class MNP_DPR_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DPR_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        RUSSIAN_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        AK74M2_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_AUT; // Puts unit under new faction
        linkedItems[] = {"CUP_H_RUS_6B27_olive", "CUP_V_RUS_Smersh_1", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_RUS_6B27_olive", "CUP_V_RUS_Smersh_1", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_DPR_Soldier_AR : MNP_DPR_Soldier_F{
        backpack = "B_Carryall_khk";
        RPK74M2_AR
    };
    class MNP_DPR_Soldier_AT : MNP_DPR_Soldier_F{
        backpack = "B_Carryall_khk";
        AK74M2_AT
    };
    class MNP_DPR_Soldier_MG : MNP_DPR_Soldier_F{
        backpack = "B_Carryall_khk";
        PKP_MG
    };
    class MNP_DPR_Soldier_TL : MNP_DPR_Soldier_F{
        AK74M2_FTL
    };
    class MNP_DPR_Soldier_MD : MNP_DPR_Soldier_F{
        backpack = "B_FieldPack_khk";
        attendant = 1;
        AK74M_MED
    };
    // Summer Novorussians
    class MNP_DPR_T_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DPR_B"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        RUSSIAN_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        AK74M2_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_T_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_T_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_SUM; // Puts unit under new faction
        linkedItems[] = {"CUP_H_RUS_6B27_olive", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_RUS_6B27_olive", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_DPR_T_Soldier_AR : MNP_DPR_T_Soldier_F{
        backpack = "MNP_B_RU2_CA";
        RPK74M2_AR
    };
    class MNP_DPR_T_Soldier_AT : MNP_DPR_T_Soldier_F{
        backpack = "MNP_B_RU2_CA";
        AK74M2_AT
    };
    class MNP_DPR_T_Soldier_MG : MNP_DPR_T_Soldier_F{
        backpack = "MNP_B_RU2_CA";
        PKP_MG
    };
    class MNP_DPR_T_Soldier_TL : MNP_DPR_T_Soldier_F{
        AK74M2_FTL
    };
    class MNP_DPR_T_Soldier_MD : MNP_DPR_T_Soldier_F{
        backpack = "MNP_B_RU2_FP";
        attendant = 1;
        AK74M_MED
    };
    // Iran Army
    class MNP_IR_IRGC_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ARAB_MEN
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        G3KA4_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_PAGST_IRGC", "CUP_V_O_SLA_M23_1_BRN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_IRGC", "CUP_V_O_SLA_M23_1_BRN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_AR : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Carryall_cbr";
        MG3_AR
    };
    class MNP_IR_IRGC_Soldier_AT : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Carryall_cbr";
        G3KA4_AT
    };
    class MNP_IR_IRGC_Soldier_MG : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Carryall_cbr";
        PKM_MG
    };
    class MNP_IR_IRGC_Soldier_TL : MNP_IR_IRGC_Soldier_F{
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B"; //the uniform item
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        linkedItems[] = {"MNP_Helmet_PAGST_IRGC", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_IRGC", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        G3_FTL
    };
    class MNP_IR_IRGC_Soldier_MD : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Kitbag_tan";
        attendant = 1;
        G3KA4_MED
    };
    // Iranian Revolutionary Guards
    class MNP_IR_IRGC_Soldier_MEDIUM : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_BSJ_A";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ARAB_MEN_GOGGLES
        UNIT_ARMOUR_VALUES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AKME_RIFLEMAN
        faction = MNP_IRN_RG; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_PAGST_IBSJ", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_IBSJ", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_O : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_BSJ_Med_B";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AKME_FTL
        faction = MNP_IRN_RG; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"H_Beret_blk", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_AR : MNP_IR_IRGC_Soldier_MEDIUM{
        backpack = "B_Carryall_cbr";
        RPK47_AR
    };
    class MNP_IR_IRGC_Soldier_Med_MG : MNP_IR_IRGC_Soldier_MEDIUM{
        backpack = "B_Carryall_cbr";
        PKM_MG
    };
    class MNP_IR_IRGC_Soldier_Med_AT : MNP_IR_IRGC_Soldier_MEDIUM{
        backpack = "B_Carryall_cbr";
        AKME_AT
    };
    class MNP_IR_IRGC_Soldier_Med_M : MNP_IR_IRGC_Soldier_MEDIUM{
        attendant = 1;
        backpack = "B_Kitbag_tan";
        AKME_MED
    };
};