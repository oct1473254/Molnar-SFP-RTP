#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(0, 15, 150);
      for (int i = 0; i < ofGetHeight(); i+= 10){
        ofDrawRectangle(0, i, ofGetWidth(), 5);
      }

      for (int i = 0; i < 1024; i++){
        float x = i;
        float y = 350 + (ofSignedNoise(i*0.003 + 70.6) +
                 ofSignedNoise(i*0.025 + 90.4)*0.45 +
                 ofSignedNoise(i*0.037 + 14.2)*0.02 +
                 ofSignedNoise(i*0.054 + 45.3)*0.04 +
                 ofSignedNoise(i*0.095 )*0.02 ) * 150;


        //ofDrawCircle(x,y,1);
        if (i % 10 == 0){
          ofSetColor(0, 15, 150);
          ofDrawRectangle(x,y,5, 300);
          ofSetColor(255);
          ofDrawRectangle(x+5,y,5, 300);
        }




      }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
