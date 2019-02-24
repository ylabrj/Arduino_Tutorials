#define Pin13LED 13

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin13LED,OUTPUT);
  digitalWrite(Pin13LED,LOW);
}

void loop() {
   int loopcount;
  // put your main code here, to run repeatedly:
   loopcount = 0;
   // Run a loop turning on LED for 10 ms and off for 5 ms
   while (loopcount < 100){
      loopcount++;
      digitalWrite(Pin13LED,HIGH);
      delay(10);
      digitalWrite(Pin13LED,LOW);
      delay(5);
   }
   loopcount = 0;
   // Run a loop turning on LED for 2 ms and off for 20 ms
   while (loopcount < 100){
      loopcount++;
      digitalWrite(Pin13LED,HIGH);
      delay(2);
      digitalWrite(Pin13LED,LOW);
      delay(20);
   }
}
