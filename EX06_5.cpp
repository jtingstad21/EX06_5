// EX06_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
	Complex a1, a2, result;
	double a1_real, a2_real;
	cout << "enter complex number: " << endl;
	cin >> a1.getRealPart >> a1.getImaginaryPart;
	cout << "enter another complex number: " << endl;
	cin >> a2.getRealPart >> a2.getImaginaryPart;

	result.add(a1, a2);
	result.subtract(a1, a2);
	result.multiply(a1, a2);
	result.divide(a1, a2);
	result.abs(a1, a2);

    return 0;
}

