#include "../unit_tests.h"

namespace acp {
	void arithmetic_test() {
		std::cout << "Running arithmetic tests..." << std::endl;
		//addition
		std::cout << "Running addition tests..." << std::endl;
		assert(complex(5, 2) + complex(2, -5) == complex(7, -3));
		assert(complex(5.5647, 0) + complex(7, -1) == complex(12.5647, -1));
		assert(complex(0, 0) + acp::complex(0, 0) == complex(0, 0));
		std::cout << "Addition tests passed!" << std::endl;
		//subtraction
		std::cout << "Running subtraction tests..." << std::endl;
		assert(complex(3, 2) - complex(1, 1) == complex(2, 1));
		assert(complex(3.98765, 2.1) - complex(7.989, 1) == complex(-4.00135, 1.1));
		assert(complex(0, 0) - complex(0, 0) == complex(0, 0));
		std::cout << "Subtraction tests passed!" << std::endl;
		//multiplication
		std::cout << "Running multiplication tests..." << std::endl;
		assert(complex(-3, 2) * complex(1, 4) == complex(-11, -10));
		assert(complex(-3, 2) * complex(1, 4) == complex(-11, -10));
		assert(complex(0, 0) * complex(0, 0) == complex(0, 0));
		std::cout << "Multiplication tests passed!" << std::endl;
		//division
		std::cout << "Running division tests..." << std::endl;
		assert(in_range(complex(-7, 2) / complex(-9, 5), complex(0.6886792, 0.1603773), complex_error));
		std::cout << "Division tests passed!" << std::endl;
		std::cout << "Arithmetic tests passed!" << std::endl;
	}
}