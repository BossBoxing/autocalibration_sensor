# Auto-Calibrate Sensors for Arduino
Auto Calibration Sensor Library for Arduino

This is Arduino Library for Calibrate, Find (Middle or Avg. Value) of Sensors.

Based on Arduino, Can try with any board based on Arduino

PASSED ON <a href="http://www.friendrobotshop.com/product/65/board-model-pro">FRIEND ROBOT BOARD (MODEL PRO)</a>

[![Passed - Model Pro](https://img.shields.io/badge/PASSED-Model_Pro-2ea44f)](http://www.friendrobotshop.com/product/65/board-model-pro)
![Support - AVR Arduino](https://img.shields.io/badge/SUPPORT-AVR_Arduino-2ea44f)
![LICENSE - MIT](https://img.shields.io/badge/LICENSE-MIT-2ea44f) <br/>
![AUTHOR - Boss.Dev](https://img.shields.io/badge/AUTHOR-BossBoxing-2ea44f)
![Source - Open Source](https://img.shields.io/badge/SOURCE-Open_Source-2ea44f)
![LASTEST - 0.3beta](https://img.shields.io/badge/LASTEST-0.3beta-2ea44f)
# Installation

- Download Here - <a href="https://github.com/BossBoxing/autocalibration_sensor/releases">Release</a>
- Add Library - <a href="https://support.arduino.cc/hc/en-us/articles/5145457742236-Add-libraries-to-Arduino-IDE">How to Add Library to Arduino IDE</a>
- Enjoy, We have 2 Example

# Function

```cpp
// Constructor
class AutoCalibrate(int n_Sensor, int* pPort, int* pReff)
// Debug Method
void showOutput(); // To Show All Output on Serial
void readSensor(); // To Read All Sensor on Serial
// Compute Method
void calibrate(int TimeToCalibrate); // To Compute sensor with Time (ms.)
```

Just try it with my example, it's very simple :D

# Example

1. Calibrate_Simple
   
   <a href="https://www.youtube.com/watch?v=JVZyO-eq-WA">Preview (Youtube Link)</a> 

2. Calibrate_Motor 
   
   (Test on Model Pro -> You can change #include <ModelPro.h> to your board.)

    <a href="https://www.youtube.com/watch?v=yv9DqHfQLeA">Preview (Youtube Link)</a>

3. Calibrate_TrackLine

   Calibrate sensor for The Follower Line Robot Example


# Are you have issue

You can ask me in Issue.
# To-Do

- Save Reff to EEPROM

# Contributor

- <a href="">Boss Hudsawat</a>
- ChatGPT ( VVIP - Support Me >< )

# Try Our Product

- <a href="https://www.friendrobot.co/">Friend Robot (Official)</a>
- <a href="http://www.friendrobotshop.com/">Friend Robot Shop</a>
# Support Me
if you like this repository, Please Star for support me. :D