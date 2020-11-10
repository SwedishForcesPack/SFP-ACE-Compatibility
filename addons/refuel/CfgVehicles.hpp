class CfgVehicles
{
    class Car_F;
    class Tank_F;

    class sfp_bv206_base: Car_F {
        ACE_refuel_fuelCapacity = 94;
    };

    class sfp_strf90_base: Tank_F {
        ACE_refuel_fuelCapacity = 462;
    };

    class sfp_strv121_base: Tank_F {
        ACE_refuel_fuelCapacity = 85.59/5;
    };

    class sfp_strv122_base: Tank_F {
        ACE_refuel_fuelCapacity = 85.59/5;
    };

    class sfp_tgb_base: Car_F {
        ACE_refuel_fuelCapacity = 45;
    };

    class sfp_tgb16_rws: Car_F {
        ACE_refuel_fuelCapacity = 94;
    };
};
