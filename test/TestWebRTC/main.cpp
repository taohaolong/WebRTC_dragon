//
//  main.cpp
//  WebRTC_Dragon
//
//  @Des:WebRTC for Test Algthrom and  Transport
//
//  Created by tao Jacky on 11/3/16.
//  Copyright © 2016 tao Jacky. All rights reserved.
//

#include <stdio.h>


#include "wqos/overuse_detector_test.hpp"

using namespace webrtc;


class Dragon
{
public:
    Dragon();
    ~Dragon();
};


void dragonInfo()
{
    printf("Dragon © Neteas.com \n \n");
    
    printf("WebRTC for Test Algthrom and  Transport \n");
    
}


int testWQos()
{
    OveruseDetectorTest  overuseDetectorTest;
    
 
    overuseDetectorTest.GaussionRandom();
    

//    overuseDetectorTest.SimpleNonOveruse30fps();
    
    return 0;
}

int Init()
{
    
    // mac
    // ios
    // windows
    // unix
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    dragonInfo();
   
    testWQos();
    return 0;
}
