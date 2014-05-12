#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define PORT 8000

// You can find these IP addresses by running the following at the command line
// ifconfig | grep inet | grep 127.0.0.1 --invert-match
#define MY_IP_ADDRESS "192.168.2.2"
#define BROADCAST_IP "192.168.2.255"

class ofApp : public ofBaseApp {

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofxOscReceiver      oscReceiver;
    ofxOscSender        oscSender;
    
    ofVideoGrabber      vidGrabber;
    unsigned char * 	videoBytesAltered;  // videos are just a bunch of pixels
    ofTexture			videoTexture;       // a texture in which to display the altered video
    int 				camWidth;           // camera width
    int 				camHeight;          // camera height
    int                 mouseEffect;

};
