// Four Key Sections
// __Section 1: Constants and global variables__

// We're going to use Pin 13 on the board, which has a built-in LED and resistor
#define Pin13LED  13

// __Section 2: Intitialisation/setup__
void setup() {     //Note the opening squiggly bracket
   // Function to set the
   // CASE is Critical in C programming. Type EXACTLY!!! as written
   // We're setting up the pin for OUTPUT. 
   // Note the ; at the end of every line
   pinMode(Pin13LED,OUTPUT);  // Standard pinMode function
   // Set the pin to 0 volts (LOW). Opposite is high (5V)
   digitalWrite(Pin13LED, LOW);
}  // End setup()   

//__Section 3: The main loop__ that executes forever
void loop() {
   digitalWrite(Pin13LED,HIGH);  // Turn on the LED
   delay(1000);                  // Sleep for 1000 milliseconds
   digitalWrite(Pin13LED,LOW);   // Turn off the LED
   delay(1000);                  // Sleep off another second
}   // End loop()

//__Section 4: Any subroutines and Interrupt Service Routines (ISR)__
// We don't have any right now
