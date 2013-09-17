#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    for (int i = 0; i < 10; i++) {
        Object tmpObj;
        objList.push_back( tmpObj);
    }
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    for ( int i = 0; i < objList.size(); i++) {
        if (i == 0) {
            objList[i].xenoToPoint(mousePos.x, mousePos.y);
        } else {
            objList[i].xenoToPoint(objList[i-1].pos.x, objList[i-1].pos.y);
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofColor semiTransparent ( 100, 100, 100, 105.0 * 0.5 );
    ofSetColor(semiTransparent);
    
    for ( int i = 0; i < objList.size(); i++) {
        objList[i].draw();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
    mousePos.x = x;
    mousePos.y = y;

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
