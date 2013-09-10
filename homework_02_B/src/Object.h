//
//  Object.h
//  homework_02_B
//
//  Created by Kamilla Kielbowska on 9/9/13.
//
//

#pragma once

#include "ofMain.h"

class Object {
public:
    
    Object();
    
    void xenoToPoint (float catchX, float catchY);
    
    void ofxVectorGraphics (float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
    
    void draw();
    
float catchUpSpeed;

ofPoint pos, targetPos;

};