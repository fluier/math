/*
 * Transform.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include<cmath>

#include "Transform.h"

mat2d theRotationMatrix(const float angle) {
	float cs = cos(angle);
	float sn = sin(angle);
	return mat2d(
			+cs, -sn,
			+sn, +cs);
}

mat4d theTranslationMatrix(const vec3d& p) {
	return mat4d(
			1.0f,0.0f,0.0f,0.0f,
			0.0f,1.0f,0.0f,0.0f,
			0.0f,0.0f,1.0f,0.0f,
			p.x ,p.y ,p.z ,1.0f);
}

mat4d theRotationXMatrix(const float angle) {
	float cs = cos(angle);
	float sn = sin(angle);
	return mat4d(
			1.0f,0.0f,0.0f,0.0f,
			0.0f,  cs, -sn,0.0f,
			0.0f,  sn,  cs,0.0f,
			0.0f,0.0f,0.0f,1.0f);
}

mat4d theRotationYMatrix(const float angle) {
	float cs = cos(angle);
	float sn = sin(angle);
	return mat4d(
			  cs,0.0f, -sn,0.0f,
			0.0f,1.0f,0.0f,0.0f,
			  sn,0.0f,  cs,0.0f,
			0.0f,0.0f,0.0f,1.0f);
}

mat4d theRotationZMatrix(const float angle) {
	float cs = cos(angle);
	float sn = sin(angle);
	return mat4d(
			  cs, -sn,0.0f,0.0f,
			  sn,  cs,0.0f,0.0f,
			0.0f,0.0f,1.0f,0.0f,
			0.0f,0.0f,0.0f,1.0f);
}

mat4d theScalingMatrix(const vec3d& s) {
	return mat4d(
			 s.x,0.0f,0.0f,0.0f,
			0.0f, s.y,0.0f,0.0f,
			0.0f,0.0f, s.z,0.0f,
			0.0f,0.0f,0.0f,1.0f);
}

mat4d theInverseScalingMatrix(const vec3d& s) {
	return mat4d(
			1/s.x,0.0f,0.0f,0.0f,
			0.0f,1/s.y,0.0f,0.0f,
			0.0f,0.0f,1/s.z,0.0f,
			0.0f,0.0f,0.0f,1.0f);
}

vec4d operator *(const mat4d& t, const vec4d& v) {
	float aux1 = t.m11 * v.x + t.m12 * v.y + t.m13 * v.z + t.m14 * v.w;
	float aux2 = t.m21 * v.x + t.m22 * v.y + t.m23 * v.z + t.m24 * v.w;
	float aux3 = t.m31 * v.x + t.m32 * v.y + t.m33 * v.z + t.m34 * v.w;
	float aux4 = t.m41 * v.x + t.m42 * v.y + t.m43 * v.z + t.m44 * v.w;
	return vec4d(aux1, aux2, aux3, aux4);
}
vec2d operator*(const mat2d& t, const vec2d& v){
	return vec2d(t.m11*v.x + t.m12*v.y,t.m21*v.x + t.m22*v.y);
}

point operator*(const mat2d& t, const point& p) {
	return point(t.m11*p.x + t.m12*p.y,t.m21*p.x + t.m22*p.y,
			p.r,p.g,p.b);
}

void operator *=(point& p, const mat2d& t) {
	float x = t.m11*p.x + t.m12*p.y;
	float y = t.m21*p.x + t.m22*p.y;
	p.x = x;
	p.y = y;
}
