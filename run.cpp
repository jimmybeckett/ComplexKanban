#include "unit_tests.h"
#include <vector>

int main(int argc, char** argv) {
	using namespace acp;

	std::vector<void(*)()> test_functions;
	//All test functions
	//test_functions = {log10_test};
	test_functions = { abs_test, arg_test, arithmetic_test, conj_test, cos_test, exp_test, imag_test, log_test, log10_test, norm_test, pow_test, real_test, sin_test, sqrt_test, tan_test };
	for (void(*tf)() : test_functions) {
		tf();
	}
	std::cout << test_functions.size() << " tests run, all tests passed!" << std::endl;


	//Shockey stuff from here down

	//complex x(3, 3), y(4, 4);
	//complex i(1, 1), j(2, 1);
	//complex m(1, 0), n(2, 0);
	//
	//std::cout << "Real n = " << real(n) << ", imag n = " << imag(n) << std::endl;
	//std::cout << "Real j = " << real(j) << ", imag j = " << imag(j) << std::endl;

	//if (x == x) {
	//	std::cout << "(x == x) is correct" << std::endl;
	//}
	//else {
	//	std::cout << "(x == x) is wrong!" << std::endl;
	//}
	//if (x != y) {
	//	std::cout << "(x != y) is correct" << std::endl;
	//}
	//else {
	//	std::cout << "(x != x) is wrong!" << std::endl;
	//}

	//complex z = x + y;
	//	std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;

	//if (y == z - x)
	//	std::cout << "Correct subtraction: " << z << " - " << x << " == " << z - x << std::endl;
	//else
	//	std::cout << "Wrong subtraction: " << z << " - " << x << " == " << z - x << std::endl;

	//z = x * y;
	//std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;

	//if (y == z / x)
	//	std::cout << "Correct division: " << z << "/" << x << " == " << z / x << std::endl;
	//else
	//	std::cout << "Wrong division: " << z << "/" << x << " == " << z / x << std::endl;

	//z = abs(x - y);

	//std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;

	//z = pow(j, 2);

	//std::cout << "i = " << i << ", j = " << j << ", z = " << z << std::endl;

	//if (in_range(z, j * j, error))
	//	std::cout << "Correct pow(): " << z << " pow " << j << std::endl;
	//else
	//	std::cout << "Wrong pow(): " << z << " pow " << (j * j) << std::endl;


	//////
	////// Add additional tests for the specific functions your team completed.
	//////

	return 0;
}