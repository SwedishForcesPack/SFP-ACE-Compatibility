class CfgAmmo {
    class ClaymoreDirectionalMine_Remote_Ammo;
    class MineBase;
    class PipeBombBase;

    class sfp_sprdeg46_ammo: PipeBombBase {
        ACE_Explosives_magazine = "sfp_sprdeg46_mag";
        ACE_Explosives_size = 0;
        soundActivation[] = {"", 0, 0, 0};
        soundDeactivation[] = {"", 0, 0, 0};
        triggerWhenDestroyed = 1;
    };

    class sfp_strvm5_ammo: MineBase {
        ACE_Explosives_magazine = "sfp_strvm5_mag";
        ACE_Explosives_size = 0;
    };

    class sfp_strvm6_ammo : sfp_strvm5_ammo {
        ACE_Explosives_magazine = "sfp_strvm6_mag";
    };

    class sfp_frdnmina13_ammo : ClaymoreDirectionalMine_Remote_Ammo {
        ACE_Explosives_magazine = "sfp_frdnmina13_mag";
    };
};
