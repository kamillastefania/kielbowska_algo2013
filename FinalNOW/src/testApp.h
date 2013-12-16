#pragma once

#include "ofMain.h"
#include "FlockController.h"
#include "Particle.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    FlockController flocker;
    ofEasyCam myCam;
    
    ofImage sampler;
    
    vector<ofPoint> pointList;
    
    ofColor c[4];
    
    float whichColor;
    
    float mouseXPercent, mouseYPercent;
    
    void addParticle();
    
    vector<Particle>    particleList;
    
    ofPoint             lastMousePos;
    
};
