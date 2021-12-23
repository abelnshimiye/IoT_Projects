#include <Arduino.h>
char myChar; // for incoming serial data
int pinLED = 13;

void setup() {
Serial.begin(9600); // open serial port, and set the data rate to 9600 bps
pinMode(pinLED,OUTPUT); // tell pinLED is output
digitalWrite(pinLED, LOW); // switch pinLED off
}

void loop() {
  //
  if (Serial.available() > 0) {
    // read the incoming data
  myChar  = Serial.read();
  // print what you read
  Serial.print("Received character is ");
  Serial.println(myChar);
  }
  if (myChar == 's') {
    digitalWrite(pinLED, HIGH);
  } else if(myChar == 'o') {
    digitalWrite(pinLED, LOW);
  }
}
