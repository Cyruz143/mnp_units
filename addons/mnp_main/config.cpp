class CfgPatches {
    class mnp_main {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.02;
        requiredAddons[] = {
            "ark_main",
            "CUP_Weapons_LoadOrder",
            "hlcweapons_AUG",
            "hlcweapons_g3"
        };
    };
    // Dummy classes for old names
    class MNP_BLUFOR_CONFIG {
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
    };
    class MNP_INDE_Config : MNP_BLUFOR_CONFIG {};
    class MNP_OPFOR_CONFIG : MNP_BLUFOR_CONFIG {};
};

#include "script_component.hpp"
#include "CfgFactionClasses.h"

class CfgVehicles {
    #include "CfgBackpacks.h"
    #include "CfgPlaceholder.h"
};