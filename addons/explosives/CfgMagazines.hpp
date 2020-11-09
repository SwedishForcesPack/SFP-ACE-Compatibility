class CfgMagazines {
    class CA_Magazine;

    class sfp_sprdeg46_mag : CA_Magazine {
        ACE_Explosives_DelayTime = 1;
        ACE_Explosives_Placeable = 1;
        ACE_Explosives_SetupObject = "sfp_ace_sprdeg46";
        useAction = 0;
        
        class ACE_Triggers {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};
            class Timer {
                FuseTime = 0.5;
            };
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class sfp_strvm5_mag: CA_Magazine {
        ACE_Explosives_DelayTime = 2.5;
        ACE_Explosives_Placeable = 1;
        ACE_Explosives_SetupObject = "sfp_ace_strvm5";
        useAction = 0;
        
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0.06;
            };
        };
    };

    class sfp_strvm6_mag : sfp_strvm5_mag {
        ACE_Explosives_SetupObject = "sfp_ace_strvm6";
    };

    class sfp_frdnmina13_mag : sfp_strvm6_mag {
        ACE_Explosives_SetupObject = "sfp_ace_frdnmina13";

        class ACE_Triggers {
            SupportedTriggers[] = {"Command", "MK16_Transmitter"};
            class Command {
                FuseTime = 0.5;
            };
            class MK16_Transmitter: Command {};
        };
    };
};
