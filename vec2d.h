#pragma once

struct vec2d
{
	float x;
	float y;
	explicit vec2d(float x = 0.0f, float y = 0.0f) :x(x), y(y){}
	inline vec2d(const vec2d& source);
	inline vec2d& operator=(const vec2d& b);
	inline vec2d& operator+=(const vec2d& b);
	inline vec2d& operator-=(const vec2d& b);
};
