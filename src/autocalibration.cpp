#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "AutoCalibration.h"

/* Default Construction*/
AutoCalibrate::AutoCalibrate()
{
    // n_sensor = 0;
    // sensor[]={};
}

/* Default Construction*/
AutoCalibrate::AutoCalibrate(int n_Sensor, int *Ports, int *Reffs)
{
    n_sensor = n_Sensor;
    pPort = Ports;
    pReff = Reffs;
}

/* Debug */
void AutoCalibrate::showOutput()
{
    Serial.println("***************");
    Serial.println("Show Output");
    for (int i = 0; i < n_sensor; i++)
    {
        Serial.print("Port : ");
        Serial.print(i);
        Serial.print(" : ");
        Serial.println(pPort[i]);
    }
    Serial.println("*******");
    for (int i = 0; i < n_sensor; i++)
    {
        Serial.print("Reff : ");
        Serial.print(i);
        Serial.print(" : ");
        Serial.println(pReff[i]);
    }
    Serial.println("***************");
}
void AutoCalibrate::readSensor()
{
    Serial.println("Read Sensor");
    for (int i = 0; i < n_sensor; i++)
    {
        Serial.print("A");
        Serial.print(pPort[i]);
        Serial.print(" : ");
        Serial.println(analogRead(pPort[i]));
    }
    Serial.println("***************");
}

/* Caribrate Function */
void AutoCalibrate::calibrate(int TimeToCalibrate)
{
    int Min[n_sensor];
    int Max[n_sensor];

    // Set Default Values
    for (int i = 0; i < n_sensor; i++)
    {
        Min[i] = 1023;
    }
    for (int i = 0; i < n_sensor; i++)
    {
        Max[i] = 0;
    }

    // Compute the Min/Max Values.
    unsigned long currentTime = millis();
    while (millis() - currentTime <= TimeToCalibrate)
    {
        // Find Minimun
        for (int i = 0; i < n_sensor; i++)
        {
            if (analogRead(pPort[i]) < Min[i]){
                Min[i] = analogRead(pPort[i]);
            }
        }

        // Find Maximum
        for (int i = 0; i < n_sensor; i++)
        {
            if (analogRead(pPort[i]) > Max[i]){
                Max[i] = analogRead(pPort[i]);
            }
        }
    }

    // Debug
    Serial.print("Minimun Values \n");
    for (int i = 0; i < n_sensor; i++)
    {
        Serial.println(Min[i]);
    }
    Serial.print("Maximum Values \n");
    for (int i = 0; i < n_sensor; i++)
    {
        Serial.println(Max[i]);
    }

    // Find and Replace - Avg. of Sensor.
    for (int i = 0; i < n_sensor; i++)
    {
        pReff[i] = int((Min[i] + Max[i]) / 2);
    }
    
    
}