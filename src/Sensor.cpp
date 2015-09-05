//
//  Pd.cpp
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#include "Sensor.h"

//using namespace std;


void Sensor::fireMessage(ofxOscMessage *m){
    
    if(m->getAddress() == "/sensor_val"){
        cout << "test" << endl;
        float fnum = m->getArgAsFloat(0);
        sys->test();
    }else if(m->getAddress() == "/acs/motion"){

        int round = m->getArgAsInt32(0);
        float spd = m->getArgAsFloat(1);
        
        sys->setSensorValue(spd, round);
        
    }else if(m->getAddress() == "/rec_sw"){
        
        int flg = m->getArgAsInt32(0);
        
        if(flg)sys->rec(true);
        else sys->rec(false);
        
    }
    
  
}
