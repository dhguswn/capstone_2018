#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial voiceSerial(8,7);


void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  while(!Serial1){Serial.println("Start");}
  delay(10);  
  voiceSerial.begin(9600);
  voiceSerial.listen();
}

char data,id,accuracy;

void loop() {
   if(voiceSerial.available() > 1){
    id       =voiceSerial.read();
    accuracy =voiceSerial.read();    
    switch(id){
      case '0': //�븞�뀞
         Serial1.write(id); //
         Serial.println(id);
         delay(500);
         break;
      case '1': //
         Serial1.write(id);
         Serial.println(id);
         delay(500);
         break;
      /*case '2': //
         leo.write(*/
      
      }
      id = -1;
   }
  else{
    Serial.println("voiceSerialNO");
    }

  delay(1000);
}

//SoftwareSerial voiceSerial(8, 7);   // Rx, Tx
// 
// 
//void setup()
//{  
//  Serial.begin(9600);
//  while (!Serial) {
//    ;
//  }
// 
//  voiceSerial.begin(9600);
//  voiceSerial.listen();
//}
// 
// 
//char id, accuracy;
// 
//void loop()
//{  
//  if (voiceSerial.available() > 1) {
//    id       = voiceSerial.read();
//    accuracy = voiceSerial.read();
//    
//    Serial.print((char)id);
//    Serial.print(", ");
//    Serial.println(accuracy, DEC);
//  }
//}
