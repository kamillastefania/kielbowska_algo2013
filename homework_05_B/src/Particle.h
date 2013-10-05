//
//  Particle.h
//  homework_05_B
//
//  Created by Kamilla Kielbowska on 10/5/13.
//
//  based on Charlie Whitney code

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle(){};
    void setup( ofVec2f rVel );
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    int age, lifespan;
    bool bIsDead;
    
    ofImage img;
};

