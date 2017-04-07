/*
 * mat2d.h
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_MAT2D_H_
#define SRC_MATH_MAT2D_H_
#include<iostream>
struct mat2d {
	union{
		struct{
			float m11, m12;
			float m21, m22;
		};
		float m[2][2];
	};
	mat2d();
	mat2d(const float x);
	mat2d(const mat2d& b);
	mat2d(float m11 = 0.0f,float m12 = 0.0f,
		  float m21 = 0.0f,float m22 = 0.0f);
	virtual ~mat2d();

};
std::ostream& operator<<(std::ostream& os, const mat2d& m);
mat2d operator+(const mat2d& a, const mat2d& b);
mat2d operator-(const mat2d& a, const mat2d& b);
mat2d operator*(const mat2d& a, const mat2d& b);
float determinant(const mat2d& m);

#endif /* SRC_MATH_MAT2D_H_ */
