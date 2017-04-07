/*
 * Body.h
 *
 *  Created on: Apr 7, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_BODY_H_
#define SRC_MATH_BODY_H_

#include"line.h"

class Body {
	vec2d _pos;
	vec2d _vel;
	float _mass;
	line _line;
public:
	Body(vec2d pos = vec2d(0,0), vec2d vel = vec2d(0,0), float mass = 0);
	virtual ~Body();
	void move(float dt = 1);
	void gravitateTo(const Body& b);
	float distTo(const Body& b);
	void draw();
};

#endif /* SRC_MATH_BODY_H_ */
