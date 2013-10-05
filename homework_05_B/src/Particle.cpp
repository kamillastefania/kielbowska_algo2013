//
//  Particle.cpp
//  homework_05_B
//
//  Created by Kamilla Kielbowska on 10/5/13.
//
//  based on Charlie Whitney code

#include "Particle.h"


#include "Particle.h"

void Particle::setup( ofVec2f rVel ){
    vel = rVel;
    age = 5;
    lifespan = ofRandom(550, 750);
    
    pos = ofVec2f(ofGetMouseX(), ofGetMouseY());
    bIsDead = false;
    
    img.loadImage("cookie.png");
};

void Particle::update(){

    float noise = ofNoise(pos.x * 0.005, pos.y*0.005, ofGetElapsedTimef() * 0.1) * 15.0;
    
    float agePct = 7.5 - ((float)age / (float)lifespan);
    
    pos += ofVec2f( cos(noise), sin(noise) ) * (agePct);
    pos += vel;
    vel *= 0.97;
    
    
    age++;
    
    if( age > lifespan ) {
        bIsDead = true;
    }
};

void Particle::draw(){
    if( bIsDead ){
        return;
    }
    
    float agePct = 1.0 - ((float)age / (float)lifespan);
    
    img.draw(pos.x, pos.y);
};