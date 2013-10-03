//
//  Particle.h
//  homework_04_B
//
//  Created by Kamilla Kielbowska on 9/23/13.
//
//

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
    
    ofColor c;
    
    vector < ofPoint > pList;

};