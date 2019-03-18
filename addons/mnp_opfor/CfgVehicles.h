class CfgVehicles {
    class O_Soldier_base_F;
    // Peoples Liberation Army units
    class MNP_CN_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLA_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLA_B.paa"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_FieldPack_PLA";
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Navy units, Marine
    class MNP_CM_Soldier_F : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_ROK_KB";
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_ROK_AP";
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_ROK_KB";
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        backpack = "MNP_B_ROK_KB";
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        linkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
        linkedItems[] = {"MNP_Boonie_RU_D", "MNP_Vest_RU_D1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_RU_D", "MNP_Vest_RU_D1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK47_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NK_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_Sh"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NKC_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_Sh"; //the uniform item
        genericnames = "AsianMen";
        identityTypes[] = {"languagechi_f","Head_Asian","NoGlasses"};
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
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
        KATIBA_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_A.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_A.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_OPF_F_SN; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_Arctic_O : MNP_RU_Soldier_Arctic_F {
        KATIBA_FTL
        linkedItems[] = {"CUP_H_ChDKZ_Beret", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_ChDKZ_Beret", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74S_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_Sh"; //the uniform item
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK74S_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_AR : MNP_RO3_Soldier_F{
        backpack = "MNP_B_RU2_CA";
        RPK74_AR
    };
    class MNP_RO3_Soldier_AT : MNP_RO3_Soldier_O{
        backpack = "MNP_B_RU2_CA";
        AK74S_AT
    };
    class MNP_RO3_Soldier_MG : MNP_RO3_Soldier_O{
        backpack = "MNP_B_RU2_CA";
        PKM_MG
    };
    class MNP_RO3_Soldier_M : MNP_RO3_Soldier_F{
        backpack = "MNP_B_RU2_FP";
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
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
        linkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
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
    // IRGC
    class MNP_IR_IRGC_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        G3KA4_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN_DE_IRGC; // Puts unit under new faction
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_AR : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Kitbag_cbr";
        MG3_AR
    };
    class MNP_IR_IRGC_Soldier_AT : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Kitbag_cbr";
        G3KA4_AT
    };
    class MNP_IR_IRGC_Soldier_MG : MNP_IR_IRGC_Soldier_F{
        backpack = "B_Kitbag_cbr";
        PKM_MG
    };
    class MNP_IR_IRGC_Soldier_TL : MNP_IR_IRGC_Soldier_F{
        G3_FTL
    };
    class MNP_IR_IRGC_Soldier_MD : MNP_IR_IRGC_Soldier_F{
        backpack = "B_FieldPack_cbr";
        attendant = 1;
        G3KA4_MED
    };
    class MNP_IR_IRGC_Soldier_MEDIUM : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        G3KA4_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN_WD_IRGC; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_O : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        G3_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN_WD_IRGC; // Puts unit under new faction
        author = "Killoch";
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_AR : MNP_IR_IRGC_Soldier_MEDIUM{
        backpack = "B_FieldPack_cbr";
        MG3_AR
    };
    class MNP_IR_IRGC_Soldier_Med_MG : MNP_IR_IRGC_Soldier_Med_O{
        backpack = "B_FieldPack_cbr";
        PKM_MG
    };
    class MNP_IR_IRGC_Soldier_Med_AT : MNP_IR_IRGC_Soldier_MEDIUM{
        backpack = "B_FieldPack_cbr";
        G3KA4_AT
    };
    class MNP_IR_IRGC_Soldier_Med_M : MNP_IR_IRGC_Soldier_Med_O{
        attendant = 1;
        backpack = "B_FieldPack_cbr";
        G3KA4_MED
    };
    // ______________---------------------------------__________________---------------------------------_________________________---------------------------------
    class B_Carryall_Base;
    class B_FieldPack_Base;
    class B_FieldPack_cbr_AT;
    class MNP_B_FieldPack_PLA : B_FieldPack_Base{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN.paa"};
        class TransportMagazines
        {
            class _xx_30Rnd_65x39_caseless_green
            {
                magazine = "30Rnd_65x39_caseless_green";
                count = 7;
            };
        };
        class TransportItems
        {
        };
    };
    class MNP_B_Carryall_PLA_AR: B_Carryall_Base{
        scope = 1;
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_Carryall_PLA_Medic: B_Carryall_Base{
        scope = 1;
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN.paa"};
        class TransportMagazines
        {
            class _xx_30Rnd_65x39_caseless_green
            {
                magazine = "30Rnd_65x39_caseless_green";
                count = 2;
            };
            class _xx_SmokeShell
            {
                magazine = "SmokeShell";
                count = 4;
            };
        };
        class TransportItems
        {
            class _xx_Medikit{
                name = "Medikit";
                count = 1;
            };
            class _xx_FirstAidKit{
                name = "FirstAidKit";
                count = 4;
            };
        };
    };
    class MNP_B_FieldPack_PLA_AT : B_FieldPack_Base{
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN.paa"};
        class TransportMagazines
        {
            class _xx_RPG32_F
            {
                magazine = "RPG32_F";
                count = 1;
            };
            class _xx_RPG32_HE_F
            {
                magazine = "RPG32_HE_F";
                count = 1;
            };
        };
        class TransportItems
        {
        };
    };
    class MNP_B_FieldPack_PLA_D : MNP_B_FieldPack_PLA{
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN_D.paa"};
    };
    class MNP_B_Carryall_PLA_AR_D : MNP_B_Carryall_PLA_AR{
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN_D.paa"};
    };
    class MNP_B_Carryall_PLA_Medic_D : MNP_B_Carryall_PLA_Medic{
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN_D.paa"};
    };
    class MNP_B_FieldPack_PLA_AT_D : MNP_B_FieldPack_PLA_AT{
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN_D.paa"};
    };
    class MNP_B_FieldPack_PLA_Basic : MNP_B_FieldPack_PLA{
        scope = 2;
        modelSides[] = {3,1,0,2};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_Carryall_PLA_Basic : MNP_B_Carryall_PLA_AR{
        scope = 2;
        modelSides[] = {3,1,0,2};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_FieldPack_PLA_Basic_D : MNP_B_FieldPack_PLA_D{
        scope = 2;
        modelSides[] = {3,1,0,2};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_Carryall_PLA_Basic_D : MNP_B_Carryall_PLA_AR_D{
        scope = 2;
        modelSides[] = {3,1,0,2};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RU1_CA : B_Carryall_Base{
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU1_CA.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RU2_CA : MNP_B_RU1_CA{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU2_CA.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RUW_CA : MNP_B_RU1_CA{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RUW_CA.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RU2_FP : B_FieldPack_Base{
        scope = 2;
        modelSides[] = {3,1,0,2};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU2_FP.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RU1_FP : MNP_B_RU2_FP{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU1_FP.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
    class MNP_B_RUW_FP : MNP_B_RU2_FP{
        armor = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RUW_FP.paa"};
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
    };
};
