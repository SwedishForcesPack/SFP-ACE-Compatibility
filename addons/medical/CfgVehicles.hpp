class CfgVehicles {
	class sfp_hkp16;
    class sfp_hkp16_medevac : sfp_hkp16 {
    	ACE_medical_medicClass = 1;
    };

    class sfp_patgb203;
    class sfp_patgb203_ambulance : sfp_patgb203 {
        ACE_medical_medicClass = 1;
    };

    class sfp_tgb13_ksp58;
    class sfp_tgb1314 : sfp_tgb13_ksp58 {
        ACE_medical_medicClass = 1;
    };
};
