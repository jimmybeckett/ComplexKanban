#include <iostream>
#include "unit_tests.h"

int main(int argc, char** argv) {
	using namespace acp;
	//std::vector<void(*)()> functions = { exp_test, sin_test, tan_test };
	//run_unit_tests(functions);
	run_all_tests();
	return 0;
}