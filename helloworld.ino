#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
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
        if(j==2){for(int a=0;a<155;a++){
          servo1.write(a);
          delay(10);
          }
       for(int b=0;b<45;b++){
        servo2.write(b);
        delay(10);
       }
       for(int c=0;c<67;c++){
        servo3.write(c);
        delay(10);
       }
      for(int d=0;d<45;d++){
        servo4.write(d);
        delay(10);
      }
      for(int e=0;e<177;e++){
        servo5.write(e);
        delay(10);
      }
    }
    if(j==7){for(int a=0;a<1;a++){
          servo1.write(a);
          delay(10);
          }
       for(int b=0;b<177;b++){
        servo2.write(b);
        delay(10);
       }
       for(int c=0;c<1;c++){
        servo3.write(c);
        delay(10);
       }
      for(int d=0;d<133;d++){
        servo4.write(d);
        delay(10);
      }
      for(int e=0;e<45;e++){
        servo5.write(e);
        delay(10);
      }
    }
    if(j==12}{for(int a=0;a<45;a++){
          servo1.write(a);
          delay(10);
          }
       for(int b=0;b<177;b++){
        servo2.write(b);
        delay(10);
       }
       for(int c=0;c<133;c++){
        servo3.write(c);
        delay(10);
       }
      for(int d=0;d<45;d++){
        servo4.write(d);
        delay(10);
      }
      for(int e=0;e<177;e++){
        servo5.write(e);
        delay(10);
      }}}
