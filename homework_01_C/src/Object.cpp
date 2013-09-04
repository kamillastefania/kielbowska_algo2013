//
//  Object.cpp
//  homework_01_changePointAPointB
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#include "Object.h"

Object::Object() {
    
}

void Object::update() {
    
    if (changePos) {
        posa.x = ofGetMouseX();
        posa.y = ofGetMouseY();
    }
    
    else {
        posb.x = ofGetMouseX();
        posb.y = ofGetMouseY();
    }

}

void Object::draw() {
    
    ofSetColor(255, 53, 172);
    ofSetLineWidth(3);
    ofLine(posa, posb);
}