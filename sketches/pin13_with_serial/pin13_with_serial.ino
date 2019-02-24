#define Pin13LED 13
int loopcount = 0;    //<<<<<<<<<< Define a variable

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin13LED,OUTPUT);
  digitalWrite(Pin13LED,LOW);
  Serial.begin(9600);  //<<<<<<<<<<<< Set up the serial port
}

void loop() {
  // put your main code here, to run repeatedly:
   loopcount++;      // <<<<<<<<<< C shorthand for loopcount = loopcount + 1
   digitalWrite(Pin13LED,HIGH);
   delay(100);       // <<<<<<<<<< Shorten the cycle time to 100 ms
   digitalWrite(Pin13LED,LOW);
   delay(100);       // <<<<<<<<<< Shorten the cycle time to 100 ms
   // <<<<<<<< Every 5th time through the loop, tell the world about it
   if ((loopcount % 5) == 0) {
      writeCount(loopcount);  // <<<<<<< Just for the heck of it, call a subroutine
   }
}

void writeCount(int x){
  Serial.println(x); 
}
