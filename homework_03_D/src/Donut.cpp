//
//  Donut.cpp
//  homework_03_D
//
//  Created by Kamilla Kielbowska on 9/17/13.
//
//

#include "Donut.h"

Donut::Donut(){
    
    myImg1.loadImage("donut.png");
    myImg2.loadImage("donut.png");

    ofPoint pos, mousePos;
    float angle;
    
    catchUpSpeed = 0.5f;
}

void Donut::xenoToPoint(float catchX, float catchY){
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}

void Donut::draw(){
    
    ofPushMatrix();{
        ofTranslate( pos );
        
        float dx = mousePos.x - pos.x;
        float dy = mousePos.y - pos.y;
        
        angle = atan2( dy , dx );
        
        ofRotate( ofRadToDeg(angle) );
        
        myImg1.draw(mousePos.x, mousePos.y);
        myImg2.draw(mousePos.x, mousePos.y);
        
    }ofPopMatrix();
}
