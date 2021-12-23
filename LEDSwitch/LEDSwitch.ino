
int pinLED2 = 2;
int pinLED3 = 3;
int pinLED4 = 4;
int pinLED5 = 5;
int pinLED6 = 6;
int pinLED7 = 7;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(pinLED2,OUTPUT);
  pinMode(pinLED3,OUTPUT);
  pinMode(pinLED4,OUTPUT);
  pinMode(pinLED5,OUTPUT);
  pinMode(pinLED6,OUTPUT);
  pinMode(pinLED7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(pinLED2,HIGH);
  delay(100);
  digitalWrite(pinLED2,LOW);

  digitalWrite(pinLED3,HIGH);
  delay(100);
  digitalWrite(pinLED3,LOW);

  digitalWrite(pinLED4,HIGH);
  delay(100);
  digitalWrite(pinLED4,LOW);
  digitalWrite(pinLED5,HIGH);
  delay(100);
  digitalWrite(pinLED5,LOW);
  digitalWrite(pinLED6,HIGH);
  delay(100);
  digitalWrite(pinLED6,LOW);
  digitalWrite(pinLED7,HIGH);
  delay(100);
  digitalWrite(pinLED7,LOW);
  
  

}
