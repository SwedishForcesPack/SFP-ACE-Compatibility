class CfgPatches {
    class sfp_ace_compat_wardrobe {
        author = "Swedish Forces Pack";
        addonRootClass = "Swedish_Forces_Pack";
        requiredAddons[] = {"ace_wardrobe", "Swedish_Forces_Pack"};
        requiredVersion = 0.1;
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
    };
};

#include "ace_wardrobe.hpp"
