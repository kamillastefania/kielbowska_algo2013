//
//  Object.h
//  homework_01_shaper
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#ifndef __homework_01_shaper__Object__
#define __homework_01_shaper__Object__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__homework_01_shaper__Object__) */


class Object {
public:
    Object();
    
    void update();
    void draw(int r, int g, int b);
    void interpolateByPct(float myPct);
    
    ofPoint posa, posb, pos;
    
    float rad, rada, radb;
    
    float pct;
    
};