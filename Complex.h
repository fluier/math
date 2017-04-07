/*
 * Complex.h
 *
 *  Created on: Jan 28, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_COMPLEX_H_
#define SRC_MATH_COMPLEX_H_
#include<iostream>
struct Complex
{
	float real;
	float imag;

	Complex(float real = 0, float imag = 0);
	void init(float ra, float phi = 0);
};

inline Complex operator+(const Complex& a, const Complex& b)
{
	return Complex(a.real + b.real,a.imag + b.imag);
}
inline Complex operator+(const float& a, const Complex& b)
{
	return Complex(a+ b.real, b.imag);
}
inline Complex operator+(const Complex& a, const float& b)
{
	return Complex(a.real + b,a.imag);
}
inline Complex operator-(const Complex& a, const Complex& b)
{
	return Complex(a.real - b.real,a.imag - b.imag);
}
inline Complex operator-(const float a, const Complex & b)
{
	return Complex(a - b.real, b.imag);
}

inline Complex operator-(const Complex & a, const float b)
{
	return Complex(a.real - b, a.imag);
}
inline Complex operator*(const Complex & a, const Complex & b)
{
	float ac = a.real * b.real;
	float bd = a.imag* b.imag;
	return Complex(
		ac-bd,
		(a.real + a.imag)*(b.real + b.imag) - ac - bd);
}
inline Complex operator/(const Complex & a, const Complex & b)
{
	float ac = a.real * b.real;
	float bd = a.imag * b.imag;

	float bc = a.imag * b.real;
	float ad = a.real * b.imag;

	float cc = b.real * b.real;
	float dd = b.imag * b.imag;

	return Complex((ac + bd)/(cc + dd), (bc - ad) / (cc + dd));
}
inline Complex operator/(const float a, const Complex& b)
{
	float ac = a * b.real;

	float ad = a * b.imag;

	float cc = b.real * b.real;
	float dd = b.imag * b.imag;

	return Complex((ac)/(cc + dd), (-ad) / (cc + dd));
}
std::ostream& operator<<(std::ostream& os, const Complex& c);
#endif /* SRC_MATH_COMPLEX_H_ */
