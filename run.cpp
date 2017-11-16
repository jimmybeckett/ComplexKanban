#include <iostream>
#include <cassert>
#include "complex.h"

int main(int argc, char** argv) {
	acp::complex c(5, -2);
	std::cout << "Here's a number: " << c << std::endl;

	std::cout << "Running unit tests..." << std::endl;
	assert(acp::complex(5, 2) + acp::complex(2, -5) == acp::complex(7, -3));
	assert(acp::complex(3, 2) - acp::complex(1, 1) == acp::complex(2, 1));
	assert(acp::complex(3, 2) * acp::complex(1, 4) == acp::complex(-5, 14));
	std::cout << "Passed!" << std::endl;
	return 0;
}