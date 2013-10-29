//
//  Particle.cpp
//  wk6_attractorRepulsor
//
//  Created by TheAlkimist on 10/5/13.
//
//

#include "Particle.h"
#include "ofMain.h"

Particle::Particle(){
    setInitCondition(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 0, 0);
    damping = 0.09f;
    size = 1.1;
    r = ofRandom(200,255);
    g = ofRandom(70,120);
    b = ofRandom(0);
    
}

void Particle::resetForce(){
    force.set(0,0);
}

void Particle::addDamping(){
    force.x = force.x - vel.x * damping;
    force.y = force.y - vel.y * damping;
}

void Particle::addRepulsion( float px, float py, float radius, float strength ){
    
    ofVec2f posOfForce;             // vector position of force
    posOfForce.set(px,py);          // initialize
    
    ofVec2f diff = pos - posOfForce;    // difference
    
    if (diff.length() < radius){
        float percent = 1 - (diff.length() / radius );
        diff.normalize();
        force.x += diff.x * percent * strength;
        force.y += diff.y * percent * strength;
    }
}

void Particle::addAttraction( float px, float py, float radius, float strength ){
    
    ofVec2f posOfForce;
    posOfForce.set(px,py);
    
    ofVec2f diff = pos - posOfForce;
    
    if (diff.length() < radius){
        float percent = 1 - (diff.length() / radius );
        diff.normalize();
        force.x -= diff.x * percent * strength;
        force.y -= diff.y * percent * strength;
    }
}

void Particle::addClockwise( float px, float py, float radius, float strength ){
    
    ofVec2f posOfForce;
    posOfForce.set(px,py);
    
    ofVec2f diff = pos - posOfForce;
    
    if (diff.length() < radius){
        float percent = 1 - (diff.length() / radius );
        diff.normalize();
        force.x -= diff.x * percent * strength;
        force.y += diff.y * percent * strength;
    }
}

void Particle::addCounterClockwise( float px, float py, float radius, float strength){
    
    
	ofVec2f posOfForce;
	posOfForce.set(px, py);
    
	ofVec2f diff = pos - posOfForce;
    
	if (diff.length() < radius){
		float percent = 1 - (diff.length() / radius);
		diff.normalize();
		force.x += diff.y * percent * strength;
		force.y -= diff.x * percent * strength;
	}
    
}

void Particle::trail(float catchX, float catchY){
 
    float catchUpSpeed = 0.5f;
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}

void Particle::setInitCondition( float px, float py, float vx, float vy ){
    pos.set(px,py);
    vel.set(vx,vy);
}

void Particle::update(){
    vel += force;
    pos += vel;
}

void Particle::draw(){
    ofSetColor(r, g, b);
    ofCircle(pos.x, pos.y, size);
}