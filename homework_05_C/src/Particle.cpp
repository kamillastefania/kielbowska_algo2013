//
//  Particle.cpp
//  homework_05_C
//
//  Created by Kamilla Kielbowska on 10/4/13.
//
//

#include "Particle.h"

Particle::Particle() {
    setParams(0,0,0,0);
    damping =  0.05f ;
    
    age = 0;
    lifespan = ofRandom(550, 750);
    
    bIsDead = false;

}

void Particle::setParams( float px, float py, float vx, float vy ){
    pos.set( px, py );
    vel.set( vx, vy );
}

void Particle::addForce( ofVec2f force ){
    frc += force;
}

void Particle::addDampingForce() {
    frc = frc - vel * damping;
}

void Particle::resetForces() {
    frc.set(0,0);
}

void Particle::update() {
    vel = vel + frc;
    pos = pos + vel;
    
    float noise = ofNoise(pos.x * 0.005, pos.y*0.005, ofGetElapsedTimef() * 0.1) * 15.0;
    
    float agePct = 0.001 - ((float)age / (float)lifespan);
    
    age++;
    
    if( age > lifespan ) {
        bIsDead = true;
    }

}

void Particle::draw() {
    ofSetColor(ofRandom(250), ofRandom(0), ofRandom(100));
//    ofCircle(pos.x, pos.y, 3);
    
    if( bIsDead ){
        return;
    }
    
    float agePct = 1.0 - ((float)age / (float)lifespan);
    
    ofCircle( pos, 4.0 * agePct  );
}