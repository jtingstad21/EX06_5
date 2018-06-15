#pragma once

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex(double a, double  b);
	Complex(double a);
	Complex();

	double getRealPart();
	double getImaginaryPart();

	void add(Complex a, Complex b);
	void subtract(Complex a, Complex b);
	void multiply(Complex a, Complex b);
	void divide(Complex a, Complex b);
	void abs(Complex a, Complex b);

	bool operator+(Complex& a);
	bool operator-(Complex& a);
	bool operator*(Complex& a);
	bool operator/(Complex& a);
	bool operator+=(Complex& a);
	bool operator-=(Complex& a);
	bool operator*=(Complex& a);
	bool operator/=(Complex& a);
	bool operator[](Complex& a);
	bool operator+();
	bool operator-();
	
};

#endif