#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(0);
    
    ofSetCircleResolution(200);

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < pointList.size(); i++){
		pointList[i].x += ofRandom(ofRandom(20),ofRandom(10));
		pointList[i].y += ofRandom(ofRandom(20),ofRandom(10));
    }

}

//--------------------------------------------------------------
void testApp::draw(){

    ofNoFill();
    c.r = ofRandom(100);
    c.g = ofRandom(100);
    c.b = ofRandom(250);
    ofSetColor(c);
    
    float oposx = 500;
    float oposy = 300;
    
    float angle = ofGetElapsedTimef() * 4.5;
    
    float radius = 20 + angle * 2;
    
    float x = oposx + radius * cos (angle * 1.1);
    float y = oposy + radius * sin (angle * 1.1);
    
    ofPoint tmpPoint;
    tmpPoint.x = x;
    tmpPoint.y = y;
    
    pointList.push_back ( tmpPoint );
    
    if ( pointList.size() > 10005 ) {
        pointList.erase(pointList.begin() );
    }
    
    ofBeginShape();
    
    for (int i = 0; i <pointList.size(); i++){
        ofVertex(pointList[i].x, pointList[i].y);
    }
    
    ofEndShape();
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
