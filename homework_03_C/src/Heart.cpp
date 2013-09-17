//
//  Heart.cpp
//  homework_03_C
//
//  Created by Kamilla Kielbowska on 9/16/13.
//
//

#include "Heart.h"

Heart::Heart(){
    
    myImg.loadImage("heart.png");

}

void Heart::draw(){
    float posX = sin( ofGetElapsedTimef() * 2 );
    float posY = ofMap( posX, -1, 1, 50, 80);
    myImg.draw(200, 200, posY);

}