class CfgVehicles {
    class O_Soldier_base_F;
    class MNP_O_Soldier_base_F : O_Soldier_base_F {
        scope = 1;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        class HitPoints {
            class HitFace {
                armor = 1;
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace {
                armor = 1;
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead {
                armor = 6;
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis {
                armor = 1;
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen {
                armor = 1;
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm {
                armor = 1;
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 6;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody {
                armor = 3;
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms {
                armor = 3;
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands {
                armor = 3;
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs {
                armor = 1000;
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm {
                armor = 1;
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm {
                name = "hand_r";
            };
            class HitLeftLeg {
                armor = 1;
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1;
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
        armor = 2;
        armorStructural = 3;
        explosionShielding = 0.3;
    };

    // Peoples Liberation Army units
    class MNP_CN_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLA_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLA_B.paa"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_AR : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MED : MNP_O_Soldier_base_F{
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_RAT : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MG : MNP_O_Soldier_base_F{
        scope = 2;
        uniformClass = "MNP_CombatUniform_China";
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_UNI;
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Army units WOODLAND
    class MNP_CW_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_AR : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_MED : MNP_O_Soldier_base_F{
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_RAT : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CW_Soldier_MG : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_J";
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD;
        linkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_CNJ", "MNP_Vest_ChinaH_J", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Navy units, Marine
    class MNP_CM_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ASIAN_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLN_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLN_B.paa"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_AR : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_MED : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        attendant = 1;
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_Basic";
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_RAT : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_MG : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_CMAR";
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        ASIAN_MEN
        backpack = "MNP_B_Carryall_PLA_Basic";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR;
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Peoples Liberation Army Units, Arid
    class MNP_CD_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        ASIAN_MEN
        CTAR_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAD_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAD_B.paa"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        CTAR_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_AR : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        CTARS_AR
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_MED : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_Basic_D";
        attendant = 1;
        CTAR_MED
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_RAT : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        CTAR_AT
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_MG : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_China_D";
        ASIAN_MEN
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Basic_D";
        FNMAGRIS_MG_G
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE;
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Desert
    class MNP_RU_Soldier_MEDIUM_D : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_RU_Med_D";
        RUSSIAN_MEN_GOGGLES
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
        faction = MNP_RU_VDV_DE;
        linkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RD", "MNP_Vest_RU_D", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_O_D : MNP_RU_Soldier_MEDIUM_D {
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AK74M_FTL
        linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_AR_D : MNP_RU_Soldier_MEDIUM_D {
        uniformClass = "MNP_CombatUniform_RU_Med_DB";
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        backpack = "B_Kitbag_cbr";
        RPK74M_AR
    };
    class MNP_RU_Soldier_MG_D : MNP_RU_Soldier_MEDIUM_D {
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
    class MNP_NK_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NKR_rg";
        ASIAN_MEN
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK47_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD;
    };
    class MNP_NK_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NKR_Sh";
        ASIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK47_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD;
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
    class MNP_NKC_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NKC_rg";
        ASIAN_MEN
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD;
    };
    class MNP_NKC_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NKC_Sh";
        ASIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK74_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD;
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
    class MNP_RU_Soldier_Arctic_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Russia_arctic";
        RUSSIAN_MEN_GOGGLES
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
        KATIBA_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_A.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_A.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_OPF_F_SN;
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
    class MNP_RO3_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_RO3_rg";
        RUSSIAN_MEN
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        AK74S_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR;
    };
    class MNP_RO3_Soldier_O : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_RO3_Sh";
        RUSSIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        AK74S_FTL
        linkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_Helmet", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_RU_AIR;
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
    class MNP_DPR_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_DPR_A";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        RUSSIAN_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        AK74M2_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_AUT;
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
    class MNP_DPR_T_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_DPR_B";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        RUSSIAN_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        AK74M2_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_T_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_T_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_SUM;
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
    class MNP_IR_IRGC_Soldier_F : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_IR_IRGC_A";
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ARAB_MEN
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        G3KA4_RIFLEMAN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN;
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
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B";
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
    class MNP_IR_IRGC_Soldier_MEDIUM : MNP_O_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_IR_BSJ_A";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        ARAB_MEN_GOGGLES
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        AKME_RIFLEMAN
        faction = MNP_IRN_RG;
        linkedItems[] = {"MNP_Helmet_PAGST_IBSJ", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_IBSJ", "CUP_V_O_SLA_M23_1_BRN", "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_O : MNP_O_Soldier_base_F {
        scope = 2;
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
        faction = MNP_IRN_RG;
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