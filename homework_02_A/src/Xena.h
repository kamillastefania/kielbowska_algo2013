//
//  Xena.h
//  homework_02_A
//
//  Created by Kamilla Kielbowska on 9/4/13.
//
//

#pragma once
#include "ofMain.h"

class Rectangle {
    
public:
	
    Rectangle();
	
    void update();
    void draw();
    
    void xenoToPoint(float catchX, float catchY);
    void interpolateByPct(float myPct);
	
//    ofPoint	pos, posa, posb;
    
    ofVec2f pos, posa, posb;
    
    float	catchUpSpeed;
	float rad;
    
    float pct;
    
    ofColor c;
    
    float xVelocity;
    float yVelocity;
	
};