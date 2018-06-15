#include "Complex.h"

Complex::Complex(double a, double b)
{
	real = a;
	imaginary = b;
}

Complex::Complex(double a)
{
	real = a;
	imaginary = 0;
}

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

double Complex::getRealPart()
{
	return real;
}

double Complex::getImaginaryPart()
{
	return imaginary;
}

void Complex::add(Complex a, Complex b)
{
	real = a.real + b.real;
	imaginary = a.imaginary + b.imaginary;
	cout << "sum = " << real << " + " << imaginary << "i" << endl;
}

void Complex::subtract(Complex a, Complex b)
{
	real = a.real - b.real;
	imaginary = a.imaginary - b.imaginary;
	cout << "difference = " << real << " - " << imaginary << "i" << endl;
}

void Complex::multiply(Complex a, Complex b)
{
	real = (a.real * b.real) - (a.imaginary * b.imaginary);
	imaginary = (a.imaginary * b.real) + (a.real * b.imaginary);
	cout << "product = " << real << " * " << imaginary << "i" << endl;
}

void Complex::divide(Complex a, Complex b)
{
	real = ((a.real * b.real) + (a.imaginary * b.imaginary)) / ((b.real * b.real) + (b.imaginary * b.imaginary));
	imaginary = ((a.imaginary * b.real) - (a.real * b.imaginary)) / ((b.real * b.real) + (b.imaginary * b.imaginary));
	cout << "quotient = " << real << " / " << imaginary << "i" << endl;
}

void Complex::abs(Complex a, Complex b)
{
	real = sqrt((a.real * a.real) + (b.imaginary * b.imaginary));
	cout << "absolute value = " << real << endl;
}
