#include "..\unit_tests.h"

namespace acp {
	void imag_test() {
		std::cout << "Running imag tests..." << std::endl;
		assert(imag(complex(6, 1)) == 1);
		assert(imag(complex(-5, -3)) == -3);
		assert(imag(complex(.3, 2.874)) == 2.874);
		std::cout << "Imag tests passed!" << std::endl;
	}
}