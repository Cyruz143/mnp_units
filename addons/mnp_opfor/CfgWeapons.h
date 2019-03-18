class cfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class V_PlateCarrierIA2_dgtl;
    class H_HelmetIA;
    class HeadgearItem;
    class VestItem;
    class H_MilCap_gry;
    class H_Booniehat_khk;
    class H_Beret_02;
    //- VDV Regular Gear
    class MNP_CombatUniform_RU_Med : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Digital)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_MEDIUM"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RU_Med_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Digital)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RU_Med_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Desert Digital)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_MEDIUM_D"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RU_Med_DB : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Desert Digital)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RL_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_AR_D"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    //- PLA Regular Gear
    class U_I_OfficerUniform;
    class MNP_CombatUniform_China : Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 (Universal)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLA_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLA_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CN_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_China : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 helmet (Universal)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CN_T.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 10;
            modelSides[] = {6};
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
    // Desert
    class MNP_CombatUniform_China_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAD_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAD_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CD_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_China_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 Helmet (Arid)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CN_D.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 10;
            modelSides[] = {6};
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
    // OPFOR Heavies
    class MNP_CombatUniform_China_Heavy_T :Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 Heavy";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CHI_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CN_Soldier_heavy_F"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_China_Heavy_D :Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 Heavy (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CHI_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CN_Soldier_heavy_D"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_CNH_T : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 Helmet (Universal)";
        model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CHI_T.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
            mass = 20;
            modelSides[] = {6};
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
    class MNP_Helmet_CNH_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 Helmet (Arid)";
        model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CHI_D.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
            mass = 20;
            modelSides[] = {6};
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
    class MNP_CombatUniform_Russia_Heavy :Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Heavy (T)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_T.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_heavy_F"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Russia : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian helmet (Digital)";
        model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RU_T.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
            mass = 20;
            modelSides[] = {6};
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
    class MNP_CombatUniform_Russia_Heavy_D :Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Heavy (Desert Digital)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_D.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_heavy_D"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Russia_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian helmet (Desert)";
        model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RU_D.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
            mass = 20;
            modelSides[] = {6};
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
    // Chinese Heavy Vests
    class MNP_Vest_ChinaH_T : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Universal)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CN_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_ChinaH_T2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Universal)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CN_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_ChinaH_D : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CN_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_ChinaH_D2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CN_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    // RUSSIAN VESHTS
    class MNP_Vest_RU_T : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Plate Carrier (Digital Flora)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RU_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_RU_T2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Plate Carrier (Digital Flora)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RU_T.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_RU_D : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Plate Carrier (Digital Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RU_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_RU_D2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Plate Carrier (Digital Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RU_D.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
     // -- Boonies
    class MNP_Boonie_CN_T : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Universal)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_CN_T.paa"};
    };
    class MNP_Boonie_CN_D : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Arid)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_CN_D.paa"};
    };
    class MNP_Boonie_RU_T : H_Booniehat_khk {
        displayName = "MNP: Russian Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU_T.paa"};
    };
    class MNP_Boonie_RU_D : H_Booniehat_khk {
        displayName = "MNP: Russian Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU_D.paa"};
    };
    // PLN Marine Gear
    class MNP_CombatUniform_CMAR : Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 (Naval)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLN_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLN_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CM_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_MilCap_CN_T : H_MilCap_gry{
        displayName = "MNP: Type 07 Cap (Universal)";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_T.paa"};
    };
    class MNP_MilCap_RU_T : H_MilCap_gry{
        displayName = "MNP: VDV Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_RU_T.paa"};
    };
    class MNP_MilCap_RU_D : H_MilCap_gry{
        displayName = "MNP: VDV Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_RU_D.paa"};
    };
    class MNP_MilCap_CM : H_MilCap_gry{
        displayName = "MNP: Type 07 Cap (Naval)";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CM.paa"};
    };
    class MNP_MilCap_CN_D : H_MilCap_gry{
        displayName = "MNP: Type 07 Cap (Arid)";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_CN_D.paa"};
    };
    class MNP_Helmet_CM : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 Helmet (Naval)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CM.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 10;
            modelSides[] = {6};
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
    class MNP_Boonie_CM : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Naval)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_CM.paa"};
    };
    class MNP_Beret_VDV : H_Beret_02  {
        displayName = "MNP: VDV Beret";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Beret_VDV.paa"};
    };
    class MNP_Vest_RUMED : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RUMED.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply140";
            mass = 70;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_RUMED_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Russian Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RUMED.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply140";
            mass = 70;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_RU_LT : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian MICH Helmet (Digital)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RU_LT.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 10;
            modelSides[] = {6};
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
    class MNP_Helmet_RU_LD : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian MICH Helmet (Desert Digital)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RU_LD.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
            mass = 10;
            modelSides[] = {6};
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
    // Soviet Steel helmets, regards to East Vs. West mod
    class MNP_Helmet_PAGST_CN : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 PAGST (Type.07 Universal)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PLAT_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PLAT_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_CN_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 PAGST (Type.07 Arid)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PLAD_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PLAD_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_CM : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 PAGST (Type.07 Naval)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PLAN_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PLAN_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_RT : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian PASGT (Digital Flora)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_RUPT_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_RUPT_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_RD : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian PASGT (Digital Desert)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_RUPD_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_RUPD_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_OD : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: PASGT (Olive Drab)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PGOD_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PGOD_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_BK : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: PASGT (Black)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PGBK_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PGBK_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_UN : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: PASGT (UN)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PGUN_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PGUN_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_IRGC : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: IRGC PASGT";
        model = "\x\mnp_units\addons\mnp_opfor\sud_IRGC_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_IRGC_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_IBSJ : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: IRGC Basij PASGT";
        model = "\x\mnp_units\addons\mnp_opfor\sud_IBSJ_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_IBSJ_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_PAGST_RO : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian PASGT (Flora)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_RUPG_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_RUPG_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_SOVC_CD : MNP_Helmet_PAGST_CN_D {
        scope = 1;
    };
    class MNP_Helmet_SOVC_CM : MNP_Helmet_PAGST_CM {
        scope = 1;
    };
    class MNP_Helmet_SOVC_NK : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Soviet Helmet (KPA)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmetnk";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmetnk";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_SOVC_DC : MNP_Helmet_PAGST_OD {
        scope = 1;
    };
    class MNP_Helmet_SOVC_CN : MNP_Helmet_PAGST_CN {
        scope = 1;
    };
    class MNP_Helmet_SOVC_RU : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Soviet Helmet (Russian)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmetru";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmetru";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_Helmet_SOV_Steel : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Soviet Steel Helmet";
        model = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmet01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\sud_equipussr_co.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\sud_equipussr.rvmat"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_ussr_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    // North Korean Army
    class MNP_CombatUniform_NKR_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: KPA Uniform (Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "MNP_NK_Soldier_O"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_NKR_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: KPA Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKR.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NK_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_NKC_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: KPA Camouflage Uniform (Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "MNP_NKC_Soldier_O"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_NKC_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: KPA Camouflage Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_NKC.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_NKC_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // CSAT Arctic
    class MNP_CombatUniform_Russia_arctic :Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Heavy (arctic)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RU_A.paa"};
        //hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RU_Soldier_arctic_F"; //would be same as our made soldier class
            containerClass = "Supply40"; //how much it can carry
            mass = 100; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Russia_arctic : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Russian helmet (arctic)";
        model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RU_A.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
            mass = 20;
            modelSides[] = {6};
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
    class MNP_Vest_Light_RU : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Flora Light Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_RU.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
            containerClass = "Supply100";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_Light_R2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Digital Flora Light Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_R2.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
            containerClass = "Supply100";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_Light_R3 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Tan Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_R3.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
            containerClass = "Supply100";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    // Russian Old School
    class MNP_MilCap_RO_A : H_MilCap_gry{
        displayName = "MNP: Flora Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_RO_A.paa"};
    };
    class MNP_MilCap_RO_B : H_MilCap_gry{
        displayName = "MNP: TTsKO Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_RO_B.paa"};
    };
    class MNP_CombatUniform_RO_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: Russian Uniform (Flora - Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "C_mnp_33"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_RO_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Flora)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_34"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RO2_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: Russian Uniform (TTsKO - Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "C_mnp_37"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_RO2_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (TTsKO)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO2.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_38"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RO3_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: Russian Uniform (Airborne - Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "MNP_RO3_Soldier_O"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_RO3_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Airborne)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO3.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_RO3_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_RO4_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: Russian Uniform (Reed - Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
                uniformClass = "C_mnp_35"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo1"};
            };
        };
    class MNP_CombatUniform_RO4_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: Russian Uniform (Reed)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_RO4.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_36"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Donetsk
    class MNP_CombatUniform_DPR_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: DPR (Spekter-S - Autumn)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_DPR_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_DPR_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: DPR (Spekter-S - Summer)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPR_T_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPR_T_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_DPR_T_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Iranian Basij Uniforms
    class MNP_CombatUniform_IR_BSJ_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: IRGC Basij Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_17"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_IR_BSJ_Med : Uniform_Base {
        scope = 2;
        displayName = "MNP: IRGC Basij Fatigues ";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        //hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_16"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_IR_BSJ_Med_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: IRGC Basij Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_BSJ_B.paa"};
        //hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_15"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Iranian RG
    class MNP_CombatUniform_IR_IRGC_A : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: IRGC Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_IR_IRGC_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_IR_IRGC_Med : Uniform_Base {
        scope = 2;
        displayName = "MNP: IRGC Fatigues ";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_IR_IRGC_Soldier_MEDIUM"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_IR_IRGC_Med_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: IRGC Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_IR_IRGC_B.paa"};
        //hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_IR_IRGC_Soldier_Med_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Rapid Additions
    class MNP_CombatUniform_China_J : Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 (Artillery)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAT_A.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAT_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "MNP_CW_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_PAGST_CNJ : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Type 07 PAGST (Type.07 Artillery)";
        model = "\x\mnp_units\addons\mnp_opfor\sud_PLAA_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_opfor\sud_PLAA_helmet01";
            mass = 50;
            modelSides[] = {6};
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
    class MNP_CombatUniform_China_SF : Uniform_Base {
        scope = 2;
        displayName = "MNP: Type 07 (Police Special Forces)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_PLAP_SFA.paa", "\x\mnp_units\addons\mnp_main\data\C_PLAP_SFB.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformmodel = "-";
            uniformClass = "C_mnp_40"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_ChinaH_J : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Artillery)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_PLAT.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Vest_ChinaH_J2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Type 07 Plate Carrier (Artillery)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_PLAT.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
};
