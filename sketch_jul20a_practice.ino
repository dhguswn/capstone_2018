#include <Servo.h>

int servoPin=5;
int angle=0;

Servo servo1;

void setup() {
  servo1.attach(servoPin);
  int angle=0;
}

void loop() {
  for(angle=0;angle<180;angle++){
    servo1.write(angle);
    delay(5);
    }
  for(angle=180;angle>0;angle--){
    servo1.write(angle);
    delay(5);
    }
  delay(400);
}
