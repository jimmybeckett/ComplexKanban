#include "../trig_functions.h"
#include "../exp_functions.h"

namespace acp {
	complex acos(const complex c) {
		complex temp = log(c + sqrt(complex(1, 0) - c * c) * complex(0, 1));
		double im = temp.get_im();
		temp.set_im(-temp.get_re());
		temp.set_re(im);
		return temp;
	}
}