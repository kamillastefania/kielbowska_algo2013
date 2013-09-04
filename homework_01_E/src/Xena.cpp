//
//  Xena.cpp
//  homework_01_multiplexenos
//
//  Created by Kamilla Kielbowska on 9/3/13.
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
