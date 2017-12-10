#include "../unit_tests.h"
#include "../other_functions.h"

namespace acp {
	bool in_range(const complex a, const complex b, const complex error) {
		return abs(a - b) < abs(error);
	}
}

namespace acp {
	bool in_range(const double a, const double b, const double error) {
		return std::abs(a - b) < error;
	}
}


