#pragma once
#include <stdint.h>
#ifndef autocalibration_h
#define autocalibration_h

class Calibrate {

  public:
    // commonly used functions ************************************************************************************

    // Default constructor
    Calibrate();
    
    void Calibrate(int n_sensor, int *sensor[])

    

  private:
    int sensor[];
    int n_sensor;
    

};
#endif