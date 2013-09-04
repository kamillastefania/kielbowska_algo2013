#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
	myRectangle.posa.x = 0;
	myRectangle.posa.y = 100;
	myRectangle.posb.x = 1000;
	myRectangle.posb.y = 100;
	myRectangle.interpolateByPct(0);
	pct = 0;
	
}

//--------------------------------------------------------------
void testApp::update(){
    
    printf("%f \n", pct);
	
	pct += 0.025f;						
	if (pct > 1) {
		pct = 0;							
	}
	myRectangle.interpolateByPct(pct);
	
}
//--------------------------------------------------------------
void testApp::draw(){
    myRectangle.draw();
	ofSetColor(255,255,255);
	ofDrawBitmapString("Fastest still perceptible movement", 20,20);
	ofDrawBitmapString("Rectangle speed: 54 inches per secons (when 60 frames per second) ", 30,60);
	ofDrawBitmapString("Screen resolution of 1440x900 px", 30,80);
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
