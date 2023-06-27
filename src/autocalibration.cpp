#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "autocalibration.h"

/* Default Construction*/
Calibrate::Calibrate() {
    n_sensor = 0;
    sensor[]={};
}

/* Default Construction*/
Calibrate::Calibrate(int n_sensor, int *sensor[]) {
    n_sensor = 0;
    sensor[] = *sensor[];
}