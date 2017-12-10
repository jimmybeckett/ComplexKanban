#include "../unit_tests.h"

namespace acp {
	void arg_test() {
		std::cout << "Running arg tests..." << std::endl;
		assert(in_range(arg(complex(5, -3)), -0.5404195, error));
		assert(in_range(arg(complex(2.2, -1.879)), -0.7068642, error));
		assert(in_range(arg(complex(0, 0)), 0, error));
		assert(in_range(arg(complex(5, 0)), 0, error));
		assert(in_range(arg(complex(0, 5)), 1.5707963, error));
		assert(in_range(arg(complex(9, 4)), 0.4182243, error));
		assert(in_range(arg(complex(-7.2, -18.774)), -1.9370060, error));
		std::cout << "Arg tests passed!" << std::endl;
	}
}

