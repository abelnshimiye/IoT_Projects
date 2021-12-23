//int pinLED =13;  //WE CREATE A  pin which is correspond of the digital output
#define pinLED 13  // a nothter way to use for initialization our pinLED we con also use 13 direct


void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinLED,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED,HIGH); //swich on the LED
  delay(1000); // we put a delay between ON and OFF
  digitalWrite(pinLED,LOW); // Swich off the LED
  delay(1000);
}
