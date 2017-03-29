/*
 * vec4d.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include "vec4d.h"

vec4d::vec4d():x(0),y(0),z(0),k(0) {
}

vec4d::vec4d(const float x):x(x),y(x),z(x),k(x)  {
}

vec4d::vec4d(const vec4d& b):x(b.x),y(b.y),z(b.z),k(b.k)  {
}

vec4d::vec4d(float x, float y, float z, float k):x(x),y(y),z(z),k(k) {
}

vec4d::~vec4d() {
	// TODO Auto-generated destructor stub
}

std::ostream& operator <<(std::ostream& os, const vec4d& v) {
	os<<v.x<<","<<v.y<<","<<v.z<<","<<v.k;
	return os;
}

vec4d operator +(const vec4d& a, const vec4d& b) {
	return vec4d(a.x+b.x,a.y+b.y,a.z+b.z,a.k+b.k);
}

vec4d operator -(const vec4d& a, const vec4d& b) {
	return vec4d(a.x-b.x,a.y-b.y,a.z-b.z,a.k-b.k);
}
