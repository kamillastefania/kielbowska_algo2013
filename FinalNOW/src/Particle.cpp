//
//  Particle.cpp
//  SingleParticle
//
//  Created by Charlie Whitney on 9/23/13.
//
//

#include "Particle.h"

Particle::Particle() {
    setParams(0,0,0,0,0,0);
    damping = ofVec2f( 0.02f );
}

void Particle::setParams( float px, float py, float pz, float vx, float vy, float vz ){
    pos.set( px, py, pz );
    vel.set( vx, vy, vz );
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
}

void Particle::draw() {
    ofCircle(pos.x, pos.y, 1);
}