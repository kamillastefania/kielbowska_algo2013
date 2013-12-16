//
//  Boid.cpp
//  Flocking
//
//  Created by Charlie Whitney on 10/22/13.
//
//

#include "Boid.h"

Boid::Boid() {
//    damping = ofRandom(0.95, 0.99);
    
    damping = 0.1;
    
//    c.r = ofRandom(0);
//    c.g = ofRandom(55);
//    c.b = ofRandom(255);
    
//    c[1] = ofColor(51,84, 137);
//    c[2] = ofColor(242, 224, 160);
//    c[3] = ofColor(255, 255, 255);
//    c[4] = ofColor(106, 121, 109);
//    
//    whichColor = ofRandom(1,4);

}

void Boid::applyForce(ofVec3f force){
    acc += force;
}

void Boid::pullToCenter(ofVec3f center){
    ofVec3f dir = pos - center;
    float dist = dir.length();
    float maxDistance = 300.0;
    
    if( dist > maxDistance ){
        dir.normalize();
        vel -= dir * (dist - maxDistance) * 0.0001f;
    }
}

void Boid::update(){
    float minSpeed = 0.1;
    
    
    vel += acc;
    vel.limit(1.0);
    
    if( vel.lengthSquared() < minSpeed * minSpeed ){
        vel = vel.normalized() * minSpeed;
    }
    
    
    pos += vel;
    vel *= damping;
    
    acc.set(0);
}

void Boid::draw(){
    
    
    float hue = fmodf(ofGetElapsedTimef()*10,255);
    
    int step = 5;
    
    for ( int i=0; i<ofGetWindowWidth(); i+=step ) {
        for ( int j=0; j<ofGetWindowHeight(); j+=step )
        {
        }
    }
    
    int i, j;
    
    ofColor c;
    
    c.setHsb( hue, ofMap(i, 0,ofGetWidth(), 0,255), ofMap(j, ofGetHeight(),0, 0,255 ) );
    
    ofSetColor( c );
    
    ofColor color = ofColor::fromHsb(hue,
                                     ofMap( pos.x, 0,ofGetWindowWidth(), 0,255 ),
                                     ofMap( pos.y, ofGetWindowHeight(),0, 0,255 ) );
//    ofSetColor( color );
//    ofFill();
//    ofCircle( pos.x, pos.y, 20, 20 );
    
    ofSetColor( color );
    ofCircle(pos, 1);
    
//    ofSetColor(0, 0, 0);
//    ofLine(pos, pos - vel*5.0);
}