#include "../unit_tests.h"

namespace acp {
	bool in_range(const complex a, const complex b, const complex error) {
		return (a - b) < error && (a - b) > error * -1;
	}

	bool in_range(const double a, const double b, const double error) {
		return (a - b) < error && (a - b) > error * -1;
	}
}


