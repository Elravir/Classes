// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "complex.h"
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	Complex c;
	Complex a(2, 3), b(3, 4);

	
	cout << c << endl;
	cout << a << ", " << b << endl;
	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a * b << endl;
	cout << "a/b = " << a / b << endl;
	cout << "Conjurate = " << a.Conjurate() << endl;
	cout << "Sqrt = " << a.Mod() << endl;
	cout << "Arg = " << a.Arg() << endl;


	Complex v[4]{ 1,2,Complex(2,3) };

	for (int i = 0; i < 4; i++) {
		cout << v[i] << ", ";
	}
	cout << endl;

	Complex* pc = new Complex(1);
	Complex* pc1 = new Complex();
	Complex* pc2 = new Complex(1, 2);
	cout << (* pc).Re << endl;
	cout << *pc1 << endl;
	cout << (*pc2).Im << endl;
	delete pc, pc1, pc2;

	Complex* mass = new Complex[3]{Complex(2,4), Complex(1,5), Complex(7,8)};
	cout << mass[1].Re << endl;
	delete [] mass;
	char k;
	cin >> k;
    return 0;
	
}

