#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSeedRandom();
    
    dest1 = ofVec2f ( ofRandomWidth(), ofRandomHeight() );
    dest2 = ofVec2f ( ofRandomWidth(), ofRandomHeight() );
    
//    pos = ofGetWindowSize() / 2;
//    dest = ofVec2f( ofRandomWidth(), ofRandomHeight() );
    
    car1.setParams( pos, ofVec2f(10, -5) );
    car2.setParams( pos, ofVec2f(-5, 10) );
    
    
    
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    
    car1.seek( dest1 );
    car2.seek( dest2 );
    
    if( car1.pos.distance( car2.pos ) < 200 ){
        car1.c = ofColor(0,255,255);
        car2.c = ofColor(0,255,255);
        
        car1.addRepulsionForce( car2.pos );
        car2.addRepulsionForce( car1.pos );
    }

    car1.update();
    car2.update();
    
    if( car1.pos.distance(dest1) < 5){
        dest1 = ofVec2f( ofRandomWidth(), ofRandomHeight() );
    }
    
    if( car2.pos.distance(dest2) < 5){
        dest2 = ofVec2f( ofRandomWidth(), ofRandomHeight() );
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor( car1.c );
    ofCircle( dest1, 4 );
    car1.draw();
    
    ofSetColor( car2.c );
    ofCircle( dest2, 4 );
    car2.draw();

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
