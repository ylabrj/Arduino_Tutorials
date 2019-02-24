#define Pin13LED 13

void setup() {

  pinMode(Pin13LED,OUTPUT);
  digitalWrite(Pin13LED,LOW);
}

void loop() {

   digitalWrite(Pin13LED,HIGH);
   delay(1000);
   digitalWrite(Pin13LED,LOW);
   delay(1000);
}
