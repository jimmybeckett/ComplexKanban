#include <iostream>
#include "unit_tests.h"

int main(int argc, char** argv) {
	using namespace acp;
	std::vector<void(*)()> functions = { arithmetic_test, sin_test, cos_test, tan_test };
	run_unit_tests(functions);
	return 0;
}