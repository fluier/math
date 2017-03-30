/*
 * plane4d.h
 *
 *  Created on: Mar 30, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_PLANE4D_H_
#define SRC_MATH_PLANE4D_H_

#include"vec4d.h"

struct plane4d {
	vec4d normal;
	vec4d point;

	plane4d(vec4d normal,vec4d point);
};
float inPlane(const plane4d& plane,const vec4d& p0);

#endif /* SRC_MATH_PLANE4D_H_ */
