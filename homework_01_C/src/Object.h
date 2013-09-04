//
//  Object.h
//  homework_01_changePointAPointB
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#ifndef __homework_01_changePointAPointB__Object__
#define __homework_01_changePointAPointB__Object__

#include <iostream>

#include "ofMain.h"
#endif /* defined(__homework_01_changePointAPointB__Object__) */


class Object {
public:
    Object();
    
    void update();
    void draw();
    
    ofPoint posa;
    ofPoint posb;
    ofPoint pos;
    
    bool changePos;
    
};