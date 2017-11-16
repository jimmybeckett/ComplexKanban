class complex {
	double re, im;

	public:
	complex() {this->re = 0.0; this->im = 0.0;}
	complex(double r) {this->re = r; this->im = 0.0;}
	complex(double r, double i) {this->re = r; this->im = i;}

	complex(const complex& other) {
		this->im = other.im;
		this->re = other.re;
	}

	complex& operator=(const complex& other) {
		this->re = other.re;
		this->im = other.im;
		return *this;
	}

	complex operator*(const complex& other) const {
		complex result;
		result.re = this->re * other.re - this->im * other.im;
		result.im = this->re * other.im + this->im * other.re;
		return result;
	}

	complex& operator*=(const complex& other) {
		*this = *this * other;
		return *this;
	}

	complex operator+(const complex& other) const {
		complex result;
		result.re = this->re + other.re;
		result.im = this->re + other.im;
		return result;
	}

	complex operator-(const complex& other) const {
		complex result;
		result.re = this->re - other.re;
		result.im = this->re - other.im;
		return result;
	}

	complex& operator-=(const complex& other) {
		*this = *this - other;
		return *this;
	}

	complex& operator+=(const complex& other) {
		*this = *this + other;
		return *this;
	}
};