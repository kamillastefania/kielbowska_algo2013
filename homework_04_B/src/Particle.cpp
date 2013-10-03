//
//  Particle.cpp
//  homework_04_B
//
//  Created by Kamilla Kielbowska on 9/23/13.
//
//

#include "Particle.h"

void Particle::setup( ofVec2f rVel ){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(150, 150);
    
    pos = (ofGetWindowSize() / 2.0);
    bIsDead = false;
};

void Particle::update(){
    
    float noise = ofNoise(pos.x * 0.05, pos.y * 0.05, ofGetElapsedTimef() * 0.1) * 1.5;
    
    float agePct = ofRandom(5.0) - ((float)age / (float)lifespan);
    
    pos += ofVec2f( cos(noise), sin(noise) ) * (1.5+agePct);
    pos += vel;
    vel *= 1.001;
    
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
    
//    ofNoFill();
    ofSetColor(c);
    c.r = ofRandom(255);
    c.g = ofRandom(205);
    c.b = ofRandom(105);
    ofCircle(pos, 4.0 * agePct);
    
//    ofPushMatrix(); {
//        
//        ofTranslate(ofGetWindowSize() / 2);
//        
//        ofNoFill();
//        c.r = ofRandom(225);
//        c.g = ofRandom(75);
//        c.b = (125);
//        ofSetColor(c);
//        ofBeginShape();
//        
//        for (int i = 0; i<pList.size(); i++) {
//            ofVertex(pList[i].x, pList[i].y);
//        }
//        
//        ofEndShape();
//        
//    } ofPopMatrix();
};