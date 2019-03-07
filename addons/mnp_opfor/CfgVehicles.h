class CfgVehicles {
    class O_Soldier_base_F;
    // Peoples Liberation Army units
    class MNP_CN_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_AR";
        weapons[] = {"LMG_Zafir_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put","Binocular"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        attendant = 1;
        backpack = "MNP_B_Carryall_PLA_Medic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_AT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_WD; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CN_Soldier_G : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Grenadier";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put","Binocular"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_T.paa"};
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
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_AR : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_AR";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_MED : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        attendant = 1;
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Medic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_RAT : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_AT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_MAR; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CM_Soldier_G : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Grenadier";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        backpack = "MNP_B_FieldPack_PLA";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
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
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        backpack = "MNP_B_FieldPack_PLA_D";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_D";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_AR_D";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
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
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_Carryall_PLA_Medic_D";
        attendant = 1;
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Rifleman (AT) (Arid)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_AT_D";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_CH_DE; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_CD_Soldier_G : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Grenadier (Arid)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        backpack = "MNP_B_FieldPack_PLA_D";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RU_Med_D"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        backpack = "B_Bergen_sgg";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_RU_VDV_DE; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_O_D : MNP_RU_Soldier_MEDIUM_D{
        displayName = "Team Leader";
        backpack = "B_FieldPack_cbr";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        linkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_AR_D : MNP_RU_Soldier_MEDIUM_D{
        displayName = "Autorifleman";
        uniformClass = "MNP_CombatUniform_RU_Med_DB"; //the uniform item
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_RU_Soldier_GR_D : MNP_RU_Soldier_MEDIUM_D{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_RU_Soldier_M_D : MNP_RU_Soldier_MEDIUM_D{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_AT_D : MNP_RU_Soldier_MEDIUM_D{
        displayName = "Rifleman (AT)";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // North Korean Conscripts
    class MNP_NK_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Conscript";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_rg"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NK_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_Sh"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_OD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NK_Soldier_AR : MNP_NK_Soldier_F{
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_NK_Soldier_AT : MNP_NK_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_FieldPack_cbr_LAT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_NK_Soldier_G : MNP_NK_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_NK_Soldier_MD : MNP_NK_Soldier_F{
        displayName = "Field Medic";
        backpack = "B_FieldPack_cbr_Medic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // North Korean Regulars
    class MNP_NKC_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_rg"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NKC_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_Sh"; //the uniform item
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        faction = MNP_KOR_WD; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_NKC_Soldier_AR : MNP_NKC_Soldier_F{
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_NKC_Soldier_AT : MNP_NKC_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_FieldPack_cbr_LAT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_NKC_Soldier_G : MNP_NKC_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_NKC_Soldier_MD : MNP_NKC_Soldier_F{
        displayName = "Field Medic";
        backpack = "B_FieldPack_cbr_Medic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // Russian arctic command
    class MNP_RU_Soldier_Arctic_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Operator";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Russia_arctic"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
        backpack = "B_Bergen_rgr";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_A.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_A.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_OPF_F_SN; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_Arctic_O : MNP_RU_Soldier_Arctic_F {
        displayName = "Team Leader";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        linkedItems[] = {"MNP_MilCap_RU_T", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_T", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_RU_Soldier_Arctic_AR : MNP_RU_Soldier_Arctic_F {
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_RU_Soldier_Arctic_AT : MNP_RU_Soldier_Arctic_F {
        displayName = "Rifleman (AT)";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_RU_Soldier_Arctic_G : MNP_RU_Soldier_Arctic_F {
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_RU_Soldier_Arctic_M : MNP_RU_Soldier_Arctic_F {
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };   
    // RU Airbourne
    class MNP_RO3_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_rg"; //the uniform item
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_O : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_Sh"; //the uniform item
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        faction = MNP_RU_AIR; // Puts unit under new faction
        author = "Killoch";
    };
    class MNP_RO3_Soldier_AR : MNP_RO3_Soldier_F{
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_RO3_Soldier_AT : MNP_RO3_Soldier_O{
        displayName = "Rifleman (AT)";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_RO3_Soldier_G : MNP_RO3_Soldier_O{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_RO3_Soldier_M : MNP_RO3_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // Autumn Novorussians
    class MNP_DPR_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DPR_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        backpack = "B_FieldPack_oli";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_AUT; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_DPR_Soldier_AR : MNP_DPR_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_FieldPack_oli";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_DPR_Soldier_AT : MNP_DPR_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        weapons[] = {"arifle_Katiba_C_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_Soldier_GR : MNP_DPR_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_Soldier_TL : MNP_DPR_Soldier_F{
        displayName = "Team Leader";        
        backpack = "B_FieldPack_oli";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_Soldier_MD : MNP_DPR_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // Summer Novorussians
    class MNP_DPR_T_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DPR_B"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_T_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_T_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_DPR_SUM; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_DPR_T_Soldier_AR : MNP_DPR_T_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_DPR_T_Soldier_AT : MNP_DPR_T_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_T_Soldier_GR : MNP_DPR_T_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_T_Soldier_TL : MNP_DPR_T_Soldier_F{
        displayName = "Team Leader";        
        backpack = "B_AssaultPack_cbr";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_DPR_T_Soldier_MD : MNP_DPR_T_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // IRGC
    class MNP_IR_IRGC_Soldier_F : O_Soldier_base_F {
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN_DE_IRGC; // Puts unit under new faction
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_AR : MNP_IR_IRGC_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_IR_IRGC_Soldier_AT : MNP_IR_IRGC_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_GR : MNP_IR_IRGC_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_TL : MNP_IR_IRGC_Soldier_F{
        displayName = "Team Leader";        
        backpack = "B_AssaultPack_cbr";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_MD : MNP_IR_IRGC_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_MEDIUM : O_Soldier_base_F{
        scope = 2;
        modelSides[] = {3,1,0,2};
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
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
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B"; //the uniform item
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_IRN_WD_IRGC; // Puts unit under new faction
        author = "Killoch";    
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_IR_IRGC_Soldier_Med_AR : MNP_IR_IRGC_Soldier_MEDIUM{
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
    };
    class MNP_IR_IRGC_Soldier_Med_G : MNP_IR_IRGC_Soldier_Med_O{
        displayName = "Grenadier";        
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_Med_AT : MNP_IR_IRGC_Soldier_MEDIUM{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    class MNP_IR_IRGC_Soldier_Med_M : MNP_IR_IRGC_Soldier_Med_O{
        displayName = "Combat Medic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    // ______________---------------------------------__________________---------------------------------_________________________---------------------------------
    class B_Carryall_Base;
    class B_FieldPack_Base;
    class B_FieldPack_cbr_AT;
    class MNP_B_FieldPack_PLA : B_FieldPack_Base{
        displayName = "MNP: Type.07 FieldPack";
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
        displayName = "FieldPack";
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
        displayName = "PLA Medical Pack";
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
        displayName = "PLA AT Pack";
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
        displayName = "MNP: Type.07 Carryall";
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
        displayName = "PLA Carryall";
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
        displayName = "MNP: Russian Carryall";
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
        displayName = "MNP: Russian Carryall";
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
        displayName = "MNP: Russian Winter Carryall";
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
        displayName = "MNP: Russian Field Pack";
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
        displayName = "MNP: Russian Winter FieldPack";
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