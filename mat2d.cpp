/*
 * mat2d.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 */

#include "mat2d.h"

mat2d::mat2d(
		float m11, float m12,
		float m21, float m22):
m11(m11),m12(m12),
m21(m21),m22(m22){
	// TODO Auto-generated constructor stub

}

mat2d::~mat2d() {
	// TODO Auto-generated destructor stub
}

mat2d::mat2d(const float x):
		m11(x),m12(0),
		m21(0),m22(x){
}

mat2d::mat2d(const mat2d& b):
		m11(b.m11),m12(b.m12),
		m21(b.m21),m22(b.m22){
}

std::ostream& operator <<(std::ostream& os, const mat2d& m) {
	os<<m.m11<<" "<<m.m12<<std::endl
	  <<m.m21<<" "<<m.m22<<std::endl;
	return os;
}

mat2d operator +(const mat2d& a, const mat2d& b) {
	return mat2d(
			a.m11 + b.m11, a.m12 + b.m12,
			a.m21 + b.m21, a.m22 + b.m22);
}

mat2d operator -(const mat2d& a, const mat2d& b) {
	return mat2d(
			a.m11 - b.m11, a.m12 - b.m12,
			a.m21 - b.m21, a.m22 - b.m22);
}

mat2d operator *(const mat2d& a, const mat2d& b) {
	return mat2d(
			a.m11*b.m11 + a.m12*b.m21, a.m11*b.m12+a.m12*b.m22,
			a.m21*b.m11 + a.m22*b.m21, a.m21*b.m12+a.m22*b.m22
	);
}

float determinant(const mat2d& m) {
	return (m.m11 * m.m22) - (m.m21 * m.m12);
}
