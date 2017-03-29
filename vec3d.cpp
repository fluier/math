/*
 * vec3d.cpp
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#include<cmath>

#include"vec3d.h"

vec3d::vec3d(const vec3d& source)
{
	x = source.x;
	y = source.y;
	z = source.z;
}
vec3d& vec3d::operator=(const vec3d& b)
{
	x = b.x;
	y = b.y;
	z = b.z;
	return *this;
}
vec3d& vec3d::operator+=(const vec3d& b)
{
	x += b.x;
	y += b.y;
	z += b.z;
	return *this;
}
vec3d& vec3d::operator-=(const vec3d& b)
{
	x -= b.x;
	y -= b.y;
	z -= b.z;
	return *this;
}
/*
 * dot product
 * if u * v = 0, then u perpendicular v
 * if u * v > 0, angle between vectors is less than 90 degrees
 * if u * v < 0, angle between vectors is greater than 90 degrees
 */
float vec3d::dot(const vec3d& b)const
{
	return ((x*b.x) + (y*b.y) + (z*b.z));
}
float vec3d::magnitude() const
{
	return sqrt(magnitudeSquared());
}
float vec3d::magnitudeSquared() const
{
	return this->dot(*this);
}
/*
 *Normalizing the Vector
 *return the normal vector without changing the initial vector
 */
vec3d vec3d::normalize()const
{
	float inverseMagnitude = 1.0f / magnitude();
	return inverseMagnitude* (*this);
}
vec3d vec3d::perpCwXy()const
{
	return vec3d(y, -x);
}
vec3d vec3d::perpCcwXy()const
{
	return vec3d(-y, x);
}
vec3d vec3d::projectOnto(const vec3d& target)
{
	return this->dot(target) / target.magnitudeSquared() * target;
}
/*
Vector Addition
 */
vec3d operator+(const vec3d& vec_a, const vec3d& vec_b)
{
	return vec3d(
		vec_a.x + vec_b.x,
		vec_a.y + vec_b.y,
		vec_a.z + vec_b.z);
}
/*
 * Vector Subtraction
 */
vec3d operator-(const vec3d& vec_a, const vec3d& vec_b)
{
	return vec3d(
		vec_a.x - vec_b.x,
		vec_a.y - vec_b.y,
		vec_a.z - vec_b.z);
}
/*
 * Scalar multiplication
 * It's return a scaled vector from a initial vector
 * with out change it
 */
vec3d operator*(const float scalar, const vec3d& vec_b)
{
	return vec3d(
		scalar * vec_b.x,
		scalar * vec_b.y,
		scalar * vec_b.z);
}
/*
 * Scalar multiplication
 * It's return a scaled vector from a initial vector
 * with out change it
 */
vec3d operator*(const vec3d& vec_b, const float scalar)
{
	return vec3d(
		vec_b.x * scalar,
		vec_b.y * scalar,
		vec_b.z * scalar);
}
vec3d lerp(float alpha, const vec3d& source, const vec3d& target)
{
	return (1.0f - alpha) * source + alpha * target;
}
/*
 * Cross Products
 * P = U x V = [(UyVz - UzVy),(UzVx - UxVz),(UxVy - UyVx)]
 * P is orthogonal on U and V
 */
vec3d cross(const vec3d& a, const vec3d& b)
{
	return vec3d(
			a.y*b.z - a.z*b.y,
			a.z*b.x - a.x*b.z,
			a.x*b.y - a.y*b.x);
}
