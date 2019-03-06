class CfgVehicles {
    class I_Soldier_base_F;
    class I_G_Soldier_lite_F;    
    class MNP_Irish_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ireland"; //the uniform item
        backpack = "B_AssaultPack_rgr";
        AUGA3_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_IRE_WD; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_Irish_Soldier_MG : I_Soldier_base_F {
        scope = 2;
        displayName = "Machinegunner";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ireland_S"; //the uniform item
        backpack = "B_Kitbag_rgr";
        FNMAG_MG
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        faction = MNP_IRE_WD; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";
    };
    class MNP_Irish_Soldier_AR : MNP_Irish_Soldier_MG {
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249mini_AR
        linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_Officer : MNP_Irish_Soldier_MG {
        displayName = "Team Leader";
        AUGA3_FTL
        linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_RAT : MNP_Irish_Soldier_MG {
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
        linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_Medic : MNP_Irish_Soldier_F {
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
        linkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_D : I_Soldier_base_F {
        scope = 2;
        displayName = "Irish Rifleman (D)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ireland_D"; //the uniform item
        backpack = "B_Kitbag_rgr";
        author = "Killoch";    
        AUGA3_RIFLEMAN
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_IRE_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DMG : I_Soldier_base_F {
        scope = 2;
        displayName = "Machinegunner";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Ireland_DS"; //the uniform item
        backpack = "B_Kitbag_rgr";
        author = "Killoch";    
        FNMAG_MG
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        faction = MNP_IRE_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DAR : MNP_Irish_Soldier_DMG {
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249mini_AR
        linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DOfficer : MNP_Irish_Soldier_DMG {
        displayName = "Team Leader";
        AUGA3_FTL
        linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DRAT : MNP_Irish_Soldier_D {
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
        linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DMedic : MNP_Irish_Soldier_DMG{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        AUGA3_MED
        attendant = 1;
        linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Local Volunteer Militia
    class MNP_Militia_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_A"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep_co.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_WD; // Puts unit under new faction
        AKME_FTL
        linkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
    };
    class MNP_Militia_Soldier_MG : I_Soldier_base_F {
        scope = 2;
        displayName = "Machinegunner";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_B"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep2_co.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_WD; // Puts unit under new faction
        PKM_MG
        linkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_AR : I_Soldier_base_F {
        scope = 2;
        displayName = "Automatic Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_C"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep3_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_WD; // Puts unit under new faction
        RPK47_AR
        linkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_M : I_G_Soldier_lite_F {
        scope = 2;
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_E"; //the uniform item
        backpack = "B_AssaultPack_rgr_Medic";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_MED
        attendant = 1;
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\smock_t1_co.paa","\x\mnp_units\addons\mnp_main\data\smocks_strepII_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_WD; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_RAT : I_G_Soldier_lite_F {
        scope = 2;
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_F"; //the uniform item
        backpack = "B_Kitbag_rgr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_AT
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa", "\x\mnp_units\addons\mnp_main\data\smocks_strepI_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_WD; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_F : MNP_Militia_Soldier_RAT{
        displayName = "Rifleman";
        AKME_RIFLEMAN
    };
    // Desert Militiamen
    class MNP_Militia_Soldier_DO : I_Soldier_base_F {
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_DA"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D1.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_DE; // Puts unit under new faction
        AKME_FTL
        linkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DMG : I_Soldier_base_F {
        scope = 2;
        displayName = "Machinegunner";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_DB"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1","insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D2.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_DE; // Puts unit under new faction
        PKM_MG
        linkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DAR : I_Soldier_base_F {
        scope = 2;
        displayName = "Automatic Rifleman";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_DC"; //the uniform item
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D3.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_DE; // Puts unit under new faction
        RPK47_AR
        linkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DM : I_Soldier_base_F {
        scope = 2;
        displayName = "Field Medic";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_DE"; //the uniform item
        backpack = "B_AssaultPack_rgr_Medic";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_MED
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\C_LVM_D6.paa","\x\mnp_units\addons\mnp_main\data\C_LVM_D4.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DRAT : I_Soldier_base_F {
        scope = 2;
        displayName = "Rifleman (AT)";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Militia_DF"; //the uniform item
        backpack = "B_Kitbag_rgr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_AT
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\C_LVM_D6.paa", "\x\mnp_units\addons\mnp_main\data\C_LVM_D5.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_MIL_DE; // Puts unit under new faction
        linkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DF : MNP_Militia_Soldier_DRAT{
        displayName = "Rifleman";
        AKME_RIFLEMAN
        linkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    // Fins
    class MNP_FIN_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "RifleMan";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Fin_A"; //the uniform item
        backpack = "B_AssaultPack_rgr";
        RK62_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_T.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_FIN_WD; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_FIN_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "Finnish Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Fin_B"; //the uniform item
        backpack = "B_Kitbag_rgr";
        RK62_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_T.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_FIN_WD; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_FIN_Soldier_AR : MNP_FIN_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        PKP_MG
    };
    class MNP_FIN_Soldier_AT : MNP_FIN_Soldier_O{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        RK62_AT
    };
    class MNP_FIN_Soldier_MG : MNP_FIN_Soldier_F{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_cbr";
        PKP_MG
    };
    class MNP_FIN_Soldier_MD : MNP_FIN_Soldier_O{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        RK62_MED
    };
    // Cold Fins
    class MNP_AFIN_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "RifleMan";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Finarctic_A"; //the uniform item
        backpack = "B_AssaultPack_rgr";
        RK62_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_A.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_FIN_SN; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_AFIN_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_Finarctic_B"; //the uniform item
        backpack = "B_Kitbag_rgr";
        RK62_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_A.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_FIN_SN; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_AFIN_Soldier_AR : MNP_AFIN_Soldier_F{
        displayName = "Automatic rifleman";
        backpack = "B_Kitbag_rgr";
        PKP_MG
    };
    class MNP_AFIN_Soldier_AT : MNP_AFIN_Soldier_F{
        displayName = "Rifleman (AT)";
        backpack = "B_AssaultPack_rgr_LAT";
        RK62_AT
    };
    class MNP_AFIN_Soldier_MG : MNP_AFIN_Soldier_O{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_cbr";
        PKP_MG
    };
    class MNP_AFIN_Soldier_MD : MNP_AFIN_Soldier_O{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        RK62_MED
    };
    // Kiwis
    class MNP_NZ_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "NZ RifleMan";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NZ_A"; //the uniform item
        backpack = "B_AssaultPack_rgr";
        AUGA3_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NZ; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NZ_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "NZ Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NZ_B"; //the uniform item
        backpack = "B_Kitbag_rgr";
        AUGA3_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NZ; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NZ_Soldier_AR : MNP_NZ_Soldier_O{
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249mini_AR
    };
    class MNP_NZ_Soldier_AT : MNP_NZ_Soldier_O{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
    };
    class MNP_NZ_Soldier_MG : MNP_NZ_Soldier_O{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        FNMAG_MG
    };
    class MNP_NZ_Soldier_Md : MNP_NZ_Soldier_O{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        AUGA3_MED
    };
    // Norweegis
    class MNP_NOR_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "NOR RifleMan";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NOR_A"; //the uniform item
        backpack = "B_Kitbag_rgr";
        HK416_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NOR_WD; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NOR_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "NOR Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NOR_B"; //the uniform item
        backpack = "B_Kitbag_rgr";
        HK416_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NOR_WD; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NOR_Soldier_AR : MNP_NOR_Soldier_O{
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249pip1_AR
    };
    class MNP_NOR_Soldier_AT : MNP_NOR_Soldier_O{
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        HK416_AT2
    };
    class MNP_NOR_Soldier_MG : MNP_NOR_Soldier_O{
        displayName = "Machinegunner";
        backpack = "B_Kitbag_rgr";
        FNMAGRIS_MG
    };
    class MNP_NOR_Soldier_Md : MNP_NOR_Soldier_O{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        HK416_MED
    };
    // Desert Norweegies
    class MNP_NOR_D_Soldier_F : I_Soldier_base_F {
        scope = 2;
        displayName = "NOR RifleMan";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NOR_D_A"; //the uniform item
        backpack = "B_Kitbag_cbr";
        HK416_RIFLEMAN
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NOR_DE; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NOR_D_Soldier_O : I_Soldier_base_F {
        scope = 2;
        displayName = "NOR Team Leader";
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "MNP_CombatUniform_NOR_D_B"; //the uniform item
        backpack = "B_Kitbag_cbr";
        HK416_FTL
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NOR_DE; // Puts unit under new faction
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        author = "Killoch";    
    };
    class MNP_NOR_D_Soldier_AR : MNP_NOR_D_Soldier_O{
        displayName = "Automatic Rifleman";
        backpack = "B_Carryall_oli";
        M249pip1_AR
    };
    class MNP_NOR_D_Soldier_AT : MNP_NOR_D_Soldier_O{
        displayName = "Rifleman (AT)";
        HK416_AT2
    };
    class MNP_NOR_D_Soldier_MG : MNP_NOR_D_Soldier_O{
        displayName = "Machinegunner";
        FNMAGRIS_MG
    };
    class MNP_NOR_D_Soldier_Md : MNP_NOR_D_Soldier_O{
        displayName = "Combat Medic";
        backpack = "B_AssaultPack_rgr_Medic";
        attendant = 1;
        HK416_MED
    };
};