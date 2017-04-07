/*
 * line.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 */

#include<GL/glew.h>

#include<cmath>

#include "line.h"
#include "Transform.h"
line::line(point start, point end):
start(start),end(end){

}

line::~line() {
	// TODO Auto-generated destructor stub
}

point line::getStart() {
	return start;
}

point line::getEnd() {
	return end;
}
void line::setStart(point st) {
	this->start = st;
}

void line::setEnd(point en) {
	this->end = en;
}

void line::moveStart(const mat2d& m) {
	start *= m;
}

void line::moveEnd(const mat2d& m) {
	end *= m;
}

float line::getLength() const {
	float auxX = start.x - end.x;
	float auxY = start.y - end.y;
	return sqrt(auxX * auxX + auxY * auxY);
}

void line::draw() {
	glBegin(GL_LINES);
	glColor3f(start.r,start.g,start.b);
	glVertex2f(start.x,start.y);
	glColor3f(end.r,end.g,end.b);
	glVertex2f(end.x,end.y);
	glEnd();
}
