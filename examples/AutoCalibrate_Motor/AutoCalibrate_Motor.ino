/************************
Topic : AutoCalibrate_Motor
Author : Boss (Hudsawat Akkati) @ Friend Robot
Website : https://www.friendrobot.co/
************************/

#include <ModelPro.h>
#include <AutoCalibration.h>

/****************
Configuration
*****************/
int reff[5]={0, 0, 0, 0, 0};        // Avg. Sensors.
int sensorPort[5]={1, 2, 3, 4, 5};  // [Analog Only!] Ports Sensor. Example [A1 - A5]
#define n_sensor 5                  // n of Sensor.

// initial our Calibrate method to call AutoCalibrate Class.
AutoCalibrate Calibrate(n_sensor, &sensorPort[0], &reff[0]);

void setup() {

  Serial.begin(115200);
}

void loop() {
  // Show Before Reff Values
  Serial.println(" [Before] Reff :");
  for (int i=0; i<n_sensor; i++){
    Serial.println(reff[i]);
  }

  // Start Turn Left for Compute sensor
  motor(1, -40); motor(2, 40);

  // Compute 5 second [5000 ms = 5 s]
  Calibrate.calibrate(5000);
  delay(1000);

  // Stop Motor
  motor(1, 0); motor(2, 0);

  // Show After Reff Values
  Serial.println(" [After] Output Reff :");
  for (int i=0; i<n_sensor; i++){
    Serial.println(reff[i]);
  }

  // Pause loop
  while(1);
}
