//
//  Particle.cpp
//  homework_06_A
//
//  Created by Kamilla Kielbowska on 10/7/13.
//
//

#include "Particle.h"

Particle::Particle(){
    setParams(0,0,0,0);
    damping.set(0,0);
    img.loadImage("cookie.png");
}

void Particle::setParams(float px, float py, float vx, float vy){
    pos.set(px,py);
//    vel.set(vx,vy);
    rotation = (0,30);
}

void Particle::addForce(ofVec2f force){
    frc += force;
}

void Particle::resetForces(){
    frc.set(0,0);
}

void Particle::addDampingForce(){
    frc = frc - vel * damping;
}

void Particle::update(){
    vel+=frc;
    pos+=vel;
    
}

void Particle::draw(){
    
    float sinOfTime = sin( ofGetElapsedTimef() * 2 );
    sinOfTimeMapped = ofMap( sinOfTime, -1, 1, 1, 2);
    
    ofPushMatrix();
    
    ofRotate(rotation);
    img.draw(pos.x,pos.y,180*sinOfTimeMapped,90*sinOfTimeMapped);
    
    ofPopMatrix();
    
}