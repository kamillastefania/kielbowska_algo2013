//
//  Particle.h
//  homework_06_A
//
//  Created by Kamilla Kielbowska on 10/7/13.
//
//

#pragma once
#include "ofMain.h"


class Particle{
public:
    Particle();
    
    void update();
    void draw();
    void setParams(float px, float py, float vx, float vy);
    void addForce(ofVec2f force);
    void addDampingForce();
    void resetForces();
    
    ofVec2f pos, vel, frc, damping;
    
    ofImage img;
    float sinOfTimeMapped;
    float rotation;
};