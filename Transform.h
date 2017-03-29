/*
 * Transform.h
 *
 *  Created on: Mar 29, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_TRANSFORM_H_
#define SRC_MATH_TRANSFORM_H_

const float m_pi = 3.141592653589793238462643;

#include"vec3d.h"
#include"vec4d.h"
#include"mat4d.h"

mat4d theTranslationMatrix(const vec3d& p);
mat4d theRotationXMatrix(const float angle);
mat4d theRotationYMatrix(const float angle);
mat4d theRotationZMatrix(const float angle);
mat4d theScalingMatrix(const vec3d& s);
mat4d theInverseScalingMatrix(const vec3d& s);

vec4d operator*(const mat4d& t, const vec4d& v);

#endif /* SRC_MATH_TRANSFORM_H_ */
