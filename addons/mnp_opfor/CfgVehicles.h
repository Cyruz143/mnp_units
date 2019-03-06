class CfgVehicles {

    class NATO_Box_Base;
    
    
    class B_Soldier_base_F;
    class B_soldier_AR_F;
    class B_G_Soldier_SL_F;
    class B_G_Soldier_lite_F;
    
    
    class O_officer_F;
    class O_Soldier_F;
    class O_Soldier_AR_F;
    class O_Soldier_LAT_F;
    class O_Soldier_GL_F;
    class O_Medic_F;

    
    // Peoples Liberation Army units
    
    class MNP_CN_Soldier_F : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

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

        

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_AR : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_MED : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_RAT : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_G : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Grenadier";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China"; //the uniform item
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    // Peoples Liberation Navy units, Marine
    
    class MNP_CM_Soldier_F : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CM_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CM_Soldier_AR : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CM_Soldier_MED : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        attendant = 1;
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        side = 0;
                
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        backpack = "MNP_B_Carryall_PLA_Medic";
        
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CM.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CM_Soldier_RAT : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CM_Soldier_G : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Grenadier";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
        side = 0;
        
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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    
    // Peoples Liberation Army Units, Arid
    
    class MNP_CD_Soldier_F : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CD_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";

        
        backpack = "MNP_B_FieldPack_PLA_D";
        
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CD_Soldier_AR : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Autorifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        backpack = "MNP_B_Carryall_PLA_AR_D";
        
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CD_Soldier_MED : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        side = 0;

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
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CD_Soldier_RAT : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman (AT) (Arid)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        backpack = "MNP_B_FieldPack_PLA_AT_D";
        
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CD_Soldier_G : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Grenadier (Arid)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        backpack = "MNP_B_FieldPack_PLA_D";
        
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CN_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    // PLA Heavies

    class MNP_CN_Soldier_heavy_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_Heavy_T"; //the uniform item
        side = 0;
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        backpack = "MNP_B_FieldPack_PLA";
        
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CHI_T.paa", "\x\mnp_units\addons\mnp_main\data\H_CHI_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_H_Units"; // Puts unit in the vehicleclass

        linkedItems[] = {"MNP_Helmet_CNH_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CNH_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_heavy_O : MNP_CN_Soldier_heavy_F {
        
        displayName = "Team Leader";
        
        backpack = "MNP_B_FieldPack_PLA";
        
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_H_Units"; // Puts unit in the vehicleclass

        linkedItems[] = {"MNP_MilCap_CN_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_Heavy_AR : MNP_CN_Soldier_heavy_F{
        displayName = "Autorifleman";
    
        backpack = "MNP_B_Carryall_PLA_AR";
        
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_AT : MNP_CN_Soldier_heavy_F{
        displayName = "Rifleman (AT)";
        backpack = "MNP_B_FieldPack_PLA_AT";
        
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_G : MNP_CN_Soldier_heavy_F{
        displayName = "Grenadier";
        backpack = "MNP_B_FieldPack_PLA";
        
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_MED : MNP_CN_Soldier_heavy_F{
    
        displayName = "Medic";
        backpack = "MNP_B_Carryall_PLA_Medic";
        attendant = 1;
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    };
    
    // PLA Heavies D
    
    class MNP_CN_Soldier_heavy_D : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_Heavy_D"; //the uniform item
        side = 0;
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
    
        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
            
        backpack = "MNP_B_FieldPack_PLA_D";
        
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CHI_D.paa", "\x\mnp_units\addons\mnp_main\data\H_CHI_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_H_D_Units"; // Puts unit in the vehicleclass

        linkedItems[] = {"MNP_Helmet_CNH_D", "MNP_Vest_ChinaH_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_CNH_D", "MNP_Vest_ChinaH_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_heavy_DO : MNP_CN_Soldier_heavy_D {
        displayName = "Team Leader";
        linkedItems[] = {"MNP_MilCap_CN_D", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_CN_D", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_CN_Soldier_Heavy_DAR : MNP_CN_Soldier_heavy_D{
        displayName = "Autorifleman";
    
        backpack = "MNP_B_Carryall_PLA_AR_D";
        
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_DAT : MNP_CN_Soldier_heavy_D{
        displayName = "Rifleman (AT)";
        backpack = "MNP_B_FieldPack_PLA_AT_D";
        
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_DG : MNP_CN_Soldier_heavy_D{
        displayName = "Grenadier";
        backpack = "MNP_B_FieldPack_PLA_D";
        
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_CN_Soldier_Heavy_DMED : MNP_CN_Soldier_heavy_D{
    
        displayName = "Medic";
        backpack = "MNP_B_Carryall_PLA_Medic_D";
        attendant = 1;
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    };
    
    // VDV Units

    class MNP_RU_Soldier_MEDIUM : B_soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RU_Med"; //the uniform item
        
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        
        backpack = "B_Bergen_rgr";
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RU_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_RU_Soldier_O : MNP_RU_Soldier_MEDIUM{
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
    
    class MNP_RU_Soldier_AR : MNP_RU_Soldier_MEDIUM{
        
        uniformClass = "MNP_CombatUniform_RU_Med_B"; //the uniform item
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

        
        displayName = "Autorifleman";
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };

    class MNP_RU_Soldier_GR : MNP_RU_Soldier_MEDIUM{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_RU_Soldier_M : MNP_RU_Soldier_MEDIUM{
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
    
    class MNP_RU_Soldier_AT : MNP_RU_Soldier_MEDIUM{
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };

    // Desert
    
    class MNP_RU_Soldier_MEDIUM_D : B_soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RU_D_Units"; // Puts unit in the vehicleclass
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
    
    // Elite
    
    class MNP_RU_Soldier_heavy_F : B_soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Operator";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Russia_Heavy"; //the uniform item
        
        model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
        
        backpack = "B_Bergen_rgr";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_T.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RUS_Units"; // Puts unit in the vehicleclass

        side = 0;
        author = "Killoch";    
        linkedItems[] = {"MNP_Helmet_Russia", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Russia", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_RU_Soldier_heavy_O : MNP_RU_Soldier_heavy_F {
        
        displayName = "Team Leader";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        linkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_RU_Soldier_heavy_AR : MNP_RU_Soldier_heavy_F {
        displayName = "Autorifleman";

        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    };
    
    class MNP_RU_Soldier_heavy_AT : MNP_RU_Soldier_heavy_F {
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    class MNP_RU_Soldier_heavy_G : MNP_RU_Soldier_heavy_F {
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    };
    
    class MNP_RU_Soldier_heavy_M : MNP_RU_Soldier_heavy_F {
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        attendant = 1;
    
        linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    // Desert Elite
    
    class MNP_RU_Soldier_heavy_D : MNP_RU_Soldier_heavy_F {
        
        uniformClass = "MNP_CombatUniform_Russia_Heavy_D"; //the uniform item

        
        vehicleClass = "MNP_RUS_D_Units"; // Puts unit in the vehicleclass
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_D.paa", "\x\mnp_units\addons\mnp_main\data\H_RU_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        linkedItems[] = {"MNP_Helmet_Russia_D", "MNP_Vest_RU_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Russia_D", "MNP_Vest_RU_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_RU_Soldier_heavy_DO : MNP_RU_Soldier_heavy_D {
        displayName = "Team Leader";
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

    };
    
    class MNP_RU_Soldier_heavy_DAR : MNP_RU_Soldier_heavy_D {
        displayName = "Autorifleman";

        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    };
    
    class MNP_RU_Soldier_heavy_DAT : MNP_RU_Soldier_heavy_D {
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    };
    
    class MNP_RU_Soldier_heavy_DG : MNP_RU_Soldier_heavy_D {
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    };
    
    class MNP_RU_Soldier_heavy_DM : MNP_RU_Soldier_heavy_D {
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        attendant = 1;
    
        linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    // North Korean Conscripts
    
    class MNP_NK_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_NK_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_NK_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKR_Sh"; //the uniform item

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        
        
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_NK_Units"; // Puts unit in the vehicleclass    
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
    
    class MNP_NKC_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_NKC_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_NKC_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NKC_Sh"; //the uniform item

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
                
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        
        
        linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
            side = 0;

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_NKC_Units"; // Puts unit in the vehicleclass    
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
    
    class MNP_RU_Soldier_Arctic_F : B_soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RUS_A_Units"; // Puts unit in the vehicleclass

        side = 0;
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
    
    // Russian Oldschool
    
    class MNP_RO_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO_rg"; //the uniform item
        
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};

        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_RO_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO_Sh"; //the uniform item
        
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };

    class MNP_RO_Soldier_AR : MNP_RO_Soldier_F{
        displayName = "Autorifleman";

        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };
    
    class MNP_RO_Soldier_AT : MNP_RO_Soldier_F{
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    
    };
    
    class MNP_RO_Soldier_G : MNP_RO_Soldier_O{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    
    };
    
    class MNP_RO_Soldier_M : MNP_RO_Soldier_O{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    
    class MNP_RO2_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO2_rg"; //the uniform item
        
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};

        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO2_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_RO2_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO2_Sh"; //the uniform item
        
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO2_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };

    class MNP_RO2_Soldier_AR : MNP_RO2_Soldier_O{
        displayName = "Autorifleman";

        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };
    
    class MNP_RO2_Soldier_AT : MNP_RO2_Soldier_O{
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    
    };
    
    class MNP_RO2_Soldier_G : MNP_RO2_Soldier_F{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    
    };
    
    class MNP_RO2_Soldier_M : MNP_RO2_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    
    class MNP_RO3_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO3_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_RO3_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO3_Sh"; //the uniform item
        
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO3_Units"; // Puts unit in the vehicleclass    
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
    
    
    class MNP_RO4_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO4_rg"; //the uniform item
        
        Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
        
        weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Officer.rvmat"};

        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";        
        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO4_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };
    
    class MNP_RO4_Soldier_O : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_RO4_Sh"; //the uniform item
        
        hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
        
        model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        
        linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        backpack = "MNP_B_RU2_FP";

        side = 0;
    
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_RO4_Units"; // Puts unit in the vehicleclass    
        author = "Killoch";
    };

    class MNP_RO4_Soldier_AR : MNP_RO4_Soldier_F{
        displayName = "Autorifleman";

        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    
    };
    
    class MNP_RO4_Soldier_AT : MNP_RO4_Soldier_O{
        displayName = "Rifleman (AT)";
    
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    
    };
    
    class MNP_RO4_Soldier_G : MNP_RO4_Soldier_O{
        displayName = "Grenadier";
        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    
    };
    
    class MNP_RO4_Soldier_M : MNP_RO4_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    
    };
    
    // Autumn Novorussians
    
    class MNP_DPR_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_DPR_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

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

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_DPRA_Units"; // Puts unit in the vehicleclass

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
    
    class MNP_DPR_T_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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
        side = 0;
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_T_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_T_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_DPRS_Units"; // Puts unit in the vehicleclass

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
    
    // IRGC Basij
    
    class MNP_IR_BSJ_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_BSJ_A"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        backpack = "B_FieldPack_khk";

        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };

        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        side = 0;
        
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_BSJ_R_Units"; // Puts unit in the vehicleclass

        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_IR_BSJ_Soldier_AR : MNP_IR_BSJ_Soldier_F{
        displayName = "Automatic rifleman";
        
        backpack = "B_FieldPack_khk";
        
        weapons[] = {"LMG_Zafir_F", "Throw", "put"};
        respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
        
        magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
        
    };
    
    class MNP_IR_BSJ_Soldier_AT : MNP_IR_BSJ_Soldier_F{
        displayName = "Rifleman (AT)";
        
        backpack = "B_AssaultPack_rgr_LAT";
        
        weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    };
    
    class MNP_IR_BSJ_Soldier_GR : MNP_IR_BSJ_Soldier_F{
        displayName = "Grenadier";
        backpack = "B_FieldPack_khk";

        weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
        
        magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    };
    
    class MNP_IR_BSJ_Soldier_TL : MNP_IR_BSJ_Soldier_F{
        displayName = "Team Leader";        
        
        backpack = "B_FieldPack_khk";
        
        weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
    
    };
    
    class MNP_IR_BSJ_Soldier_MD : MNP_IR_BSJ_Soldier_F{
        displayName = "Medic";
        backpack = "B_FieldPack_ocamo_ReconMedic";
    
        weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
        attendant = 1;
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
        
    };
    
    
    class MNP_IR_BSJ_Soldier_MEDIUM : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_BSJ_Med"; //the uniform item
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
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_BSJ_IR_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_IR_BSJ_Soldier_Med_O : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_IR_BSJ_Med_B"; //the uniform item
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
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_BSJ_IR_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_IR_BSJ_Soldier_Med_AR : MNP_IR_BSJ_Soldier_MEDIUM{
        displayName = "Autorifleman";
        weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
        respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
        
    
    };
    
    class MNP_IR_BSJ_Soldier_Med_G : MNP_IR_BSJ_Soldier_Med_O{
        displayName = "Grenadier";        
        
        weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
        respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
        
        magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
        respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
        
    
    };
    
    class MNP_IR_BSJ_Soldier_Med_AT : MNP_IR_BSJ_Soldier_MEDIUM{
        displayName = "Rifleman (AT)";

        backpack = "B_Kitbag_rgr";
        
        weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
        respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
        
        magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
        respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

    };
    
    class MNP_IR_BSJ_Soldier_Med_M : MNP_IR_BSJ_Soldier_Med_O{
        displayName = "Combat Medic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        
        weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
        respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
        
        magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
        respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

    };
    
    // IRGC
    
    class MNP_IR_IRGC_Soldier_F : B_Soldier_base_F {
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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
        side = 0;

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_IRGC_R_Units"; // Puts unit in the vehicleclass

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
    
    
    
    class MNP_IR_IRGC_Soldier_MEDIUM : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_IRGC_IR_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    
    class MNP_IR_IRGC_Soldier_Med_O : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 2;
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

        side = 0;
        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_IR_IRGC_IR_Units"; // Puts unit in the vehicleclass
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
    
    
    class MNP_CNT_Soldier_F : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };

        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
        };
    
    class MNP_CNP_Soldier_F : B_Soldier_base_F{
        _generalMacro = "B_Soldier_F"; //unsure what this does
        scope = 1;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_China_SF"; //the uniform item
        model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
        side = 0;

        genericnames = "AsianMen";
        identitytypes[] = {"Head_Asian"};
        
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };

        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAP_SFA.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAP_SFB.paa"};

        faction = MNP_O_Units; // Puts unit under new faction
        vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
        author = "Killoch";    
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
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };    
    };
    
    class MNP_B_FieldPack_PLA_Basic_D : MNP_B_FieldPack_PLA_D{
        scope = 2;
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
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };    
    };
    
    
    class MNP_B_RU1_CA : B_Carryall_Base{
        scope = 2;
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


// whats this for?!
class CfgMagazines
{
    class TransportMagazines;
    class TransportItems;
    class 30Rnd_65x39_caseless_green;
};