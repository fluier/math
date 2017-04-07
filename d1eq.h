/*
 * d1eq.h
 *
 *  Created on: Apr 4, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_D1EQ_H_
#define SRC_MATH_D1EQ_H_

class d1eq {
	float _a;
	float _b;
	float _c;
public:
	d1eq(float a = 0, float b = 0, float c = 0);
	virtual ~d1eq();
	bool belong(float x, float y);
	float fdx(float x);
};

#endif /* SRC_MATH_D1EQ_H_ */
