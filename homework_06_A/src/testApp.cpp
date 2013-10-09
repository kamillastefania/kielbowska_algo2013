#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    
    for(int i=0; i<100;i++){
        addParticle();
    }
    
}

void testApp::addParticle(){
    Particle tmpParticle;
    float px = (10,10);
    float py = (10,10);
    
    tmpParticle.setParams(300, 100, px, py);
    
    particleList.push_back(tmpParticle);

}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i=0; i<particleList.size();i++){
        particleList[i].resetForces();
        particleList[i].addForce(ofVec2f(0,0.1));
        particleList[i].addDampingForce();
        particleList[i].update();
    }

}

//--------------------------------------------------------------
void testApp::draw(){

    for(int i=0; i<particleList.size();i++){
        particleList[i].draw();
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

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    for(int i=0; i<particleList.size();i++){
        
        float circVal = TWO_PI;
        float px = sin(circVal)*(0,4);
        float py = cos(circVal)*(0,4);
        
        particleList[i].setParams(x,y,px,py);
    }

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
