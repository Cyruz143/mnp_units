class V_PlateCarrier3_rgr;
class V_PlateCarrierIA2_dgtl;
class V_HarnessO_brn;
class VestItem;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
    };
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
    };
};

class MNP_V_OD_Harness: V_HarnessO_brn{
    author = "Killoch";
    picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
    displayName = "MNP: OD Load Bearing Vest";
    model = "\A3\Characters_F\OPFOR\equip_o_vest01";
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"Camo1","Camo2"};
    };
};
class MNP_V_OD_GL_Harness: V_HarnessO_brn{
    author = "Killoch";
    picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
    displayName = "MNP: OD Load Bearing Vest (GL)";
    model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
    hiddenSelections[] = {"Camo1","Camo2"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"Camo1","Camo2"};
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
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
            class Body
            {
                hitpointName = "HitBody";
                passThrough = 0.3;
            };
        };
        hiddenSelections[] = {"camo"};
    };
};