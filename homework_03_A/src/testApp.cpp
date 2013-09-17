#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(0); 
    
    ofSetCircleResolution(200);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i = 0; i < 10; i++){
    float angle = ofGetElapsedTimef() * 1.7;
    float radius = 220 + i * 20;
    
    float x = radius * cos (angle * 0.9);
    float y = radius * -sin (angle);
    
    ofPoint tmp;
    tmp.x = x;
    tmp.y = y;
    
    pointList.push_back(tmp);
    
    if (pointList.size() > 1975) {
        pointList.erase(pointList.begin());
     }
    }
    ofPushMatrix(); {
        
        ofTranslate(ofGetWindowSize() / 2);
        
        ofNoFill();
        c.r = ofRandom(225);
        c.g = ofRandom(75);
        c.b = (125);
        ofSetColor(c);
        ofBeginShape();
        
        for (int i = 0; i<pointList.size(); i++) {
            ofVertex(pointList[i].x, pointList[i].y);
        }
        
        ofEndShape();
        
    } ofPopMatrix();
    
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
