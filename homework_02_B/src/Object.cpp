//
//  Object.cpp
//  homework_02_B
//
//  Created by Kamilla Kielbowska on 9/9/13.
//
//

#include "Object.h"

Object::Object() {
    
    catchUpSpeed = 0.05;
}

void Object::xenoToPoint(float catchX, float catchY) {
    
    pos.x = catchUpSpeed * catchX + (1- catchUpSpeed) * pos.x;
    
    pos.y = catchUpSpeed * catchY + (1- catchUpSpeed) * pos.y;
}

void Object::draw() {
    
    ofLine(pos.x, pos.y, 0.1, 0.1 );
    
    ofNoFill();
    
    ofSetColor(53.0 * (pos.y / ofGetWindowHeight()), 255, 200);
    
}

void Object::ofxVectorGraphics(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
    
//    ofLine(pos.x, pos.y, pos.x, pos.y);
//    
//    ofNoFill();
//
//    ofSetColor(53.0 * (pos.y / ofGetWindowHeight()), 255, 200);
}