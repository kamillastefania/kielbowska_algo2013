//
//  Object.cpp
//  homework_01_shaper
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#include "Object.h"

Object::Object() {
    
}

void Object::draw(int r, int g, int b) {
    
    ofNoFill();
    ofSetColor(r, g, b);
    ofSetLineWidth(3);
    ofCircle(pos.x, pos.y, rad);
}

void Object::interpolateByPct(float myPct) {
    
    pct = myPct;
	
	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;
	
	rad = (1-pct) * rada + (pct) * radb;
}