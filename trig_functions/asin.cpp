#include "../trig_functions.h"
#include "../exp_functions.h"

namespace acp {
	complex asin(const complex c) {
		complex temp = log(complex(-c.get_im(), c.get_re()) + sqrt(complex(1, 0) - c * c));
		double im = temp.get_im();
		temp.set_im(-temp.get_re());
		temp.set_re(im);
		return temp;
	}
}