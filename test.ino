int timer = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  timer++;
  digitalWrite(1,timer&0x01);
  digitalWrite(2,timer&0x02);
  digitalWrite(3,timer&0x04); 

  delay(1000);
}
