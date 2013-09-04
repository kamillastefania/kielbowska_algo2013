#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofSetVerticalSync(true);

    myRectangle.posa.x = 10;
	myRectangle.posa.y = 100;
	myRectangle.posb.x = 500;
	myRectangle.posb.y = 150;
	myRectangle.interpolateByPct(0);
	pct = 0;
}

//--------------------------------------------------------------
void testApp::update(){
    
    pct += 0.0000001f;
	if (pct > 1) {
		pct = 0;			
	}
	myRectangle.interpolateByPct(pct);
}

//--------------------------------------------------------------
void testApp::draw(){
    
    myRectangle.draw();

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
