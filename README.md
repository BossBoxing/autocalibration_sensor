# Auto-Calibrate Sensors for Arduino
Auto Calibration Sensor Library for Arduino

This is Arduino Library for Calibrate, Find (Middle or Avg. Value) of Sensors.

Based on Arduino, Can try with any board based on Arduino

PASSED ON <a href="http://www.friendrobotshop.com/product/65/board-model-pro">FRIEND ROBOT BOARD (MODEL PRO)</a>

[![Passed - Model Pro](https://img.shields.io/badge/PASSED-Model_Pro-2ea44f)](http://www.friendrobotshop.com/product/65/board-model-pro)
![Support - AVR Arduino](https://img.shields.io/badge/SUPPORT-AVR_Arduino-2ea44f)
![LICENSE - MIT](https://img.shields.io/badge/LICENSE-MIT-2ea44f)
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

# Part of Robot, We use for testing

- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4a1/512.gif" alt="💡" width="20" height="20"> Board : <a href="http://www.friendrobotshop.com/product/65/board-model-pro">FRIEND ROBOT BOARD MODEL PRO</a>
- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f440/512.gif" alt="👀" width="20" height="20"> Sensor : 5 <a href="http://www.friendrobotshop.com/product/17/%E0%B9%80%E0%B8%8B%E0%B8%99%E0%B9%80%E0%B8%8B%E0%B8%AD%E0%B8%A3%E0%B9%8C%E0%B8%95%E0%B8%A3%E0%B8%A7%E0%B8%88%E0%B8%88%E0%B8%B1%E0%B8%9A%E0%B9%81%E0%B8%AA%E0%B8%87%E0%B8%9E%E0%B8%B7%E0%B9%89%E0%B8%99%E0%B8%9C%E0%B8%B4%E0%B8%A7%E0%B8%A7%E0%B8%B1%E0%B8%95%E0%B8%96%E0%B8%B8-%E0%B9%81%E0%B8%9A%E0%B8%9A%E0%B8%95%E0%B9%88%E0%B8%AD%E0%B8%AA%E0%B8%B2%E0%B8%A2%E0%B9%81%E0%B8%99%E0%B8%A7%E0%B8%99%E0%B8%AD%E0%B8%99">Red Analog Reflective Sensor </a> (Port -> A1 - A5)
- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f9bf/512.gif" alt="🦿" width="20" height="20"> Motor : 2 <a href="http://www.friendrobotshop.com/product/138/%E0%B8%A1%E0%B8%AD%E0%B9%80%E0%B8%95%E0%B8%AD%E0%B8%A3%E0%B9%8C-16ga-500-rpm-%E0%B8%9E%E0%B8%A3%E0%B9%89%E0%B8%AD%E0%B8%A1%E0%B8%AA%E0%B8%B2%E0%B8%A2">6v 400rpm DC Motor</a> (Port -> Left=1, Right=2)

# Examples

1. Calibrate_Simple
   
   <a href="https://www.youtube.com/watch?v=JVZyO-eq-WA">Preview (Youtube Link)</a> 

2. Calibrate_Motor 
   
   (Test on Model Pro -> You can change #include <ModelPro.h> to your board.)

    <a href="https://www.youtube.com/watch?v=yv9DqHfQLeA">Preview (Youtube Link)</a>

3. Calibrate_TrackLine

   Calibrate sensor for The Follower Line Robot Example


# Are you have issue

You can ask me in Issues.
# To-Do

- Save Reff to EEPROM (Source, Example)
- Thai Documentation

# Contributors

- <a href="">Boss Hudsawat</a>
- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/2728/512.gif" alt="✨" width="20" height="20">ChatGPT (Super Consultant ><)

# Try Our Product

- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f916/512.gif" alt="🤖" width="20" height="20">  <a href="https://www.friendrobot.co/">Friend Robot (Official)</a>
- <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f916/512.gif" alt="🤖" width="20" height="20">  <a href="http://www.friendrobotshop.com/">Friend Robot Shop</a>
# Support Me
if you like this repository, Please Give me a <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f31f/512.gif" alt="🌟" width="20" height="20"> star for support me. :D
