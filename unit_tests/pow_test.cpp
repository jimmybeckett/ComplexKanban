#include "../unit_tests.h"

namespace acp {
	void pow_test() {
		std::cout << "Running pow tests..." << std::endl;
		//complex ^ complex
		assert(in_range(pow(complex(2, 3), complex(4, 5)), complex(-0.7530458, -0.9864287), complex_error));
		assert(in_range(pow(complex(6.825, 5.654), complex(1.234, 2.876)), complex(1.3393532, 1.5110442), complex_error));
		assert(in_range(pow(complex(7, 1.8), complex(-2.8, -2.223)), complex(0.0026122, 0.0063681), complex_error));
		assert(in_range(pow(complex(-3.52, -1.54), complex(-3, 2.987)), complex(57.3053654, -21.4546935), complex_error));
		//complex ^ double
		assert(in_range(pow(complex(-3.524, 3.76), -2.745), complex(0.0110494, -0.0010602), complex_error));
		assert(in_range(pow(complex(5.452, 9.63), 3.456), complex(-3546.0673522, -1968.1914744), complex_error));
		//complex ^ int
		assert(in_range(pow(complex(3, 4), 4), complex(-527, -336), complex_error));
		assert(in_range(pow(complex(8, 7), 2), complex(15, 112), complex_error));
		//double ^ complex
		assert(in_range(pow(2.345, complex(-.02, 3)), complex(-0.8197643, 0.5426504), complex_error));
		std::cout << "Pow tests passed!" << std::endl;
	}
}