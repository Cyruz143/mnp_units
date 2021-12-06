class CfgVehicles {
    class I_Soldier_base_F;
    class I_G_Soldier_lite_F;

    class MNP_I_Soldier_base_F : I_Soldier_base_F {
        scope = 1;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody";
        author = "Killoch";
    };
    class MNP_I_G_Soldier_lite_F : I_G_Soldier_lite_F {
        scope = 1;
        modelSides[] = {3,1,0,2};
        nakedUniform = "U_BasicBody";
        author = "Killoch";
    };

    class MNP_Irish_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Ireland";
        AUGA3_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_IRE_WD;
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_MG : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Ireland_S";
        backpack = "B_Carryall_oli";
        FNMAG_MG
        EURO_MEN_GOGGLES
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        faction = MNP_IRE_WD;
        linkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_AR : MNP_Irish_Soldier_MG {
        backpack = "B_Carryall_oli";
        M249mini_AR
        linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_Officer : MNP_Irish_Soldier_MG {
        backpack = "";
        AUGA3_FTL
        linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_RAT : MNP_Irish_Soldier_MG {
        backpack = "B_Kitbag_rgr";
        AUGA3_AT
        linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_Medic : MNP_Irish_Soldier_F {
        backpack = "B_AssaultPack_rgr";
        attendant = 1;
        AUGA3_MED
        linkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_D : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Ireland_D";
        AUGA3_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_IRE_DE;
        linkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DMG : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Ireland_DS";
        backpack = "B_Carryall_cbr";
        FNMAG_MG
        EURO_MEN_GOGGLES
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        faction = MNP_IRE_DE;
        linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DAR : MNP_Irish_Soldier_DMG {
        backpack = "B_Carryall_cbr";
        M249mini_AR
        linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DOfficer : MNP_Irish_Soldier_DMG {
        AUGA3_FTL
        backpack = "";
        linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DRAT : MNP_Irish_Soldier_D {
        backpack = "B_Carryall_cbr";
        AUGA3_AT
        linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Irish_Soldier_DMedic : MNP_Irish_Soldier_DMG{
        backpack = "B_AssaultPack_cbr";
        AUGA3_MED
        attendant = 1;
        linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    // Local Volunteer Militia
    class MNP_Militia_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_A";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep_co.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_WD;
        AKME_FTL
        RUSSIAN_MEN
        linkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
    };
    class MNP_Militia_Soldier_MG : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_B";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        backpack = "CUP_B_AlicePack_Khaki";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep2_co.paa", "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_WD;
        PKM_MG
        linkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_AR : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_C";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        backpack = "CUP_B_AlicePack_Khaki";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep3_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_WD;
        RPK47_AR
        RUSSIAN_MEN
        linkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_M : MNP_I_G_Soldier_lite_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_E";
        backpack = "CUP_B_AlicePack_Bedroll";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_MED
        RUSSIAN_MEN
        attendant = 1;
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\smock_t1_co.paa","\x\mnp_units\addons\mnp_main\data\smocks_strepII_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_WD;
        linkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_RAT : MNP_I_G_Soldier_lite_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_F";
        backpack = "CUP_B_AlicePack_Khaki";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_AT
        RUSSIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\smock_t2_co.paa", "\x\mnp_units\addons\mnp_main\data\smocks_strepI_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_WD;
        linkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_F : MNP_Militia_Soldier_RAT{
        backpack = "";
        AKME_RIFLEMAN
    };

    // Desert Militiamen
    class MNP_Militia_Soldier_DO : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_DA";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D1.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_DE;
        AKME_FTL
        RUSSIAN_MEN
        linkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DMG : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_DB";
        backpack = "B_FieldPack_cbr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1","insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D2.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_DE;
        PKM_MG
        RUSSIAN_MEN
        linkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DAR : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_DC";
        backpack = "B_FieldPack_cbr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
        hiddenSelections[] = {"Camo1", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D3.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_DE;
        RPK47_AR
        RUSSIAN_MEN
        linkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DM : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_DE";
        backpack = "B_FieldPack_cbr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_MED
        RUSSIAN_MEN
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\C_LVM_D6.paa","\x\mnp_units\addons\mnp_main\data\C_LVM_D4.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_DE;
        linkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DRAT : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Militia_DF";
        backpack = "B_FieldPack_cbr";
        Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        AKME_AT
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = { "\x\mnp_units\addons\mnp_main\data\C_LVM_D6.paa", "\x\mnp_units\addons\mnp_main\data\C_LVM_D5.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        faction = MNP_LVM_DE;
        linkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_Militia_Soldier_DF : MNP_Militia_Soldier_DRAT{
        AKME_RIFLEMAN
        backpack = "";
        linkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    // Fins
    class MNP_FIN_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Fin_A";
        RK62_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_T.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_FIN_WD;
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_FIN_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Fin_B";
        RK62_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_T.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_FIN_WD;
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_FIN_Soldier_AR : MNP_FIN_Soldier_F{
        backpack = "B_Kitbag_rgr";
        PKP_MG
    };
    class MNP_FIN_Soldier_AT : MNP_FIN_Soldier_O{
        backpack = "B_Kitbag_rgr";
        RK62_AT
    };
    class MNP_FIN_Soldier_MG : MNP_FIN_Soldier_F{
        backpack = "B_Kitbag_rgr";
        PKP_MG
    };
    class MNP_FIN_Soldier_MD : MNP_FIN_Soldier_O{
        backpack = "B_AssaultPack_rgr";
        attendant = 1;
        RK62_MED
    };

    // Cold Fins
    class MNP_AFIN_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Finarctic_A";
        RK62_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_A.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_FIN_SN;
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_AFIN_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_Finarctic_B";
        RK62_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FIN_A.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_FIN_SN;
        linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_AFIN_Soldier_AR : MNP_AFIN_Soldier_F{
        backpack = "MNP_B_RUW_CA";
        PKP_MG
    };
    class MNP_AFIN_Soldier_AT : MNP_AFIN_Soldier_F{
        backpack = "MNP_B_RUW_CA";
        RK62_AT
    };
    class MNP_AFIN_Soldier_MG : MNP_AFIN_Soldier_O{
        backpack = "MNP_B_RUW_CA";
        PKP_MG
    };
    class MNP_AFIN_Soldier_MD : MNP_AFIN_Soldier_O{
        backpack = "MNP_B_WB_AP";
        attendant = 1;
        RK62_MED
    };

    // Kiwis
    class MNP_NZ_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NZ_A";
        AUGA3_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NZ;
        linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NZ_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NZ_B";
        AUGA3_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NZ;
        linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NZ_Soldier_AR : MNP_NZ_Soldier_O{
        backpack = "B_Carryall_khk";
        M249mini_AR
    };
    class MNP_NZ_Soldier_AT : MNP_NZ_Soldier_O{
        backpack = "B_Carryall_khk";
        AUGA3_AT
    };
    class MNP_NZ_Soldier_MG : MNP_NZ_Soldier_O{
        backpack = "B_Carryall_khk";
        FNMAG_MG
    };
    class MNP_NZ_Soldier_MD : MNP_NZ_Soldier_O{
        backpack = "B_AssaultPack_khk";
        attendant = 1;
        AUGA3_MED
    };

    // Norweegis
    class MNP_NOR_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NOR_A";
        HK416_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NOR_WD;
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NOR_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NOR_B";
        HK416_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NOR_WD;
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NOR_Soldier_AR : MNP_NOR_Soldier_O{
        backpack = "B_Carryall_khk";
        M249pip1_AR
    };
    class MNP_NOR_Soldier_AT : MNP_NOR_Soldier_O{
        backpack = "B_Carryall_khk";
        HK416_AT2
    };
    class MNP_NOR_Soldier_MG : MNP_NOR_Soldier_O{
        backpack = "B_Carryall_khk";
        FNMAGRIS_MG
    };
    class MNP_NOR_Soldier_MD : MNP_NOR_Soldier_O{
        backpack = "B_AssaultPack_khk";
        attendant = 1;
        HK416_MED
    };

    // Desert Norweegies
    class MNP_NOR_D_Soldier_F : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NOR_D_A";
        HK416_RIFLEMAN
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
        faction = MNP_NOR_DE;
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NOR_D_Soldier_O : MNP_I_Soldier_base_F {
        scope = 2;
        uniformClass = "MNP_CombatUniform_NOR_D_B";
        HK416_FTL
        EURO_MEN_GOGGLES
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
        faction = MNP_NOR_DE;
        linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
    class MNP_NOR_D_Soldier_AR : MNP_NOR_D_Soldier_O{
        backpack = "B_Carryall_cbr";
        M249pip1_AR
    };
    class MNP_NOR_D_Soldier_AT : MNP_NOR_D_Soldier_O{
        backpack = "B_Carryall_cbr";
        HK416_AT2
    };
    class MNP_NOR_D_Soldier_MG : MNP_NOR_D_Soldier_O{
        backpack = "B_Carryall_cbr";
        FNMAGRIS_MG
    };
    class MNP_NOR_D_Soldier_MD : MNP_NOR_D_Soldier_O{
        backpack = "B_AssaultPack_cbr";
        attendant = 1;
        HK416_MED
    };
};
