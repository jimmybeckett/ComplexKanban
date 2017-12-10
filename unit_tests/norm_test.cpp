#include "../unit_tests.h"

namespace acp {
	void norm_test() {
		std::cout << "Running norm tests..." << std::endl;
		assert(in_range(norm(complex(2, 1)), 5, error));
		assert(in_range(norm(complex(7.664, 8.2)), 125.976896, error));
		assert(in_range(norm(complex(-3.1, -7)), 58.6100000, error));
		std::cout << "Norm tests passed!" << std::endl;
	}
}