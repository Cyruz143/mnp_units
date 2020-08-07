//Helmets
class H_HelmetIA;
class HeadgearItem;
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

// Not used in MNP but we assign for PMC in hull etc!
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

//Berets
class H_Beret_02;
class H_Booniehat_khk;

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
class MNP_Boonie_AUS : H_Booniehat_khk {
    displayName = "MNP: AUSCAM Boonie";
    picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_AUS.paa"};
};
class MNP_Boonie_ROK : H_Booniehat_khk {
    displayName = "MNP: GRANITE-B Boonie(ROK)";
    picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK.paa"};
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
class MNP_Boonie_AMCU : H_Booniehat_khk{
    displayName = "MNP: AMCU Boonie";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_AMCU.paa"};
};
class MNP_Boonie_6CO : H_Booniehat_khk{
    displayName = "MNP: 6 Color Desert Boonie";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_6co.paa"};
};

//Caps
class H_MilCap_gry;
class MNP_MC_OD : H_MilCap_gry{
    displayName = "MNP: Olive Drab Cap";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_OD.paa"};
};
class MNP_MC_UKR : H_MilCap_gry{
    displayName = "MNP: Ukrainian TTSkO Cap";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_UKR.paa"};
};
class MNP_MC_US6co : H_MilCap_gry{
    displayName = "MNP: 6 Color Desert Cap";
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\MC_6co.paa"};
};