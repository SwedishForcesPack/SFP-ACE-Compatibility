class ace_wardrobe {
    class ace_wardrobe_base_U_sleeves_down;
    class ace_wardrobe_base_U_sleeves_up;

    class sfp_m90d_uniform_long_m08: ace_wardrobe_base_U_sleeves_down {
        class modifiableTo {
            class sfp_m90d_uniform_folded {};
        };
    };

    class sfp_m90d_uniform_folded: ace_wardrobe_base_U_sleeves_up {
        class modifiableTo {
            class sfp_m90d_uniform_long_m08 {};
        };
    };

    class sfp_m90w_uniform_long_m08: ace_wardrobe_base_U_sleeves_down {
        class modifiableTo {
            class sfp_m90w_uniform_folded {};
        };
    };

    class sfp_m90w_uniform_folded: ace_wardrobe_base_U_sleeves_up {
        class modifiableTo {
            class sfp_m90w_uniform_long_m08 {};
        };
    };
};
