#include "../../unit_tests.h"

namespace acp {
	void conj_test() {
		std::cout << "Running conj tests..." << std::endl;
		assert(conj(complex(5, 4)) == complex(5, -4));
		assert(conj(complex(1, -1)) == complex(1, 1));
		assert(conj(complex(2.765, -76.567)) == complex(2.765, 76.567));
		std::cout << "Conj test passed!" << std::endl;
	}
}
