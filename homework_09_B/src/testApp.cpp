#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetCircleResolution(100);
    ofEnableSmoothing();
    ofBackground(0);
//
    x = ofGetWindowWidth()/2;
    y = ofGetWindowHeight()/2;
    h = 100;
    w = 100;
    bounce = ofGetWindowHeight()-100-h;

}

//--------------------------------------------------------------
void testApp::update(){
    
    y += vel;
    vel += gravity;
    
    if(y>=ofGetWindowHeight()-100){
        y=ofGetWindowHeight()-100;
        vel *=- .90;
    }
    
    if(y>bounce){
        w=ofMap(y, bounce, ofGetWindowHeight(), 100, 500);
        h=ofMap(w, bounce, ofGetElapsedTimef(), 100, 100);
    }
    if(y<=bounce) {
        h=ofMap(abs(vel), 0, 5, 100, 100);
    }
    
//    yPos = ofGetWindowHeight() /2;
//    
//    if (yPos>0 && yPos<=470) {
//        if (acc>0) {
//            ofEllipse(ofGetWindowWidth()/2, yPos, 40, 60);
//            ofColor(255);
//        }
//        else {
//            ofEllipse(ofGetWindowWidth()/2, yPos, 50, 50);
//        }
//    }
//    else if (yPos>470 && yPos<480) {
//        ofEllipse(ofGetWindowWidth()/2, yPos, 60, 40);
//    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(0, 255, 255);
//    ofCircle(x,y,w,h);
    ofEllipse(x,y,w,h);

//    yPos += acc;
//    acc += gravity;
//    if (yPos>480) {
//        acc=-acc/1.05;
//    }

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
