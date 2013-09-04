#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup() {
    
    ofSetCircleResolution(200);
	ofBackground(0);
    
	myObject.posa.x = 50;
	myObject.posa.y = 80;
	myObject.posb.x = 20;
    myObject.posb.y = 80;
	myObject.rada = 10;
	myObject.radb = 20;
	pct = 5;
	po.x = 10;
	po.y = 10;
}

//--------------------------------------------------------------
void testApp::update(){
    
    myObject.posa.x = po.x;
	pct = po.y;
	myObject.interpolateByPct(pct);
	
	c[0] = ofMap(pct, 0, 1, 0, 255);
	c[1] = ofMap(pct, 0, 1, 0, 10);
	c[2] = ofMap(pct, 0, 1, 0, 155);

}

//--------------------------------------------------------------
void testApp::draw(){
    
    myObject.draw(c[0], c[1], c[3]);
	ofSetColor(255,255,255);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
    po.x = ofMap(ofGetWindowHeight()/2, 0, ofGetWindowWidth()/2, 0, 1);
	po.y = x;

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
