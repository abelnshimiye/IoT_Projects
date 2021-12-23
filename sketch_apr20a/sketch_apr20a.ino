#include<arduino.h>
int pinLED1=2;
int pinLED2=3;
int pinLED3=4;
int pinLED4=5;
int pinLED5=6;
void setup() {
  // put your setup code here, to run once:
pinMode(pinLED1,OUPUT);
pinMode(pinLED2,OUPUT);
pinMode(pinLED3,OUPUT);
pinMode(pinLED4,OUPUT);
pinMode(pinLED5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pinMode(pinLED1,HIGH);
delay(2000);
pinMode(pinLED1,LOW);
delay(2000);
pinMode(pinLED2,HIGH);
delay(2000);
pinMode(pinLED2,LOW);
delay(2000);
pinMode(pinLED3,HIGH);
delay(2000);
pinMode(pinLED3,LOW);
delay(2000);
pinMode(pinLED4,HIGH);
delay(2000);
pinMode(pinLED4,LOW);
delay(2000);
pinMode(pinLED5,HIGH);
delay(2000);
pinMode(pinLED5,LOW);
delay(2000);
}
