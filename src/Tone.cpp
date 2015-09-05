//
//  Tone.cpp
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#include "Tone.h"


void Tone::setup(){
    
    playback = false;
    recording = false;

    
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



void Tone::setSensorValue(float spd, int round){
    
    
    float sp = spd;
    cout << sp << endl;
    
    if (sp<=0.003) sp = 0.0;
    else if (sp<=0.004) sp = 0.2;
    else if (sp<0.005) sp = 0.5;
    else if(sp>=0.005 && sp < 0.02) sp = 0.66;
    else if(sp>=0.02 && sp<0.15) sp = 1.0;
    else if(sp>=0.15 && sp<0.4) sp = 1.5;
    else if(sp>=0.4 && sp < 0.8) sp = 2.0;
    else if(sp>=0.8 && sp <1.5) sp = 2.5;
    else sp = 5; //sp>=1.5
    
    if(!playback&&!recording)pd->send("/s/scratch", sp);
    
    
}

void Tone::rec(bool flg){
    
    cout << "rec" << endl;
    if(flg){
        recording = true;
        pd->send("/s/play/ed" ,1);
        pd->send("/s/rec/st", 1);
        
    }
    else{
        pd->send("/s/rec/ed",1);
        
        
        recording=false;
//        playback = true;
//        pd->send("/s/play/ed",1);
//        pd->send("/s/play/st",1);
//        playback = false;
        

    }
}