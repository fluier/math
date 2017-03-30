/*
 * mat3d.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include "mat4d.h"

mat4d::mat4d()
:m11(0),m12(0),m13(0),m14(0),
 m21(0),m22(0),m23(0),m24(0),
 m31(0),m32(0),m33(0),m34(0),
 m41(0),m42(0),m43(0),m44(0) {
	// TODO Auto-generated constructor stub

}

mat4d::mat4d(const float x)
:m11(x),m12(0),m13(0),m14(0),
 m21(0),m22(x),m23(0),m24(0),
 m31(0),m32(0),m33(x),m34(0),
 m41(0),m42(0),m43(0),m44(x) {
}

mat4d::mat4d(const mat4d& b)
:m11(b.m11),m12(b.m12),m13(b.m13),m14(b.m14),
 m21(b.m21),m22(b.m22),m23(b.m23),m24(b.m24),
 m31(b.m31),m32(b.m32),m33(b.m33),m34(b.m34),
 m41(b.m41),m42(b.m42),m43(b.m43),m44(b.m44){
}

mat4d::mat4d(float m11, float m12, float m13, float m14,
			 float m21, float m22, float m23, float m24,
			 float m31, float m32, float m33, float m34,
		     float m41, float m42, float m43, float m44)
:m11(m11),m12(m12),m13(m13),m14(m14),
 m21(m21),m22(m22),m23(m23),m24(m24),
 m31(m31),m32(m32),m33(m33),m34(m34),
 m41(m41),m42(m42),m43(m43),m44(m44){
}

mat4d::~mat4d() {
	// TODO Auto-generated destructor stub
}

std::ostream& operator <<(std::ostream& os, const mat4d& m) {
	os<<m.m11<<" "<<m.m12<<" "<<m.m13<<" "<<m.m14<<std::endl
	  <<m.m21<<" "<<m.m22<<" "<<m.m23<<" "<<m.m24<<std::endl
	  <<m.m31<<" "<<m.m32<<" "<<m.m33<<" "<<m.m34<<std::endl
	  <<m.m41<<" "<<m.m42<<" "<<m.m43<<" "<<m.m44<<std::endl;
	return os;
}

mat4d operator +(const mat4d& a, const mat4d& b) {
	return mat4d(
			 a.m11 + b.m11,a.m12 + b.m12,a.m13 + b.m13,a.m14 + b.m14,
			 a.m21 + b.m21,a.m22 + b.m22,a.m23 + b.m23,a.m24 + b.m24,
			 a.m31 + b.m31,a.m32 + b.m32,a.m33 + b.m33,a.m34 + b.m34,
			 a.m41 + b.m41,a.m42 + b.m42,a.m43 + b.m43,a.m44 + b.m44);
}

mat4d operator -(const mat4d& a, const mat4d& b) {
	return mat4d(
		 a.m11 - b.m11,a.m12 - b.m12,a.m13 - b.m13,a.m14 - b.m14,
		 a.m21 - b.m21,a.m22 - b.m22,a.m23 - b.m23,a.m24 - b.m24,
		 a.m31 - b.m31,a.m32 - b.m32,a.m33 - b.m33,a.m34 - b.m34,
		 a.m41 - b.m41,a.m42 - b.m42,a.m43 - b.m43,a.m44 - b.m44);
}
mat4d operator *(const mat4d& a, const mat4d& b) {
	return mat4d(
			a.m11*b.m11 + a.m12*b.m21 + a.m13*b.m31 + a.m14*b.m41,
			a.m11*b.m12 + a.m12*b.m22 + a.m13*b.m32 + a.m14*b.m42,
			a.m11*b.m13 + a.m12*b.m23 + a.m13*b.m33 + a.m14*b.m43,
			a.m11*b.m14 + a.m12*b.m24 + a.m13*b.m34 + a.m14*b.m44,

			a.m21*b.m11 + a.m22*b.m21 + a.m23*b.m31 + a.m24*b.m41,
			a.m21*b.m12 + a.m22*b.m22 + a.m23*b.m32 + a.m24*b.m42,
			a.m21*b.m13 + a.m22*b.m23 + a.m23*b.m33 + a.m24*b.m43,
			a.m21*b.m14 + a.m22*b.m24 + a.m23*b.m34 + a.m24*b.m44,

			a.m31*b.m11 + a.m32*b.m21 + a.m33*b.m31 + a.m34*b.m41,
			a.m31*b.m12 + a.m32*b.m22 + a.m33*b.m32 + a.m34*b.m42,
			a.m31*b.m13 + a.m32*b.m23 + a.m33*b.m33 + a.m34*b.m43,
			a.m31*b.m14 + a.m32*b.m24 + a.m33*b.m34 + a.m34*b.m44,

			a.m41*b.m11 + a.m42*b.m21 + a.m43*b.m31 + a.m44*b.m41,
			a.m41*b.m12 + a.m42*b.m22 + a.m43*b.m32 + a.m44*b.m42,
			a.m41*b.m13 + a.m42*b.m23 + a.m43*b.m33 + a.m44*b.m43,
			a.m41*b.m14 + a.m42*b.m24 + a.m43*b.m34 + a.m44*b.m44);
}

float determinant(const mat4d& m) {
	float rez = 0;

	rez = m.m14 * m.m23 * m.m32 * m.m41 - m.m13 * m.m24 * m.m32 * m.m41-
		m.m14 * m.m22 * m.m33 * m.m41 + m.m12 * m.m24 * m.m33 * m.m41+

		m.m13 * m.m22 * m.m34 * m.m41 - m.m12 * m.m23 * m.m34 * m.m41-
		m.m14 * m.m23 * m.m31 * m.m42 + m.m13 * m.m24 * m.m31 * m.m42+
		m.m14 * m.m21 * m.m33 * m.m42 - m.m11 * m.m24 * m.m33 * m.m42-
		m.m13 * m.m21 * m.m34 * m.m42 + m.m11 * m.m23 * m.m34 * m.m42+
		m.m14 * m.m22 * m.m31 * m.m43 - m.m12 * m.m24 * m.m31 * m.m43-
		m.m14 * m.m21 * m.m32 * m.m43 + m.m11 * m.m24 * m.m32 * m.m43+
		m.m12 * m.m21 * m.m34 * m.m43 - m.m11 * m.m22 * m.m34 * m.m43-
		m.m13 * m.m22 * m.m31 * m.m44 + m.m12 * m.m23 * m.m31 * m.m44+
		m.m13 * m.m21 * m.m32 * m.m44 - m.m11 * m.m23 * m.m32 * m.m44-
		m.m12 * m.m21 * m.m33 * m.m44 + m.m11 * m.m22 * m.m33 * m.m44;

	return rez;
}
