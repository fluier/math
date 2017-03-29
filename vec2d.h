#pragma once

struct vec2d
{
	float x;
	float y;
	explicit vec2d(float x = 0.0f, float y = 0.0f) :x(x), y(y){}
	vec2d(const vec2d& source);
	vec2d& operator=(const vec2d& b);
	vec2d& operator+=(const vec2d& b);
	vec2d& operator-=(const vec2d& b);
};
