/*
 * Complex.cpp
 *
 *  Created on: Feb 7, 2017
 *      Author: constantin
 */

#include"Complex.h"

#include<cmath>

Complex::Complex(float real, float imag):real(real),imag(imag)
{

}
void Complex::init(float ra, float phi)
{
	if(ra > 0)
	{
		real = ra * cos(phi);
		imag = ra * sin(phi);
	}else
	{
		real = cos(phi);
		imag = sin(phi);
	}
}

std::ostream& operator <<(std::ostream& os, const Complex& c) {
	os<<c.real<<","<<c.imag;
	return os;
}
