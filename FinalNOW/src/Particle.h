//
//  Particle.h
//  SingleParticle
//
//  Created by Charlie Whitney on 9/23/13.
//
//

#pragma once

#include "ofMain.h"

class Particle {
  public:
    Particle();
    
    void update();
    void draw();
    
    void setParams( float px, float py, float pz, float vx, float vy, float vz );
    void addForce( ofVec2f force );
    void addDampingForce();
    void resetForces();
    
    ofVec3f pos;
    ofVec3f vel;
    ofVec2f frc;
    
    ofVec2f damping;  // could also be a ofVec2f
};