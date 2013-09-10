//
//  Ball.h
//  homework_02_C
//
//  Created by Kamilla Kielbowska on 9/10/13.
//
//

#pragma once
#include "ofMain.h"


class Ball {
public:
    
    Ball ();
    void update ();
    void draw ();
    
    ofVec2f pos;
    ofVec2f velocity;
    float gravity = 1;
    
    float r;
    
    ofColor c;
};


