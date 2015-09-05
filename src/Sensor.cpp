//
//  Pd.cpp
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#include "Sensor.h"

using namespace std;


void Sensor::fireMessage(ofxOscMessage *m){
    
    if(m->getAddress() == "/sensor_val"){
        cout << "test" << endl;
        float fnum = m->getArgAsFloat(0);
        sys->test();
    }
  
}
