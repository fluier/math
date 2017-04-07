/*
 * Body.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: constantin
 */

#include<GL/glew.h>
#include<cmath>
#include "Body.h"

const float m_pi = 3.141592653589793238462643;
const float m_2pi = 2 * m_pi;

static float _dist_from_grav;

Body::Body(vec2d pos, vec2d vel, float mass):
_pos(pos),_vel(vel),_mass(mass)
{
	_line.setStart(point(0,0));
	_line.setEnd(point(_pos.x,_pos.y));
	_dist_from_grav = _pos.length;
}

Body::~Body() {
	// TODO Auto-generated destructor stub
}

void Body::gravitateTo(const Body& b) {
	vec2d dist = b._pos - _pos;
	float d = this->distTo(b);
	float angle = dist.getAngle();

	vec2d rez; rez.initAL(angle,b._mass/(d * d));
	_vel += rez;
	move();
}

void Body::move(float dt) {
	_pos += _vel;
	if(_pos.length >= _dist_from_grav){
		_dist_from_grav = _pos.length;
		_line.setEnd(point(_pos.x,_pos.y));
	}
}

float Body::distTo(const Body& b) {
	float dx = _pos.x - b._pos.x;
	float dy = _pos.y - b._pos.y;
	return sqrt(dx * dx + dy * dy);
}

void Body::draw() {
	glBegin(GL_LINE_LOOP);
	for(float t = 0; t < m_2pi; t += 0.1f){
		glVertex2f(_pos.x + cos(t),_pos.y + sin(t));
	}
	glEnd();
	_line.draw();
}
