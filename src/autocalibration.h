#pragma once
#include <stdint.h>
#ifndef AutoCalibration_h
#define AutoCalibration_h

class AutoCalibrate {

  public:
    // Default constructor
    AutoCalibrate();
    
    // constructor
    AutoCalibrate(int n_Sensor, int* pPort, int* pReff);

    // Debug
    void showOutput();
    void readSensor();

    // compute
    void calibrate(int TimeToCalibrate);
    
  private:
    int n_sensor;
    int* pPort;
    int* pReff;


};
#endif