
#include "../../multirotor.h"

namespace backprop_tools::rl::environments::multirotor::parameters::dynamics{
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_old = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            7.7e-6,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            7.7e-6,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            1.1935e-5
                    }
            },
            // J_inv
            {
                    {
                            1.2987e5,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            1.2987e5,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            5.16796e5
                    }
            },
            // T, RPM time constant
            0.15,
            // action limit
            {0, 21702},
    };
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_old_reduced_inertia = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
//            0.025126582278481014,
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            3.85e-6,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            3.85e-6,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            5.9675e-6
                    }
            },
            // J_inv
            {
                    {
                            259740.2597402597,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            259740.2597402597,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            167574.36112274823

                    }
            },
            // T, RPM time constant
            0.15,
            // action limit
            {0, 21702},
    };
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_low_inertia = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
//            0.025126582278481014,
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            7.7e-6,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            7.7e-6,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            1.1935e-5
                    }
            },
            // J_inv
            {
                    {
                            1.2987e5,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            1.2987e5,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            83787.2
                    }
            },
            // action limit
            0.01, // T, RPM time constant
            {0, 21702.1},
    };
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_medium_inertia = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
//            0.025126582278481014,
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            1.6e-5,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            1.6e-5,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            2.9e-5
                    }
            },
            // J_inv
            {
                    {
                            62500.0,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            62500.0,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            34482.8
                    }
            },
            // action limit
            0.03, // T, RPM time constant
            {0, 21702.1},
    };
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_high_inertia = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
//            0.025126582278481014,
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            7.7e-5,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            7.7e-5,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            1.1935e-4
                    }
            },
            // J_inv
            {
                    {
                            1.2987e4,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            1.2987e4,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            8378.72
                    }
            },
            // action limit
            0.01, // T, RPM time constant
            {0, 21702.1},
    };
    template<typename T, typename TI, typename REWARD_FUNCTION>
    constexpr typename ParametersBase <T, TI, TI(4), REWARD_FUNCTION>::Dynamics crazy_flie_very_high_inertia = {
            // Rotor positions
            {
                    {
                            0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            -0.028,
                            0

                    },
                    {
                            -0.028,
                            0.028,
                            0

                    },
                    {
                            0.028,
                            0.028,
                            0

                    },
            },
            // Rotor thrust directions
            {
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
                    {0, 0, 1},
            },
            // Rotor torque directions
            {
                    {0, 0, -1},
                    {0, 0, +1},
                    {0, 0, -1},
                    {0, 0, +1},
            },
            // thrust constants
            {
                    0,
                    0,
                    3.16e-10
            },
            // torque constant
//            0.025126582278481014,
            0.005964552,
            // mass vehicle
            0.027,
            // gravity
            {0, 0, -9.81},
            // J
            {
                    {
                            3.85e-4,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            3.85e-4,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            5.95e-4
                    }
            },
            // J_inv
            {
                    {
                            2597,
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            2597,
                            0.0000000000000000000000000000000000000000
                    },
                    {
                            0.0000000000000000000000000000000000000000,
                            0.0000000000000000000000000000000000000000,
                            1680
                    }
            },
            // action limit
            0.01, // T, RPM time constant
            {0, 21702.1},
    };

}
