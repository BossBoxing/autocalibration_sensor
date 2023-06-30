/************************
Topic : AutoCalibrate_TrackLine
Author : Boss (Hudsawat Akkati) @ Friend Robot
Website : https://www.friendrobot.co/
************************/
#include <ModelPro.h>               // motor() function
#include <AutoCalibration.h>

/****************
Configuration
*****************/
int reff[5]={0, 0, 0, 0, 0};        // Avg. Sensors.
int sensorPort[5]={1, 2, 3, 4, 5};  // [Analog Only!] Ports Sensor. Example [A1 - A5]
#define n_sensor 5                  // n of Sensor.

// initial our Calibrate method to call AutoCalibrate Class.
AutoCalibrate Calibrate(n_sensor, &sensorPort[0], &reff[0]);

void trackLine() {
  if (analogRead(sensorPort[1]) < reff[1] && analogRead(sensorPort[3]) < reff[3]){ fd(30); }
  if (analogRead(sensorPort[1]) > reff[1] && analogRead(sensorPort[3]) > reff[3]){ fd(30); }
  if (analogRead(sensorPort[1]) < reff[1] && analogRead(sensorPort[3]) > reff[3]){ sl(30); }
  if (analogRead(sensorPort[1]) > reff[1] && analogRead(sensorPort[3]) < reff[3]){ sr(30); }
}

void setup() {

  Serial.begin(115200);

  // Show Before Reff Values
  Serial.println(" [Before] Reff :");
  for (int i=0; i<n_sensor; i++){
    Serial.println(reff[i]);
  }
  
  // Compute 5 second [5000 ms = 5 s]
  Calibrate.calibrate(5000);
  delay(1000);

  // Show After Reff Values
  Serial.println(" [After] Output Reff :");
  for (int i=0; i<n_sensor; i++){
    Serial.println(reff[i]);
  }
}

void loop() {
  trackLine();
}
