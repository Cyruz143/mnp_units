class cfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class V_PlateCarrierIA2_dgtl;
    class H_HelmetIA;
    class HeadgearItem;
    class VestItem;
    class H_Booniehat_khk;
    class H_Beret_02;
    class H_MilCap_gry;
    class MNP_CombatUniform_Ireland : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irish DPM Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Irish_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ireland_S : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irish DPM Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Irish_Soldier_MG"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ireland_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irish DPM Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Irish_Soldier_D"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ireland_DS : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irish DPM Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Ire_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Irish_Soldier_DMG"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Beret_Ireland : H_Beret_02  {
        displayName = "MNP: Irish Beret";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Ireland_P.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Flat.rvmat"};
    };
    class MNP_Boonie_Ireland_T : H_Booniehat_khk  {
        displayName = "MNP: Irish DPM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Boonie_Ireland_T.paa"};
    };
    class MNP_Boonie_Ireland_D : H_Booniehat_khk  {
        displayName = "MNP: Irish DPM Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Boonie_Ireland_D.paa"};
    };
    class MNP_Helmet_Ireland : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Irish DPM Helmet";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_Ire.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_Ireland_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Irish DPM Helmet (Desert)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_Ire_D.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_Ireland : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Irish DPM Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_Ire.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_Ireland_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Irish DPM Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_Ire.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    // NPA Uniforms
    class MNP_Boonie_Jigsaw : H_Booniehat_khk {
        displayName = "MNP: Desert Jigsaw Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_LVMD1.paa"};
    };
    class MNP_Boonie_ASA : H_Booniehat_khk {
        displayName = "MNP: DMC Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_UEDP.paa"};
    };
    // REBELS WITHOUT A CAUSE ( LVM )
    class MNP_CombatUniform_Militia_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (Tigerstripe)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (Woodland)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep2_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_MG"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_C : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (ATACS)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\officer_strep3_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_E : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (ERDL, T-Shirt)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\smocks_strepI_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_M"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_F : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (DPM, T-Shirt)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\smocks_strepII_co.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_RAT"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // In the Desert
    class MNP_CombatUniform_Militia_DA : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (Desert Jigsaw)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D1.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_DO"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_DB : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (Desert DPM)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D2.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_DMG"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_DC : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (3 Color Desert, Iranian DPM)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D3.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_DAR"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_DE : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (3 Color Desert, T-Shirt)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D4.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_DM"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Militia_DF : Uniform_Base {
        scope = 2;
        displayName = "MNP: Rebel Gear (Desert T-Shirt)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_LVM_D5.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Militia_Soldier_DRAT"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // REBELS WITH A CAUSE
    class MNP_CombatUniform_Rebel_A : Uniform_Base {
            scope = 2;
            displayName = "MNP: Revolutionary Jumper";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\rev_2.paa"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
                uniformClass = "C_mnp_31"; //would be same as our made soldier class
                containerClass = "Supply100"; //how much it can carry
                mass = 20; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
        };
    class MNP_CombatUniform_Rebel_B : Uniform_Base {
            scope = 2;
            displayName = "MNP: Revolutionary Officer";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\rev_1.paa"};
            //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "C_mnp_32"; //would be same as our made soldier class
                containerClass = "Supply100"; //how much it can carry
                mass = 20; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
        };
    // ASA Stuff
    class MNP_CombatUniform_ASA_GC : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (M81)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_22"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ASA_GC_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (M81)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_23"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ASA_GC2 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (DMC)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T2.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_21"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ASA_GC2_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (DMC)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T2.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_20"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ASA_GC3 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (A-TACS)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T3.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_19"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ASA_GC3_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Irregular Fatigues (A-TACS)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ASA_T3.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_18"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_Olive_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: OD Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ASA.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_Olive_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: OD Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ASA.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    // Finland
    class MNP_CombatUniform_Fin_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Finnish Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Fin_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Fin_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Fin_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Finnish Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Fin_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_Fin_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Finarctic_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Finnish Fatigues (arctic)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Fin_A.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_AFIN_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 60; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Finarctic_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Finnish Fatigues (arctic)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Fin_A.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_AFIN_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_FIN_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Finnish Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_FIN_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_FIN_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Finnish Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_FIN_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_FIN_T : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Finnish MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_FIN_T.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_FIN_A : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Finnish MICH (arctic)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_FIN_A.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Boonie_AFIN : H_Booniehat_khk {
        displayName = "MNP: Finnish Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_FIN_A.paa"};
    };
    class MNP_Boonie_FIN : H_Booniehat_khk {
        displayName = "MNP: Finnish Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_FIN_T.paa"};
    };
    // New Zealand
    class MNP_CombatUniform_NZ_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: NZMCU Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NZ_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_NZ_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: NZMCU Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NZ.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NZ_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_NZ_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: CBR Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NZ.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_NZ_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: CBR Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NZ.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_NZ : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: NZMCU MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_NZ.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Boonie_NZ : H_Booniehat_khk {
        displayName = "MNP: NZMCU Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_NZ.paa"};
    };
    // Norway
    class MNP_CombatUniform_NOR_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Norwegian  Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NOR_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_NOR_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Norwegian Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NOR_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_NOR_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Norwegian Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NOR.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_NOR_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Norwegian Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NOR.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_NOR : H_HelmetIA {
        scope = 1;
        weaponPoolAvailable = 1;
        displayName = "MNP: Norwegian helmet";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_NOR.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Boonie_NOR : H_Booniehat_khk {
        displayName = "MNP: Norwegian Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_NOR.paa"};
    };
    // Norway Desert
    class MNP_CombatUniform_NOR_D_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Norwegian  Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NOR_D_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_NOR_D_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Norwegian Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NOR_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NOR_D_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_NOR_D_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Norwegian Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NOR_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_NOR_D_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Norwegian Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_NOR_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_NOR_D : H_HelmetIA {
        scope = 1;
        weaponPoolAvailable = 1;
        displayName = "MNP: Norwegian helmet (Desert)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_NOR_D.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Boonie_NOR_D : H_Booniehat_khk {
        displayName = "MNP: Norwegian Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_NOR_D.paa"};
    };
    // Czech
    class MNP_CombatUniform_CZ_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Czech Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CZ.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CZ_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_CZ_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Czech Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CZ.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CZ_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_CZ_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Czech Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CZ.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_CZ_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Czech Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CZ.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    passThrough = 0.3;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_CZ : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Czech MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CZ.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Boonie_CZ : H_MilCap_gry {
        displayName = "MNP: Czech Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CZ.paa"};
    };
    class MNP_CombatUniform_AMerc_1 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Bush Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Bushcam_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_1"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMerc_2 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Bush Uniform + Lizard";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Bushcam_A.paa", "\x\mnp_units\addons\mnp_main\data\C_FrLiz_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_2"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMerc_3 : Uniform_Base {
        scope = 2;
        displayName = "MNP: 'Duck' Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Duck_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_3"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMerc_4 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Lizard Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_FrLiz_A.paa", "\x\mnp_units\addons\mnp_main\data\C_FrLiz_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_4"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMerc_5 : Uniform_Base {
        scope = 2;
        displayName = "MNP: Splinter Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SPLRain_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Beige_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_5"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMerc_6 : Uniform_Base {
        scope = 2;
        displayName = "MNP: 'Duck' Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Duck_A.paa", "\x\mnp_units\addons\mnp_main\data\C_Duck_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_6"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_PPU_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Urban Digital Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PPU.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_PPU_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_PPU_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Urban Digital Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PPU.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_PPU_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
};
