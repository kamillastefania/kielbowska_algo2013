#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetCircleResolution(200);
    
	ofEnableAlphaBlending();
    
    for (int i = 0; i < NUM_RECTANGLES; i++) {
        myRectangle[i].pos.x = ofRandom(ofGetWindowWidth());
        myRectangle[i].pos.y = ofRandom(ofGetWindowHeight());
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < NUM_RECTANGLES; i++) {
        myRectangle[i].xenoToPoint(mouseX, mouseY);
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(0);
    for (int i = 0; i < NUM_RECTANGLES; i++)
        myRectangle[i].draw();

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
