#pragma once
#include <cmath>
#include <iostream>


using namespace std;
class Complex
{
public:
	double Re, Im;
	double re = 0;
	double im = 0;
	Complex(double re = 0, double im = 0) {
		Re = re;
		Im = im;
		
	}
	
	Complex operator +(const Complex& c)const {
		return Complex(Re + c.Re, Im + c.Im);
	}
	
	Complex operator -(const Complex& c)const {
		return Complex(Re - c.Re, Im - c.Im);
	}

	Complex operator *(const Complex& c)const {
		double r = (Re * c.Re) + (Im * c.Im) * (-1);
		double i = (Im * c.Re) + (Re * c.Im);
		return Complex(r, i);
	}

	Complex operator /(const Complex& c)const {
		double r = ((Re * c.Re) + (Im * c.Im))/(c.Re*c.Re + c.Im * c.Im);
		double i = (Im * c.Re - Re * c.Im)/(c.Re* c.Re + c.Im* c.Im);
		return Complex(r, i);
	}

	Complex Conjurate() {
		return Complex(Re, -Im);
	}

	double Mod() {
		return sqrt(Re*Re + Im*Im);
	}

	double Arg() {
		if (Re == 0) {
			if (Im >= 0) {
				return (acos(0));
			}
			else {
				return(-acos(0));
			}
		}
		if (Re > 0) {
			return (atan(Im/Re));
		}
		if (Re < 0) {
			if (Im >= 0) {
				return (acos(-1) + atan(Im / Re));
			}
			else {
				return(-acos(-1) - atan(Im / Re));
			}
		}
	}
};

inline ostream& operator << (ostream &o, const Complex &c) {
	return o << '(' << c.Re << ", " << c.Im << ')';
};

