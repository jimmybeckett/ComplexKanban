#include <iostream>
#include "complex.h"

int main(int argc, char** argv) {
	acp::complex c(5, -2);
	std::cout << "Here's a number: " << c << std::endl;
	return 0;
}