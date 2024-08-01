class CfgPatches {
    class sfp_ace_compat_repair {
        author = "Swedish Forces Pack";
        addonRootClass = "Swedish_Forces_Pack";
        requiredAddons[] = {"ace_repair", "Swedish_Forces_Pack", "sfp_tgb40"};
        requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
