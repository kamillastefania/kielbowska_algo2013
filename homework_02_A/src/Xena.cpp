//
//  Xena.cpp
//  homework_02_A
//
//  Created by Kamilla Kielbowska on 9/4/13.
//
//

#include "Xena.h"


Rectangle::Rectangle() {
	catchUpSpeed = 0.01f;
    rad = ofRandom(150);
    c.r = ofRandom(200);
    c.g = ofRandom(0);
    c.b = ofRandom(150);
}

void Rectangle::update() {
    
    pos.x += xVelocity * 10.0;
    pos.y += yVelocity * 10.0;
    
    if ( pos.x < 0  || pos.x > ofGetWindowWidth()) {
        xVelocity *= -1;
    }
    
    if ( pos.y < 0  || pos.y > ofGetWindowHeight()) {
        yVelocity *= -1;
    }

}

void Rectangle::draw() {
    ofNoFill();
    ofSetColor(c, 255);
    ofCircle(pos.x, pos.y, rad);
}

void Rectangle::xenoToPoint( float catchX, float catchY) {
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}