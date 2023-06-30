# Auto-Calibrate Sensors for Arduino
Auto Calibration Sensor Library for Arduino

This is Arduino Library for Calibrate, Find (Middle or Avg. Value) of Sensors.

Based on Arduino, Can try with any board based on Arduino

PASSED ON FRIEND ROBOT BOARD (MODEL PRO)

[![Passed - Model Pro](https://img.shields.io/badge/Passed-Model_Pro-2ea44f)](http://www.friendrobotshop.com/product/65/board-model-pro)
![Support - AVR Arduino](https://img.shields.io/badge/Support-AVR_Arduino-2ea44f)
![LICENSE - MIT](https://img.shields.io/badge/LICENSE-MIT-2ea44f)
![AUTHOR - Boss.Dev](https://img.shields.io/badge/AUTHOR-Boss.Dev-2ea44f)
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
   
   <a href="https://www.youtube.com/watch?v=DL4A0QbEVhE">Preview (Youtube Link)</a> 

2. Calibrate_Motor

    <a href="https://www.youtube.com/watch?v=yv9DqHfQLeA">Preview (Youtube Link)</a> 

# Contributor

- <a href="">Boss Hudsawat</a>

# Try our Product

- <a href="https://www.friendrobot.co/">Friend Robot (Official)</a>
- <a href="http://www.friendrobotshop.com/">Friend Robot Shop</a>

# Are you have issue

You can ask me in Issue.
# To-Do

- Save Reff to EEPROM
# Support Me
Are you like this repository, Please Star for support me. :D