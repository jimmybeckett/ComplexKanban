#include "../unit_tests.h"

namespace acp {
	void tanh_test() {
		std::cout << "Running tanh tests..." << std::endl;
		assert(in_range(tanh(complex(2, 3)), complex(0.9653858, -0.0098843), complex_error));
		assert(in_range(tanh(complex(-3.6, -2.121)), complex(-1.0006760, 0.0013319), complex_error));
		std::cout << "Tanh tests passed!" << std::endl;
	}
}