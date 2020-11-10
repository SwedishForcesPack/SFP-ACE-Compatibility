class CfgVehicles {
    class Car_F;
    class Helicopter_Base_H;

    class sfp_hkp4_base : Helicopter_Base_H {
        ACE_cargo_hasCargo = 1;
        ACE_cargo_space = 20;
    };

    class sfp_hkp16_base : Helicopter_Base_H {
        ACE_cargo_hasCargo = 1;
        ACE_cargo_space = 8;
    };

    class sfp_patgb203: Car_F {
        ACE_cargo_hasCargo = 1;
        ACE_cargo_space = 4;
    };

    class sfp_tgb_base: Car_F {
        ACE_cargo_hasCargo = 1;
        ACE_cargo_space = 4;
    };

    class sfp_tgb13_ksp58 : sfp_tgb_base {
        ACE_cargo_space = 8;
    };

    class sfp_tgb13 : sfp_tgb13_ksp58 {
    };

    class sfp_tgb20_ksp58 : sfp_tgb13 {
        ACE_cargo_space = 16;
    };
};
