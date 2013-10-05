#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0);
    
    for (int i = 0; i < 10000; i++){
        addParticle();
    }

}

//--------------------------------------------------------------
void testApp::update(){

    for (int i=0; i < particleList.size(); i++){
		particleList[i].resetForces();
        particleList[i].addForce( ofVec2f(0,0.05));
		particleList[i].addDampingForce();
		particleList[i].update();
	}
    
    for( vector<Particle>::iterator it=particleList.begin(); it!=particleList.end(); ){
        it->update();
        
        if( it->bIsDead ){
            it = particleList.erase(it);
        }else {
            it++;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    
    ofSetColor(0);
    for (int i=0; i < particleList.size(); i++){
        particleList[i].draw();
    }
    
    for( vector<Particle>::iterator it = particleList.begin(); it!=particleList.end(); it++){
        it->draw();
    }
    
    if(click){
        addParticle();
        addParticle();
    }
    
            click=false;
}

void testApp::addParticle() {
    Particle myParticle;
    
    float vx = ofRandom(-1,1);
    float vy = ofRandom(-1,1);
    myParticle.setParams(500,500,vx, vy);
    
    myParticle.damping = ofRandom(0.02, 0.06);
    particleList.push_back(myParticle);
    

    ofVec2f rVel = ofVec2f( ofRandom(1.0), ofRandom(1.0) ) * 10.0 - 5.0;
//    myParticle.setup( rVel );
    particleList.push_back( myParticle );
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
    
    for (int i = 0; i < particleList.size(); i++){

        
        float circVal = ofRandom(TWO_PI);
        
        float vx = ofRandom(sin( sin(circVal) ) * ofRandom(0,1));
        float vy = ofRandom(cos( sin(circVal) ) * ofRandom(0,2));
        
		particleList[i].setParams(mouseX,mouseY,vx, vy);
        
	}
    
        click=true;

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
