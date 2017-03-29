#pragma once

struct vec3d
{
	union{
		struct{
			float x, y, z;
		};
	};

	explicit vec3d(
		float x = 0.0f, 
		float y = 0.0f, 
		float z = 0.0f) :x(x), y(y),z(z) {}
	vec3d(const vec3d& source);
	vec3d& operator=(const vec3d& b);
	vec3d& operator+=(const vec3d& b);
	vec3d& operator-=(const vec3d& b);
	float dot(const vec3d& b)const;
	float magnitude() const;
	float magnitudeSquared() const;
	vec3d normalize()const;
	vec3d perpCwXy()const;
	vec3d perpCcwXy()const;
	vec3d projectOnto(const vec3d& target);
};
vec3d operator+(const vec3d& vec_a, const vec3d& vec_b);
vec3d operator-(const vec3d& vec_a, const vec3d& vec_b);
vec3d operator*(const float scalar, const vec3d& vec_b);
vec3d operator*(const vec3d& vec_b, const float scalar);
vec3d lerp(float alpha, const vec3d& source, const vec3d& target);
vec3d cross(const vec3d& a, const vec3d& b);
