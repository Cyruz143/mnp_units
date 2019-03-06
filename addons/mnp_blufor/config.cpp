#include "script_component.hpp"

class CfgPatches {
    class MNP_BLUFOR_Config {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.90;
        requiredAddons[] = {
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_OPFOR",
            "A3_Characters_F_Common",
            "A3_Characters_F"
        };
    };
};

#include "CfgFactionClasses.h"
#include "CfgVehicles.h"