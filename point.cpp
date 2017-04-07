/*
 * point.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 */

#include "point.h"

point::point():
x(0),y(0),r(0),g(0),b(0) {
	// TODO Auto-generated constructor stub

}

point::point(float x, float y, float r, float g, float b):
	x(x),y(y),r(r),g(g),b(b){
}

point::~point() {
	// TODO Auto-generated destructor stub
}

point operator +(const point& p, const vec2d& v) {
	return point(p.x + v.x, p.y + v.y,p.r,p.g,p.b);
}

point operator +(const vec2d& v, const point& p) {
	return p + v;
}
