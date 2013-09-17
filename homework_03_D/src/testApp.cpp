#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofBackground(254, 247, 229);
    ofSetCircleResolution(100);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    
    for( int i=0; i<5; i++ ){
        Donut myDonut;
        donutList.push_back( myDonut );
    }
    
    myDonut.pos = ofPoint( ofGetWindowWidth()/2 - 75, ofGetWindowHeight() * 0.5 );
}

//--------------------------------------------------------------
void testApp::update(){
    
    ofPoint mousePos( mouseX, mouseY );
    
    myDonut.mousePos = mousePos;
    
    for( int i=0; i< donutList.size(); i++ ){
        
        if( i==0 ){
            donutList[i].xenoToPoint(mouseX, mouseY);
        }else{
            donutList[i].xenoToPoint(donutList[i-1].pos.x, donutList[i-1].pos.y);
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for( int i=0; i< donutList.size(); i++ ){
        donutList[i].draw();
    }

    myDonut.draw();
    
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
