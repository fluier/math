/*
 * vec2d.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include"vec2d.h"


inline vec2d operator+(const vec2d& vec_a, const vec2d& vec_b)
{
	return vec2d(vec_a.x + vec_b.x, vec_a.y + vec_b.y);
}

inline vec2d operator*(const float scalar, const vec2d& vec_b)
{
	return vec2d(scalar * vec_b.x, scalar * vec_b.y);
}

inline vec2d operator*(const vec2d& vec_b, const float scalar)
{
	return vec2d(vec_b.x * scalar,vec_b.y * scalar);
}

vec2d::vec2d(const vec2d& source)
{
	x = source.x;
	y = source.y;
}
vec2d& vec2d::operator = (const vec2d& b)
{
	x = b.x;
	y = b.y;
	return *this;
}
vec2d& vec2d::operator += (const vec2d& b)
{
	x += b.x;
	y += b.y;
	return *this;
}
vec2d& vec2d::operator -= (const vec2d& b)
{
	x -= b.x;
	y -= b.y;
	return *this;
}

