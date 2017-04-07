/*
 * vec2d.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include"vec2d.h"

#include<cmath>

vec2d::vec2d(float x, float y):x(x),y(y){
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
}
vec2d::vec2d(const vec2d& source)
{
	x = source.x;
	y = source.y;
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
}
void vec2d::initAL(float angle, float length){
	this->length = length;
	this->angle = angle;
	x = cos(angle) * length;
	y = sin(angle) * length;
}
void vec2d::initXY(float x, float y)
{
	this->x = x;
	this->y = y;
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
}
vec2d operator+(const vec2d& a, const vec2d& b)
{
	return vec2d(a.x + b.x, a.y + b.y);
}

vec2d operator-(const vec2d& a, const vec2d& b) {
	return vec2d(a.x - b.x, a.y - b.y);
}

vec2d operator*(const float scalar, const vec2d& vec_b)
{
	return vec2d(scalar * vec_b.x, scalar * vec_b.y);
}

vec2d operator*(const vec2d& vec_b, const float scalar)
{
	return vec2d(vec_b.x * scalar,vec_b.y * scalar);
}

vec2d& vec2d::operator = (const vec2d& b)
{
	x = b.x;
	y = b.y;
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
	return *this;
}
vec2d& vec2d::operator += (const vec2d& b)
{
	x += b.x;
	y += b.y;
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
	return *this;
}
vec2d& vec2d::operator -= (const vec2d& b)
{
	x -= b.x;
	y -= b.y;
	length = sqrt(x*x + y*y);
	angle = atan2(y,x);
	return *this;
}

float vec2d::getAngle() {
	return atan2(y,x);
}

std::ostream& operator <<(std::ostream& os, const vec2d& m) {
	os<<m.x<<","<<m.y;
	return os;
}
