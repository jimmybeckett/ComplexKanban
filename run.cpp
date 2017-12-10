#include <iostream>
#include "unit_tests.h"
#include "complex.h"
#include "other_functions.h"
#include "trig_functions.h"
#include "exp_functions.h"

int main(int argc, char** argv) {
	using namespace acp;
	std::vector<void(*)()> functions = { pow_test };
	run_unit_tests(functions);

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

	//std::cout << "x = " << x << ", y =" << y << ", z =" << z << std::endl;

	///*z = pow(j, 2);

	//std::cout << "i = " << i << ", j = " << j << ", z = " << z << std::endl;

	//if (j * j == z)
	//	std::cout << "Correct pow(): " << z << " pow " << j << std::endl;
	//else
	//	std::cout << "Wrong pow(): " << z << " pow " << j << std::endl;*/


	////
	//// Add additional tests for the specific funtions your team completed.
	////

	return 0;
}