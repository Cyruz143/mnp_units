class cfgWeapons {
    class Uniform_Base;
    class UniformItem;
    class V_PlateCarrierIA2_dgtl;
    class H_HelmetIA;
    class HeadgearItem;
    class VestItem;
    class V_PlateCarrier3_rgr;
    class H_Booniehat_khk;
    class H_MilCap_gry;
    // USMC Gear
    class MNP_CombatUniform_USMC_T : Uniform_Base {
        scope = 2;
        displayName = "MNP: MARPAT Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMC_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_USMC_ST : Uniform_Base {
        scope = 2;
        displayName = "MNP: MARPAT Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMC_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_USMC : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: MARPAT MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_USMC_T.paa"};
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
    // USMC Desert
    class MNP_CombatUniform_USMC_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: MARPAT Combat Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMC_Soldier_DF"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_USMC_SD : Uniform_Base {
        scope = 2;
        displayName = "MNP: MARPAT Combat Fatigues(Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMC_Soldier_DO"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_USMC_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: MARPAT MICH(Desert)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_USMC_D.paa"};
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
    class MNP_Vest_USMC : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: USMC Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC.paa"};
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
    class MNP_Vest_USMC_2 : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: USMC Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC.paa"};
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
    // CANADA GEAR
    class MNP_CombatUniform_Canada : Uniform_Base {
        scope = 2;
        displayName = "MNP: CADPAT Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Canada_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Canada_S : Uniform_Base {
        scope = 2;
        displayName = "MNP: CADPAT Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_T.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Canada_Soldier_S"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Canada_T : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: CADPAT MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CANADA_T.paa"};
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
    class MNP_Vest_Canada_T : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: CADPAT Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CANADA_T.paa"};
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
    class MNP_Vest_Canada_T2 : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: CADPAT Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CANADA_T.paa"};
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
    // Desert
    class MNP_CombatUniform_Canada_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: CADPAT Combat Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Canada_Soldier_DF"; //would be same as our made soldier class
            containerClass = "Supply70"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Canada_DS : Uniform_Base {
        scope = 2;
        displayName = "MNP: CADPAT Combat Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_CANADA_D.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Canada_Soldier_DS"; //would be same as our made soldier class
            containerClass = "Supply70"; //how much it can carry
            mass = 40; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Canada_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: CADPAT MICH (Desert)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_CANADA_D.paa"};
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
    class MNP_Vest_Canada_D : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: CADPAT Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CANADA_D.paa"};
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
    class MNP_Vest_Canada_D2 : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: CADPAT Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_CANADA_D.paa"};
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
    // GERMAN GEAR
    class MNP_CombatUniform_Germany : Uniform_Base {
        scope = 2;
        displayName = "MNP: Flecktarn Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_GER_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Germany_S : Uniform_Base {
        scope = 2;
        displayName = "MNP: Flecktarn Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_T.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_GER_Soldier_S"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Germany : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Flecktarn MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_GER_T.paa"};
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
    class MNP_Vest_Germany : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Flecktarn Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_GER_T.paa"};
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
    class MNP_Vest_Germany_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Flecktarn Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_GER_T.paa"};
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
    // Desert
    class MNP_CombatUniform_Germany_D : Uniform_Base {
        scope = 2;
        displayName = "MNP: Flecktarn Combat Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_GER_Soldier_DF"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Germany_SD : Uniform_Base {
        scope = 2;
        displayName = "MNP: Flecktarn Combat Fatigues (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_GER_D.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_GER_Soldier_DS"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Germany_D : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Flecktarn MICH (Desert)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_GER_D.paa"};
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
    class MNP_Vest_Germany_D : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Flecktarn Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_GER_D.paa"};
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
    class MNP_Vest_Germany_D2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Flecktarn Plate Carrier (Desert)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_GER_D.paa"};
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
    //Misc Headgear
    class MNP_Helmet_UN : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: UN MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_UN.paa"};
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
    class MNP_Helmet_Dslyecxi : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Dslyecxi's Visage";
        model = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_DSLY_K.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
            mass = 130;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    class MNP_Helmet_STPilot : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Imperial Helmet";
        model = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_ST.paa"};
        class ItemInfo : HeadgearItem {
            uniformmodel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 4;
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"camo"};
        };
    };
    // Boonies
    class MNP_Boonie_USMC_D : H_Booniehat_khk {
        displayName = "MNP: MARPAT Boonie(Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_USMC_D.paa"};
    };
    class MNP_Boonie_USMC : H_Booniehat_khk {
        displayName = "MNP: MARPAT Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_USMC.paa"};
    };
    class MNP_Boonie_UN : H_Booniehat_khk {
        displayName = "MNP: UN Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_UN.paa"};
    };
    class MNP_Boonie_CAN : H_Booniehat_khk {
        displayName = "MNP: CADPAT Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_CAN_T.paa"};
    };
    class MNP_Boonie_CAN_D : H_Booniehat_khk {
        displayName = "MNP: CADPAT Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_CAN_D.paa"};
    };
    class MNP_Boonie_GER_T : H_Booniehat_khk {
        displayName = "MNP: Flecktarn Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_GER_T.paa"};
    };
    class MNP_Boonie_GER_D : H_Booniehat_khk {
        displayName = "MNP: Flecktarn Boonie(Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_GER_D.paa"};
    };
    class MNP_Boonie_ACU : H_Booniehat_khk {
        displayName = "MNP: ACU Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ACU.paa"};
    };
    class MNP_Boonie_AUS : H_Booniehat_khk {
        displayName = "MNP: AUSCAM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_AUS.paa"};
    };
    // ARMY + RANGERS
    class MNP_Vest_ACU_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: ACU Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ACU.paa"};
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
    class MNP_Vest_ACU_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: ACU Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ACU.paa"};
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
    class MNP_Helmet_ACU : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: ACU MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_ACU.paa"};
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
    class MNP_CombatUniform_Ranger_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Scorpion Fatigues (Ranger)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USR_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ranger_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Scorpion Fatigues (Ranger)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USR_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ranger_C : Uniform_Base {
        scope = 2;
        displayName = "MNP: ACU Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USR_Soldier_M"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Ranger_E : Uniform_Base {
        scope = 2;
        displayName = "MNP: ACU Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USR_2.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USR_Soldier_MG"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Dark Multicam
    class MNP_Vest_TS_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Multicam Plate Carrier(Dark)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_TS.paa"};
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
    class MNP_Vest_TS_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Multicam Plate Carrier(Dark)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_TS.paa"};
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
    class MNP_Helmet_TS : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Multicam MICH (Dark)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_TS.paa"};
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
    class MNP_CombatUniform_TS_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Multicam Fatigues (Dark)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_TS_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_TS_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Multicam Fatigues (Dark)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TS.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_TS_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Multicam
    class MNP_CombatUniform_DS_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Multicam Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SD.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_27"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_DS_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Multicam Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_SD.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_26"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_DS_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Multicam Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_SD.paa"};
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
    class MNP_Vest_DS_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Multicam Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_SD.paa"};
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
    class MNP_Helmet_DS : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Multicam MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_SD.paa"};
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
    // Aystrakia
    class MNP_CombatUniform_Australia : Uniform_Base {
        scope = 2;
        displayName = "MNP: AUSCAM Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_AUS_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Australia_S : Uniform_Base {
        scope = 2;
        displayName = "MNP: AUSCAM Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AUS.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_AUS_Soldier_S"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_Australia : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: AUSCAM MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_AUS.paa"};
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
    class MNP_Vest_Australia : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: AUSCAM Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_AUS.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_Australia_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: AUSCAM Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_AUS.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    // ROK Army
    class MNP_CombatUniform_ROK_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: GRANITE-B Fatigues(ROK)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_ROK_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_ROK_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: GRANITE-B Fatigues(ROK)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROK.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_ROK_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_ROK_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: GRANITE-B Plate Carrier(ROK)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ROK.paa"};
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
    class MNP_Vest_ROK_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: GRANITE-B Plate Carrier(ROK)";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ROK.paa"};
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
    class MNP_Helmet_ROK : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: GRANITE-B MICH(ROK)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_ROK.paa"};
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
    class MNP_Boonie_ROK : H_Booniehat_khk {
        displayName = "MNP: GRANITE-B Boonie(ROK)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK.paa"};
    };
    // M81
    class MNP_CombatUniform_M81_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: M81 Woodland BDU (Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_A.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "-";
                uniformClass = "MNP_M81_Soldier_O"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
        };
    class MNP_CombatUniform_M81_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: M81 Woodland BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_A.paa"};
        hiddenSelectionsMaterials[]= {"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_M81_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_M81 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: M81 Woodland Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_M81.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 18;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 18;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 18;
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
    class MNP_Vest_M81b : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: M81 Woodland Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_M81.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 18;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 18;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 18;
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
    class MNP_Helmet_BLK : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Black MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_BLK.paa"};
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
    class MNP_CombatUniform_Wood_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: M81 Woodland Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_24"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Wood_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: M81 Woodland Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_25"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // OD
    class MNP_CombatUniform_OD_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: Olive Drab BDU";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "-";
                uniformClass = "C_mnp_29"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
    };
    class MNP_CombatUniform_OD_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: Olive Drab BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_OD.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_28"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_OD_A : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: OD Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_OD.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_OD_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: OD Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_OD.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Helmet_OD : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Olive Drab MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_OD.paa"};
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
    class MNP_MC_OD : H_MilCap_gry{
        displayName = "MNP: Olive Drab Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_OD.paa"};
    };
    class MNP_MC_Rev : MNP_MC_OD {scope=1;};
    // arctic USMC
    class MNP_CombatUniform_USMC_arctic : Uniform_Base {
        scope = 2;
        displayName = "MNP: Winter MARPAT Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMCA_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_USMC_arctic_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Winter MARPAT Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_A.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USMCA_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_USMC_arctic : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Winter MARPAT MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_USMC_A.paa"};
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
    // light (press) vests
    class MNP_Vest_Light_M81 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: M81 Woodland Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_M81.paa"};
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
    class MNP_Vest_Light_OD : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Olive Drab Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_OD.paa"};
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
    class U_I_OfficerUniform;
    //Polis
    class MNP_CombatUniform_Police : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: Police Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_POPO_A.paa", "\x\mnp_units\addons\mnp_main\data\C_POPO_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_30"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // Ukrainian Gear
    class MNP_CombatUniform_Ukrainian : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: Ukrainian TTSkO Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_UKR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_UKR_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_UKR_A"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_UKR_A : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Ukrainian TTSkOCombat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_UKR.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_UKR_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Ukrainian TTSkO Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_UKR.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_MC_UKR : H_MilCap_gry{
        displayName = "MNP: Ukrainian TTSkO Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_UKR.paa"};
    };
    class MNP_Helmet_PAGST_UKR : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Ukrainian TTSkO PASGT";
        model = "\x\mnp_units\addons\mnp_blufor\sud_UKRA_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_blufor\sud_UKRA_helmet01";
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
    // New US Woodland
    class MNP_CombatUniform_USW : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: M81 Woodland Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USW_A.paa", "\x\mnp_units\addons\mnp_main\data\C_USW_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_USW_A"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_MC_USW : H_MilCap_gry{
        displayName = "MNP: M81 Woodland Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_USW.paa"};
    };
    class MNP_Boonie_USW : H_Booniehat_khk{
        displayName = "MNP: M81 Woodland Boonie";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_USW.paa"};
    };
    class MNP_Helmet_PAGST_M81 : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: M81 Woodland PASGT";
        model = "\x\mnp_units\addons\mnp_blufor\sud_US81_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_blufor\sud_US81_helmet01";
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
    class MNP_Helmet_USW : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: M81 Woodland MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_USW.paa"};
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
    class MNP_MC_M81 : MNP_MC_USW{
        scope = 1;
    };
    class MNP_Helmet_M81 : MNP_Helmet_USW {
        scope = 1;
    };
    class MNP_Helmet_ERDL : MNP_Helmet_USW {scope=1;};
    class MNP_Boonie_ERDL : MNP_Boonie_USW {scope=1;};
    // New UK DPM & BAF
    class MNP_CombatUniform_DPMR : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: DPM Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DPM_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_13"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_DDPMR : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: DPM Uniform(Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_DDPM_A.paa", "\x\mnp_units\addons\mnp_main\data\C_DDPM_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_14"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_Light_DPM : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: DPM Vest";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_DPM.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
            containerClass = "Supply100";
            mass = 20;
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
    class MNP_Vest_Light_DPM_D : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: DPM Vest (Desert)";
        model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\PV_DDPM.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
            containerClass = "Supply100";
            mass = 20;
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
    class MNP_Boonie_DDPM : H_Booniehat_khk {
        displayName = "MNP: DPM Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_DDPM.paa"};
    };
    class MNP_Boonie_DPM : H_Booniehat_khk {
        displayName = "MNP: DPM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_DPM.paa"};
    };
    class MNP_CombatUniform_DPM : MNP_CombatUniform_DPMR {scope = 1;};
    class MNP_CombatUniform_DPM_B : MNP_CombatUniform_DPMR {scope = 1;};
    class MNP_CombatUniform_NPA_Alt_B : MNP_CombatUniform_DDPMR {scope = 1;};
    class MNP_CombatUniform_NPA_Alt : MNP_CombatUniform_DDPMR {scope = 1;};
    // ROKMC
    class MNP_CombatUniform_ROKMC : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: ROKMC Digital Tiger Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ROKMC_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ROKMC_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_ROKMC_A"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_ROKMC : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: Digital Tiger Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RKMC.paa"};
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
    class MNP_Vest_ROKMC_2 : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: Digital Tiger Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_RKMC.paa"};
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
    class MNP_Helmet_ROKMC : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Digital Tiger MICH (ROKMC)";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_RKMC.paa"};
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
    // USMC 90's Experimental Urban
    class MNP_CombatUniform_USMC_Xtreme : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: T-Pattern Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_USMC_URB.paa", "\x\mnp_units\addons\mnp_main\data\C_USMC_URB_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformClass = "MNP_USMCX_A"; //would be same as our made soldier class
            uniformModel = "-";
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_Black_Tac_A : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Black Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC_URB.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_Black_Tac_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Black Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC_URB.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_USMC_Xtreme_A : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: T-Pattern Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC_URB2.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_USMC_Xtreme_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: T-Pattern Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_USMC_URB2.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Helmet_USMC_Xtreme : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: T-Pattern MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_USMC_URB.paa"};
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
    // New Australians
    class MNP_CombatUniform_AMCU_T : Uniform_Base {
        scope = 2;
        displayName = "MNP: AMCU Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_AMCU_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_AMCU_ST : Uniform_Base {
        scope = 2;
        displayName = "MNP: AMCU uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_AMCU.paa"};
        hiddenSelectionsMaterials[]={"\x\mnp_units\addons\mnp_main\data\noPatch.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_AMCU_Soldier_O"; //would be same as our made soldier class
            containerClass = "Supply50"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Helmet_AMCU : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: AMCU Helmet";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_AMCU.paa"};
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
    class MNP_Boonie_AMCU : H_Booniehat_khk{
        displayName = "MNP: AMCU Boonie";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_AMCU.paa"};
    };
    class MNP_Vest_AMCU : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: AMCU Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_AMCU.paa"};
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
    class MNP_Vest_AMCU_2 : V_PlateCarrier3_rgr {
        scope = 2;
        displayName = "MNP: AMCU Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_AMCU.paa"};
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
    class H_Beret_02;
    // Berets
    class MNP_Beret_2PARA : H_Beret_02{
        displayName = "MNP: 2Para Beret";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\BR_2PARA.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Flat.rvmat"};
    };
    class MNP_Beret_RM : H_Beret_02{
        displayName = "MNP: Royal Marine Beret";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\BR_RM.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Flat.rvmat"};
    };
    class MNP_Beret_SAS : H_Beret_02{
        displayName = "MNP: SAS Beret";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\BR_SAS.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Flat.rvmat"};
    };
    class MNP_Beret_Green : H_Beret_02{
        displayName = "MNP: Green Beret";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\BR_USSF.paa"};
        hiddenSelectionsMaterials[] = {"\x\mnp_units\addons\mnp_main\data\Beret_Flat.rvmat"};
    };
    // Load Bearing Vests
    class V_HarnessO_brn;
    class MNP_V_M81_Harness: V_HarnessO_brn{
        author = "Killoch";
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
        displayName = "MNP: M81 Woodland Load Bearing Vest";
        model = "\A3\Characters_F\OPFOR\equip_o_vest01";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_M81_A.paa","\x\mnp_units\addons\mnp_main\data\V_M81_B.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class MNP_V_M81_GL_Harness: V_HarnessO_brn{
        author = "Killoch";
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
        displayName = "MNP: M81 Woodland Load Bearing Vest (GL)";
        model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_M81_A.paa","\x\mnp_units\addons\mnp_main\data\V_M81_B.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
            containerClass = "Supply160";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class MNP_V_OD_Harness: MNP_V_M81_Harness{
        displayName = "MNP: OD Load Bearing Vest";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\LBV_OD.paa","\x\mnp_units\addons\mnp_main\data\LBV_OD_B.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class MNP_V_OD_GL_Harness: MNP_V_M81_GL_Harness{
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
        displayName = "MNP: OD Load Bearing Vest (GL)";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\LBV_OD.paa","\x\mnp_units\addons\mnp_main\data\LBV_OD_B.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
            containerClass = "Supply160";
            mass = 30;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 10;
                    PassThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    // Scorpion
    class MNP_CombatUniform_Scorpion_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: Scorpion Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Scorpion.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Scorpion_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Scorpion_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: Scorpion Combat Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_Scorpion.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Scorpion_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_Scorpion_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Scorpion Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_Scorpion.paa"};
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
    class MNP_Vest_Scorpion_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Scorpion Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_Scorpion.paa"};
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
    class MNP_Helmet_Scorpion : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: Scorpion MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_Scorpion.paa"};
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
    class MNP_Boonie_Scorpion : H_Booniehat_khk{
        displayName = "MNP: Scorpion Boonie";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_Scorpion.paa"};
    };
    class MNP_MC_Scorpion : H_MilCap_gry{
        displayName = "MNP: Scorpion Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_Scorpion.paa"};
    };
    // Israeli
    class MNP_CombatUniform_ISR : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: Israeli Drab Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_ISR_A.paa", "\x\mnp_units\addons\mnp_main\data\C_ISR_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_ISR_A"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Vest_ISRKahki_1 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Israeli Drab Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ISR.paa"};
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
    class MNP_Vest_ISRKahki_2 : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: Israeli Drab Plate Carrier";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_ISR.paa"};
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
    // Tiger Stripe
    class MNP_CombatUniform_TIG : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: Tiger Stripe Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_TIG_A.paa", "\x\mnp_units\addons\mnp_main\data\C_TIG_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_TIG_A"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_Boonie_TIG : H_Booniehat_khk {
        displayName = "MNP: Tiger Stripe Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_TIG.paa"};
    };
    // Tactical Turtlenecks
    class MNP_CombatUniform_Tacneck_A : Uniform_Base {
        scope = 1;
        displayName = "MNP: Tactical Turtleneck";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Tac_Turtle.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Tac_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_Tacneck_B : Uniform_Base {
        scope = 1;
        displayName = "MNP: Tactical Turtleneck 2";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Tac_Turtle.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_Tac_Soldier_AR"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    // 3Colour Replacement
    class MNP_CombatUniform_US3Co : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: 3 Color Desert Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_A.paa", "\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_11"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_US3Co_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: 3 Color Desert Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_9"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_US3Co_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: 3 Color Desert Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_10"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_US3Co_Sh : Uniform_Base {
            scope = 2;
            displayName = "MNP: 3 Color Desert BDU (Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "-";
                uniformClass = "C_mnp_8"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
        };
    class MNP_CombatUniform_US3Co_Rg : Uniform_Base {
        scope = 2;
        displayName = "MNP: 3 Color Desert BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_3Co_A.paa"};
        hiddenSelectionsMaterials[]= {"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_7"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_MC_US3Co : H_MilCap_gry{
        displayName = "MNP: 3 Color Desert Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_3co.paa"};
    };
    class MNP_Boonie_3CO : H_Booniehat_khk{
        displayName = "MNP: 3 Color Desert Boonie";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_3co.paa"};
    };
    class MNP_Helmet_PAGST_US3Co : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: 3 Color Desert PASGT";
        model = "\x\mnp_units\addons\mnp_blufor\sud_3coD_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_blufor\sud_3coD_helmet01";
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
    // 3Co Old Class redirects
    class MNP_CombatUniform_3Co_A : MNP_CombatUniform_US3Co_A {
    scope = 1;};
    class MNP_CombatUniform_3Co_B : MNP_CombatUniform_US3Co_B {
    scope = 1;};
    class MNP_Helmet_3Co : MNP_Helmet_PAGST_US3Co {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: 3 Color Desert MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_3co.paa"};
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
    // 6Colour Replacement
    class MNP_CombatUniform_US6co : U_I_OfficerUniform {
        scope = 2;
        displayName = "MNP: 6 Color Desert Uniform";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa", "\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_14"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_US6co_A : Uniform_Base {
        scope = 2;
        displayName = "MNP: 6-Color Desert Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_11"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_US6co_B : Uniform_Base {
        scope = 2;
        displayName = "MNP: 6-Color Desert Fatigues";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "Clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_B.paa"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "C_mnp_12"; //would be same as our made soldier class
            containerClass = "Supply100"; //how much it can carry
            mass = 10; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_CombatUniform_6CO_B : Uniform_Base {
            scope = 2;
            displayName = "MNP: 6-Color Desert BDU (Shemagh)";
            picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
            model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
            hiddenSelections[] = {"Camo", "insignia", "clan"};
            hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
            //hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
            class ItemInfo : UniformItem {
            modelSides[] = {6};
                uniformModel = "-";
                uniformClass = "MNP_US6co_Soldier_O"; //would be same as our made soldier class
                containerClass = "Supply60"; //how much it can carry
                mass = 40; //how much it weights
                hiddenSelections[] = {"Camo"};
            };
        };
    class MNP_CombatUniform_6CO : Uniform_Base {
        scope = 2;
        displayName = "MNP: 6-Color Desert BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"Camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\C_6co_A.paa"};
        hiddenSelectionsMaterials[]= {"\x\mnp_units\addons\mnp_main\data\officer.rvmat"};
        class ItemInfo : UniformItem {
            modelSides[] = {6};
            uniformModel = "-";
            uniformClass = "MNP_US6co_Soldier_F"; //would be same as our made soldier class
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
            hiddenSelections[] = {"Camo"};
        };
    };
    class MNP_MC_US6co : H_MilCap_gry{
        displayName = "MNP: 6 Color Desert Cap";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_6co.paa"};
    };
    class MNP_Boonie_6CO : H_Booniehat_khk{
        displayName = "MNP: 6 Color Desert Boonie";
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_6co.paa"};
    };
    class MNP_Helmet_PAGST_US6co : H_HelmetIA {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: 6 Color Desert PASGT";
        model = "\x\mnp_units\addons\mnp_blufor\sud_6coD_helmet01";
        class ItemInfo : HeadgearItem {
            uniformmodel = "\x\mnp_units\addons\mnp_blufor\sud_6coD_helmet01";
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
    class MNP_Vest_6co_A : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: 6co Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_6co.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Vest_6co_B : V_PlateCarrierIA2_dgtl {
        scope = 2;
        displayName = "MNP: 6co Combat Vest";
        model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\V_6co.paa"};
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 40;
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
    class MNP_Helmet_6Co : MNP_Helmet_PAGST_US6co{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "MNP: 6 Color Desert MICH";
        model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\H_6co.paa"};
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
};
