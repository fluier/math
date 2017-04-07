/*
 * d1eq.cpp
 *
 *  Created on: Apr 4, 2017
 *      Author: constantin
 */

#include "d1eq.h"

d1eq::d1eq(float a, float b, float c):_a(a),_b(b),_c(c) {

}

d1eq::~d1eq() {
	// TODO Auto-generated destructor stub
}

bool d1eq::belong(float x, float y) {
	const float thresh = 0.000001;
	float aux = _a*x + _b*y - _c;
	if(-thresh < aux || aux < thresh){
		return true;
	}
	return false;
}

float d1eq::fdx(float x) {
	return (_c - _a * x)/_b;
}
