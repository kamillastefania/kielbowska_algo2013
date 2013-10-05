//
//  Particle.h
//  homework_05_C
//
//  Created by Kamilla Kielbowska on 10/4/13.
//
//

#pragma once

#include "ofMain.h"

class Particle {
    public:
        Particle();
    
    void update();
    void draw();
    
    void setParams(float px, float py, float vx, float vy);
    void addForce( ofVec2f force );
    void addDampingForce();
    void resetForces();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    
    float damping;
    
    int age, lifespan;
    bool bIsDead;
};