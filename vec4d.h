/*
 * vec4d.h
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_VEC4D_H_
#define SRC_MATH_VEC4D_H_

#include<iostream>

struct vec4d {
	union{
		struct{
			float x, y, z, k;
		};
	};
public:

	vec4d();
	vec4d(const float x);
	vec4d(const vec4d& b);
	vec4d(	float m11,float m12,float m13,float m14);
	virtual ~vec4d();
};
std::ostream& operator<<(std::ostream& os, const vec4d& m);
vec4d operator+(const vec4d& a, const vec4d& b);
vec4d operator-(const vec4d& a, const vec4d& b);
#endif /* SRC_MATH_VEC4D_H_ */
