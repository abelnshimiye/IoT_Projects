#include <Arduino.h>
#define pinLED 11
int i;
//int n;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(pinLED, HIGH);
  //delay(1000);
  //digitalWrite(pinLED,LOW);
  //delay(1000);

  for(i=0; i<=25; i++){
    analogWrite(pinLED, i);
    delay(100);
    }



for( i=25; i>=0; i--){
  analogWrite(pinLED, i);
    delay(100);
  }
    

}
