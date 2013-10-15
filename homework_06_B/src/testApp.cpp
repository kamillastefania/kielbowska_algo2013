#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    sampler.loadImage("fireworks.jpg");
    
    ofSetVerticalSync(true);
	ofSetFrameRate(60);
    

    ofEnableAlphaBlending();
    
    ofSetBackgroundAuto(false);

	
	for (int i = 0; i < 5000; i++){
		particle myParticle;
		myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		//myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		
		particles[i].addAttractionForce(mouseX, mouseY, 1000, 0.1);
		particles[i].addRepulsionForce(mouseX, mouseY, 60, 1);
		
        particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 0.5);
        particles[i].addClockwiseForce(mouseX, mouseY, 200, 1.5);
		
		//particles[i].addForce(0,0.04);  // gravity
		particles[i].addDampingForce();
		particles[i].update( sampler, mousePos );
	}
    for (int i = 0; i < particles.size(); i++){
    if ( i == 0) {
        particles[i].xenoToPoint(mousePos.x, mousePos.y);
    } else {
        particles[i].xenoToPoint(particles[i-1].pos.x, particles[i-1].pos.y);
    }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
//    ofSetColor(0x000000);
    
//    ofColor semiTransparent( 0, 0, 0, 255.0 * 0.1 );
//    ofSetColor(semiTransparent);
//    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight() );


    ofBackgroundGradient(ofColor(0,0,0,10), ofColor(0,0,0,10), OF_GRADIENT_CIRCULAR);
    
//    sampler.draw(50, 50);
    
	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
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
