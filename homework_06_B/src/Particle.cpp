//
//  Particle.cpp
//  homework_06_B
//
//  Created by Kamilla Kielbowska on 10/7/13.
//
//

#include "Particle.h"


//------------------------------------------------------------
particle::particle(){
    
	setInitialCondition(0,0,0,0);
	damping = 0.09f;
    catchUpSpeed = 0.03;
    
//    pos = position;
//    vel = velocity;
    radius = 3.0;
    age = 0;
    lifespan = floor( ofRandom(60,100) );
    decay = ofRandom( 0.95, 0.951 );
    decay = 0.01;
    
    mass = radius * radius * 0.0001f + 0.01f;
}

//------------------------------------------------------------
void particle::resetForce(){
    
    frc.set(0,0);
}

//------------------------------------------------------------
void particle::addForce(float x, float y){

    frc.x = frc.x + x;
    frc.y = frc.y + y;
}

//------------------------------------------------------------
void particle::addDampingForce(){
	
    frc.x = frc.x - vel.x * damping;
    frc.y = frc.y - vel.y * damping;
}


//------------------------------------------------------------
void particle::addRepulsionForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x += diff.x * pct * strength;
		frc.y += diff.y * pct * strength;
	}
	
}

//------------------------------------------------------------
void particle::addAttractionForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.x * pct * strength;
		frc.y -= diff.y * pct * strength;
	}
	
}


//------------------------------------------------------------
void particle::addClockwiseForce( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.y * pct * strength;
		frc.y += diff.x * pct * strength;
	}
	
}

//------------------------------------------------------------
void particle::addCounterClockwiseForce( float px, float py, float radius, float strength){
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x += diff.y * pct * strength;
		frc.y -= diff.x * pct * strength;
	}
	
}

//------------------------------------------------------------
void particle::setInitialCondition(float px, float py, float vx, float vy){
    
    pos.set(px,py);
	vel.set(vx,vy);
}

//------------------------------------------------------------
void particle::update( const ofImage &img, ofVec2f mousePos ){
    
	vel = vel + frc;
	pos = pos + vel;
    
    radius = img.getColor(pos.x, pos.y).r / 255.0 * 3.0;
    
    mass = radius * radius * 0.0001f + 0.01f;
}

//------------------------------------------------------------
void particle::draw(){
    
    ofSetColor(23.0 * (pos.y / ofGetWindowHeight()), 242, 188);
    ofCircle(pos.x, pos.y, 3);
}

//------------------------------------------------------------
void particle::xenoToPoint(float catchX, float catchY) {
    
    pos.x = catchUpSpeed * catchX + (1- catchUpSpeed) * pos.x;
    
    pos.y = catchUpSpeed * catchY + (1- catchUpSpeed) * pos.y;
}