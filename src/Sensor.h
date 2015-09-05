//
//  Pd.h
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#ifndef __tone_r2__Pd__
#define __tone_r2__Pd__



#include <stdio.h>
#include "slOscManager.h"
#include "Tone.h"
class Tone;




class Sensor : public slOscManager {
    
    public:
        Sensor(Tone *p , int port) : slOscManager(port){
            
            sys = p;
            
        }

        void setup(){
            
        }

    
        void update(){
            slOscManager::update();
            
        }
    
        void fireMessage(ofxOscMessage *m);
        Tone *sys;
    
};

#endif /* defined(__tone_r2__Pd__) */
