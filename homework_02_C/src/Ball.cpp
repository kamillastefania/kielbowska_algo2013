//
//  Ball.cpp
//  homework_02_C
//
//  Created by Kamilla Kielbowska on 9/10/13.
//
//

#include "Ball.h"

Ball::Ball () {
    
    pos.set(ofGetMouseX(), ofGetMouseY());
    r = 25;
    c.r = ofRandom(200);
    c.g = ofRandom(0);
    c.b = ofRandom(150);
    
    velocity=ofVec2f(20, 20);
    
}

void Ball::update() {
    
    velocity.y += gravity;
    pos += velocity;
    
    if (pos.y > ofGetWindowHeight()-(r)) {
        pos.y = ofGetWindowHeight()-(r+1);
        velocity.y *= -0.9;
    }
    
    if (pos.x > ofGetWindowWidth() - r) {
        pos.x = ofGetWindowWidth() - (r+1);
        velocity.x *= -0.9;
    }
    
    if (pos.x < ofGetWindowWidth() - r) {
        pos.x = ofGetWindowWidth() - (r+1);
        velocity.x *= -0.5;
    }
}

void Ball::draw() {
    
    ofNoFill();
    ofSetColor(c, 255);
    ofCircle(pos, r);
    
}