//
//  Rectangle.h
//  homework_01_fastestnonmovingspeed
//
//  Created by Kamilla Kielbowska on 9/3/13.
//
//

#ifndef __homework_01_fastestnonmovingspeed__Rectangle__
#define __homework_01_fastestnonmovingspeed__Rectangle__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__homework_01_fastestnonmovingspeed__Rectangle__) */


class Rectangle {
public:
    Rectangle();
    
    void update();
    void draw();
    void interpolateByPct(float myPct);
    
    ofPoint pos, posa, posb;
    float pct;
};