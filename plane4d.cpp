/*
 * plane4d.cpp
 *
 *  Created on: Mar 30, 2017
 *      Author: constantin
 */

#include "plane4d.h"

plane4d::plane4d(vec4d normal,vec4d point):normal(normal),point(point){

}

float inPlane(const plane4d& plane, const vec4d& p0) {
	return dotProd(plane.normal,(p0 - plane.point));
}
