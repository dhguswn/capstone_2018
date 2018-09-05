#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
    for(int j=2;j<13;j+=5){
          servo1.attach(j);
          servo2.attach(j+1);
         if(j==12){
          servo3.attach(44);
          servo4.attach(45);
          servo5.attach(46);
         }
         else{
          servo3.attach(j+2);
          servo4.attach(j+3);
          servo5.attach(j+4);
          }
        for(j==2){
          servo1.write(0);
          servo2.write(0);
          for(int i=0;i<132;i++){
          servo3.write(i);
          }
          servo4.write(0);
          for(int i=0;i<110;i++){
          servo5.write(i);
          }         
        }
        for(j==7){
          for(int i=0;i<44;i++){
            servo1.write(i);
            }
          for(int i=0;i<110;i++){
            servo2.write(i);
          }
          for(int i=0;i<132;I++){
            servo3.write(i);
          }
          for(int i=0;i<110;i++){
            servo4.write(i);
          }
          for(int i=0;i<44;i++){
            servo5.write(i);
          }
          }
        for(j==12){
          for(int i=0;i<88;i++){
            servo1.write(i);
            }
          for(int i=0;i<132;i++){
            servo2.write(i);
            }
          for(int i=0;i<44;i++){
            servo3.write(i);
            }
          for(int i=0;i<66;i++){
            servo4.write(i);
            }
          for(int i=0;i<66;i++){
            servo5.write(i);
            }
          }
          servo1.detach();
          servo2.detach();
          servo3.detach();
          servo4.detach();
          servo5.detach();
        }
        }
