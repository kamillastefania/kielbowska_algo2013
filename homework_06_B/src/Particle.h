//
//  Particle.h
//  homework_06_B
//
//  Created by Kamilla Kielbowska on 10/7/13.
//
//

#pragma once

#include "ofMain.h"

class particle
{
public:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    ofVec2f targetPos;
    
    float   radius;
    int     age, lifespan;
    bool    bIsDead;
    float   decay;
    float   mass;
    
    float damping;
    float catchUpSpeed;
    
    particle();
    virtual ~particle(){};
    
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void update( const ofImage &img, ofVec2f mousePos );
    void draw();
	
    void addRepulsionForce( float px, float py, float radius, float strength);
    void addAttractionForce( float px, float py, float radius, float strength);
    void addClockwiseForce( float px, float py, float radius, float strength);
    void addCounterClockwiseForce( float px, float py, float radius, float strength);
	
    void xenoToPoint (float catchX, float catchY);

};

