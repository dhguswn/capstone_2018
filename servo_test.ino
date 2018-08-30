#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;



void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
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
          //int i=2;
          for(int i=1;i<=8;i++){
          servo1.attach(2);
         if(i<=7){
           servo2.attach(3);
          if(i<=6){
            servo3.attach(4);
          if(i<=5){
            servo4.attach(5);
          if(i<=4){
            servo5.attach(6);
          if(i<=3){
            servo6.attach(44);
          if(i<=2){
            servo7.attach(45);
          if(i<=1){
             servo8.attach(46);
            }            
           }
            } 
          } 
          } 
          }
          }
           for(int i=0;i<180;i++){
          if(i<=7){
           servo2.write(i);
          if(i<=6){
            servo3.write(i);
          if(i<=5){
            servo4.write(i);
          if(i<=4){
            servo5.write(i);
          if(i<=3){
            servo6.write(i);
          if(i<=2){
            servo7.write(i);
          if(i<=1){
             servo8.write(i);
            }            
           }
            } 
          } 
          } 
          }
          } 
          delay(10);
          }          
        for(int i=180;i>0;i--){
          if(i<=7){
           servo2.write(i);
          if(i<=6){
            servo3.write(i);
          if(i<=5){
            servo4.write(i);
          if(i<=4){
            servo5.write(i);
          if(i<=3){
            servo6.write(i);
          if(i<=2){
            servo7.write(i);
          if(i<=1){
             servo8.write(i);
            }            
           }
            } 
          } 
          } 
          }
          } 
          delay(10);
          }
          if(i<=7){
           servo2.detach();
          if(i<=6){
            servo3.detach();
          if(i<=5){
            servo4.detach();
          if(i<=4){
            servo5.detach();
          if(i<=3){
            servo6.detach();
          if(i<=2){
            servo7.detach();
          if(i<=1){
             servo8.detach();
            }            
           }
            } 
          } 
          } 
          }
          } 
          delay(10); 
          }
          delay(1000);
          digitalWrite(13,HIGH);
          delay(1000);
          digitalWrite(13,LOW);
        }
     
