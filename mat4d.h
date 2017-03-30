/*
 * mat3d.h
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_MAT4D_H_
#define SRC_MATH_MAT4D_H_
#include<iostream>
struct mat4d{
	union{
		struct{
			float m11, m12, m13, m14;
			float m21, m22, m23, m24;
			float m31, m32, m33, m34;
			float m41, m42, m43, m44;
		};
		float m[4][4];
	};

	mat4d();
	mat4d(const float x);
	mat4d(const mat4d& b);
	mat4d(	float m11,float m12,float m13,float m14,
			float m21,float m22,float m23,float m24,
			float m31,float m32,float m33,float m34,
			float m41,float m42,float m43,float m44);
	virtual ~mat4d();

};
std::ostream& operator<<(std::ostream& os, const mat4d& m);
mat4d operator+(const mat4d& a, const mat4d& b);
mat4d operator-(const mat4d& a, const mat4d& b);
mat4d operator*(const mat4d& a, const mat4d& b);
float determinant(const mat4d& m);

#endif /* SRC_MATH_MAT4D_H_ */
