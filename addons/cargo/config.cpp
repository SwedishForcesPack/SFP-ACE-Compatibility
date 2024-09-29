class CfgPatches {
    class sfp_ace_compat_cargo {
        author = "Swedish Forces Pack";
        addonRootClass = "Swedish_Forces_Pack";
        requiredAddons[] = {"ace_cargo", "Swedish_Forces_Pack", "sfp_hkp4", "sfp_hkp16", "sfp_patgb203", "sfp_tgb11"};
        requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
