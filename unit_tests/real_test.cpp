#include "../unit_tests.h"

namespace acp {
	void real_test() {
		std::cout << "Running real tests..." << std::endl;
		assert(real(complex(6, 1)) == 6);
		assert(real(complex(-5, -3)) == -5);
		assert(real(complex(.3, 2.874)) == .3);
		std::cout << "Real tests passed!" << std::endl;
	}
}
