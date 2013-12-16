#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    
    sampler.loadImage("outer-space.jpg");
    ofSetVerticalSync(true);
    ofSetFrameRate(100);
    ofBackground(0);
    
    ofSetCircleResolution(100);
    
    ofEnableDepthTest();
    
    flocker.addParticle( 75 );
    
    myCam.setDistance(300);
    
    mouseXPercent = 0.35f;
    mouseYPercent = 0.35f;
}

//--------------------------------------------------------------
void testApp::update(){
    
    flocker.applyForces(50, 0.4, 0.75);
    flocker.update();
    
    for (int i = 0; i < pointList.size(); i++){
		pointList[i].x += ofRandom(-1,1);
		pointList[i].y += ofRandom(-1,1);
    }
    
    for (int i=0; i < particleList.size(); i++){
		particleList[i].resetForces();
		particleList[i].addDampingForce();
		particleList[i].update();
	}
    
//    cout << ofGetFrameRate() << endl;
//    cout << particleList.size() << endl;
}

//--------------------------------------------------------------
void testApp::draw(){
    
    
    myCam.begin();
    
    flocker.draw();
    
    ofFill();
    
    ofSetColor(0, 0, 0, 50);
    ofRect( ofGetWindowRect() );
    
    ofSetColor(255);
    for (int i=0; i < particleList.size(); i++){
        particleList[i].draw();
    }
    
    ofNoFill();
    
	ofBeginShape();
	for (int i = 0; i < particleList.size(); i++){
		ofVertex(particleList[i].pos.x, particleList[i].pos.y);
	}
	ofEndShape();
    
    myCam.end();

}

void testApp::addParticle() {
    Particle myParticle;
    
    float vx = ofRandom(-1,1);
    float vy = ofRandom(-1,1);
    float vz = ofRandom(-1,1);
    
//    float vx = 10;
//    float vy = 10;
//    float vz = 10;
    myParticle.setParams(10,5,15, vx, vy, vz);
    
    particleList.push_back(myParticle);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
    mouseXPercent = float(x) / ofGetWindowWidth();
    mouseYPercent = float(y) / ofGetWindowHeight();
    
    
    int z;
    
    ofVec3f difference = ofVec3f(x,y,z) - lastMousePos;
    
    Particle myParticle;
    
//        float vx = ofRandom(-4,4);
//        float vy = ofRandom(-4,4);
    myParticle.setParams(x, y, z, difference.x, difference.y, difference.z);
    
//    myParticle.setParams(x, 100, y, 100, z, 10);
    
    
    particleList.push_back(myParticle);
    
    
    lastMousePos.set(x, y);

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
        particleList.clear();

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
