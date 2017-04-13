/*
 * Body.h
 *
 *  Created on: Apr 7, 2017
 *      Author: constantin
 */

#ifndef SRC_MATH_BODY_H_
#define SRC_MATH_BODY_H_

class Body {

public:
	Body(){/* */}
	virtual ~Body(){/* */}
	virtual void draw() = 0;
	virtual void update(Body* b,float dt = 0){/* */}
};

#endif /* SRC_MATH_BODY_H_ */
