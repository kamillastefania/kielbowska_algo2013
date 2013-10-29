#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(1000);
    ofBackground(237,123,123);
    ofEnableAlphaBlending();
    
    for (int i = 0; i < 25000; i++){
        Particle myParticle;
        myParticle.setInitCondition(ofRandom(0,1000), ofRandom(0,1000), 0, 0);
        myParticle.damping = ofRandom(0.1,1.05);
        particles.push_back(myParticle);
        
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].resetForce();
        particles[i].addAttraction(mouseX, mouseY, 1000, 0.05);
        particles[i].addRepulsion(mouseX, mouseY, 30, 35);
        particles[i].addDamping();
        particles[i].update();
        
        if (i == 0){
            particles[i].trail(mouseX, mouseY);
        }else{
            particles[i].trail(particles[i-1].pos.x, particles[i-1].pos.y);
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for (int i = 0; i < particles.size(); i++){
        
        particles[i-1].draw();
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
