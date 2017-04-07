/*
 * line.h
 *
 *  Created on: Apr 6, 2017
 *      Author: constantin
 *
 */

#ifndef SRC_MATH_LINE_H_
#define SRC_MATH_LINE_H_

#include"point.h"
#include"mat2d.h"

struct line {
private:
	point start;
	point end;
public:
	line(point start = point(0,0), point end = point(0,0));
	virtual ~line();
	point getStart();
	point getEnd();
	void setStart(point st);
	void setEnd(point en);
	void moveStart(const mat2d& m);
	void moveEnd(const mat2d& m);
	float getLength()const;
	void draw();
};

#endif /* SRC_MATH_LINE_H_ */
