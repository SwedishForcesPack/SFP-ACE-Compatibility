class CfgPatches {
    class sfp_ace_compat_medical {
        author = "Swedish Forces Pack";
        addonRootClass = "Swedish_Forces_Pack";
        requiredAddons[] = {"ace_grenades", "Swedish_Forces_Pack", "sfp_weapons_grenades"};
        requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgAmmo.hpp"
