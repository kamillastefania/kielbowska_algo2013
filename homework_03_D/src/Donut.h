//
//  Donut.h
//  homework_03_D
//
//  Created by Kamilla Kielbowska on 9/17/13.
//
//

#pragma once
#include "ofMain.h"

class Donut {
public:
    
    Donut();
    
    void xenoToPoint( float catchX, float catchY );
    void draw();
    
    ofImage myImg1, myImg2;
    
    ofPoint pos, mousePos;
    float angle;
    
    float catchUpSpeed;

};