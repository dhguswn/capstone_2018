#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int id,button=43;

void setup() {
  Serial.begin(9600);
  Serial.println("HELLO");
  pinMode(button,INPUT);
 }

void loop() {
  if(Serial.available()){
    id=Serial.read();
    Serial.println(id);
    switch(id){
      case 48:
        buttonState=digitalRead(button);
        /*for(int i=2;i<13;i+=5){
          servo1.attach(i);
          servo2.attach(i+1);
         if(i==12){
          servo3.attach(44);
          servo4.attach(45);
          servo5.attach(46);
         }
         else{
          servo3.attach(i+2);
          servo4.attach(i+3);
          servo5.attach(i+4);
          }
        for(int i=0;i<180;i++){
          servo1.write(i);
          servo2.write(i);
          servo3.write(i);
          servo4.write(i);
          servo5.write(i);
          delay(10);
          }          
        for(int i=180;i>0;i--){
          servo1.write(i);
          servo2.write(i);
          servo3.write(i);
          servo4.write(i);
          servo5.write(i);
          delay(10);
          }
          servo1.detach();
          servo2.detach();
          servo3.detach();
          servo4.detach();
          servo5.detach();
          delay(100);
        }*/
        /*if(buttonState==HIGH){
          servo1.attach();
          }*/
          break;
      case 49:
       /* servo1.attach(9);
        servo2.attach(10);
        //servo3.attach(11);
        for(int i=0;i<90;i++){
          servo1.write(i);
          servo2.write(i);
          delay(10);
          }          
        for(int i=90;i>0;i--){
          servo1.write(i);
          servo2.write(i);
          delay(10);
          }
          servo1.detach();
          servo2.detach();
          delay(50);*/
          break;
      }
        
    
    }
  delay(1000);
}
