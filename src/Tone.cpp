//
//  Tone.cpp
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#include "Tone.h"


void Tone::setup(){
    
    pd = new Destination("127.0.0.1", PD_PORT);
    sensor = new Sensor(this, SENSOR_PORT);
    
    pd->send("/s/test",1);
    
}

void Tone::update(){
    
    sensor->update();
    
}

void Tone::test(){
    cout << "tone::test" << endl;
    pd->send("/test" , 137);
    
}

