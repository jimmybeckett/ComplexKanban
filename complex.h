#ifndef COMPLEX_HEADER
#define COMPLEX_HEADER
#include <iostream>

namespace acp {
	class complex {
		double re, im;
	
		public:
		complex() {this->re = 0.0; this->im = 0.0;}
		complex(double r, double i=0.0) {this->re = r; this->im = i;}

		double get_re() const { return re; };
		
		double get_im() const { return im; };

		void set_re(double re) { this->re = re; };

		void set_im(double im) { this->im = im; };
	
		complex& operator=(const complex& other);

		complex operator/(const complex& other) const;

		void operator/=(const complex& other);
	
		complex operator*(const complex& other) const;
	
		void operator*=(const complex& other);
	
		complex operator+(const complex& other) const;
	
		complex operator-(const complex& other) const;

		complex operator-() const;
	
		void operator-=(const complex& other);
	
		void operator+=(const complex& other);

		bool operator==(const complex& other);

		bool operator!=(const complex& other);

		friend std::ostream& operator<<(std::ostream& stream, const complex& complex);

		friend std::istream& operator>>(std::istream& stream, acp::complex& complex);
	};
}

#endif