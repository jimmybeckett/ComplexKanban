#include <iostream>

namespace acp {
	class complex {
		double re, im;
	
		public:
		complex() {this->re = 0.0; this->im = 0.0;}
		complex(double r) {this->re = r; this->im = 0.0;}
		complex(double r, double i) {this->re = r; this->im = i;}

		double get_re() { return re; };
		
		double get_im() { return im; };
	
		complex(const complex& other);
	
		complex& operator=(const complex& other);

		complex operator/(const complex& other) const;

		complex operator/=(const complex& other);
	
		complex operator*(const complex& other) const;
	
		complex& operator*=(const complex& other);
	
		complex operator+(const complex& other) const;
	
		complex operator-(const complex& other) const;
	
		complex& operator-=(const complex& other);
	
		complex& operator+=(const complex& other);

		bool operator==(const complex& other);

		friend std::ostream& operator<<(std::ostream& stream, const complex& complex);
	};
};