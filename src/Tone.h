//
//  Tone.h
//  tone_r2
//
//  Created by sonir on 9/5/15.
//
//

#ifndef __tone_r2__Tone__
#define __tone_r2__Tone__

#define PD_PORT 57110
#define SENSOR_PORT 5678

#include <stdio.h>
#include "Sensor.h"
class Sensor;

class Tone {
    
    public:
    
    void setup();
    void update();
    void test();
    void newValue(float &val);

    
    Sensor *sensor;
    Destination *pd;
    
    
};


#endif /* defined(__tone_r2__Tone__) */
