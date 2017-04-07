#pragma once

#include<iostream>

struct vec2d
{
	float x;
	float y;
	float angle;
	float length;

	explicit vec2d(float x = 0.0f, float y = 0.0f);
	vec2d(const vec2d& source);
	void initAL(float angle, float length);
	void initXY(float x, float y);
	vec2d& operator=(const vec2d& b);
	vec2d& operator+=(const vec2d& b);
	vec2d& operator-=(const vec2d& b);
	float getAngle();
};
vec2d operator+(const vec2d& a, const vec2d& b);
vec2d operator-(const vec2d& a, const vec2d& b);
std::ostream& operator<<(std::ostream& os, const vec2d& m);
