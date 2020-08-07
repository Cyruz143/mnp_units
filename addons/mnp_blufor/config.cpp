#include "\x\mnp_units\addons\mnp_main\script_component.hpp"

class CfgPatches {
    class mnp_blufor {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {"mnp_main"};
    };
};

#include "CfgFactionClasses.h"
#include "CfgVehicles.h"

class CfgWeapons {
    #include "CfgHeadgear.h"
    #include "CfgUniforms.h"
    #include "CfgVests.h"
};