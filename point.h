/*
 * point.h
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_POINT_H_
#define SRC_MATH_POINT_H_

#include"vec2d.h"

struct point {
	float x;
	float y;
	float r,g,b;

	point();
	point(float x, float y, float r=1.0f, float g=1.0f, float b=1.0f);
	virtual ~point();
};
point operator+(const point& p, const vec2d& v);
point operator+(const vec2d& v, const point& p);
#endif /* SRC_MATH_POINT_H_ */
