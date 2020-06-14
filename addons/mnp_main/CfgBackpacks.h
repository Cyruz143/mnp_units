class B_AssaultPack_blk;
class B_Kitbag_rgr;
class MNP_B_ACU_AP : B_AssaultPack_blk{
    scope = 2;
    displayName = "Assault Pack (ACU)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ACU_AP.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_ROK_AP : B_AssaultPack_blk{
    scope = 2;
    displayName = "Assault Pack (ROK)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK_AP.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_WB_AP : B_AssaultPack_blk{
    scope = 2;
    displayName = "Assault Pack (Winter)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_WB_AP.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_ACU_KB : B_Kitbag_rgr{
    scope = 2;
    displayName = "Kitbag (ACU)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ACU_KB.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_ROK_KB : B_Kitbag_rgr{
    scope = 2;
    displayName = "Kitbag (ROK)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_ROK_KB.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_WB_KB : B_Kitbag_rgr{
    scope = 2;
    displayName = "Kitbag (Winter)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_WB_KB.paa"};
    class TransportMagazines {};
    class TransportItems {};
};

class B_Carryall_Base;
class B_FieldPack_Base;
class MNP_B_WD_FP : B_FieldPack_Base {
    scope = 2;
    displayName = "Field Pack (Woodland)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\FP_USW.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_WD_CA : B_Carryall_Base {
    scope = 2;
    displayName = "Carryall Backpack (Woodland)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\CA_USW.paa"};
    class TransportMagazines {};
    class TransportItems {};
};
class MNP_B_FieldPack_PLA_Basic : B_FieldPack_Base {
    scope = 2;
    displayName = "Field Pack (PLA)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_Carryall_PLA_Basic : B_Carryall_Base {
    scope = 2;
    displayName = "Carryall Backpack (PLA)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {
    };
};
class MNP_B_Carryall_PLA_Basic_D : B_Carryall_Base {
    scope = 2;
    displayName = "Carryall Backpack (PLA Desert)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Carry_CN_D.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_FieldPack_PLA_Basic_D : B_FieldPack_Base {
    scope = 2;
    displayName = "Field Pack (PLA Desert)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\Pack_CN_D.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RU1_CA : B_Carryall_Base {
    scope = 2;
    displayName = "Carryall Backpack (RU1)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU1_CA.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RU2_CA : MNP_B_RU1_CA  {
    displayName = "Carryall Backpack (RU2)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU2_CA.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RUW_CA : MNP_B_RU1_CA {
    displayName = "Carryall Backpack (Winter)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RUW_CA.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RU2_FP : B_FieldPack_Base {
    scope = 2;
    displayName = "Field Pack (RU2)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU2_FP.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RU1_FP : MNP_B_RU2_FP {
    displayName = "Field Pack (RU1)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RU1_FP.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};
class MNP_B_RUW_FP : MNP_B_RU2_FP {
    displayName = "Field Pack (Winter)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\x\mnp_units\addons\mnp_main\data\B_RUW_FP.paa"};
    class TransportMagazines
    {};
    class TransportItems
    {};
};