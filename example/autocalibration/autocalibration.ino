/*******************************
- Topic: Auto-Calibration Reflective Sensors
- By:    Boss.Dev (Friend Robot)
********************************/

#include <ModelPro.h>

#define LL analog(0)
#define L analog(2)
#define R analog(4)
#define RR analog(6)

int reff[] = {0, 0, 0, 0};

void set_reff(int *reff, int value){
  *reff = value;
  Serial.println("Changed!");
}

void get_reff(){
  Serial.println("Get Reff : ");
  for (int i=0; i<4; i++) {
    Serial.println(reff[i]);
  }
  Serial.println("************");
}

void setup() {
  Serial.begin(115200);

}

void loop() {
  set_reff(&reff[0], 105);
  get_reff();
  delay(1000);
  set_reff(&reff[0], 501);
  get_reff();
  delay(1000);
}
