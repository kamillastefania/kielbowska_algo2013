//
//  Rectangle.cpp
//  homework_01_fastestnonmovingspeed
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#include "Rectangle.h"

Rectangle::Rectangle(){
    
}

void Rectangle::update(){    
}

void Rectangle::draw() {
    
    ofFill();
    ofSetColor(255, 0, 255);
    ofRect(pos.x, pos.y, 20, 20);
}

void Rectangle::interpolateByPct(float myPct){
	
    pct = myPct;
    
	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;
	
}