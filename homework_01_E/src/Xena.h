//
//  Xena.h
//  homework_01_multiplexenos
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#ifndef __homework_01_multiplexenos__Xena__
#define __homework_01_multiplexenos__Xena__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__homework_01_multiplexenos__Xena__) */

class Rectangle {
    
public:
	
    Rectangle();
	
    void update();
    void draw();
    
    void xenoToPoint(float catchX, float catchY);
    void interpolateByPct(float myPct);
	
    ofPoint	pos, posa, posb;
    float	catchUpSpeed;
	float rad;
    
    float pct;
    
    ofColor c;
	
};