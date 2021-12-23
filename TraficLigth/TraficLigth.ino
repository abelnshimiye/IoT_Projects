
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
  digitalWrite(pinLED2,HIGH); //Red first Road
  digitalWrite(pinLED6,HIGH);//Green Second Road
  digitalWrite(pinLED7,LOW);//Orange Second Road
  digitalWrite(pinLED3,LOW);// Green first Road
  digitalWrite(pinLED5,LOW);//Orange Second Road
  digitalWrite(pinLED4,LOW);//Orange first Road
  delay(10000);
  
  digitalWrite(pinLED2,HIGH); //Red first Road
  digitalWrite(pinLED6,HIGH);//Green Second Road
  digitalWrite(pinLED7,HIGH);//Orange Second Road
  digitalWrite(pinLED3,LOW);// Green first Road
  digitalWrite(pinLED5,LOW);//Orange Second Road
  digitalWrite(pinLED4,LOW);//Orange first Road
  delay(3000);
  
  digitalWrite(pinLED2,LOW); //Red first Road
  digitalWrite(pinLED6,LOW);//Green Second Road
  digitalWrite(pinLED7,LOW);//Orange Second Road
  digitalWrite(pinLED3,HIGH);// Green first Road
  digitalWrite(pinLED5,HIGH);//Orange Second Road
  digitalWrite(pinLED4,LOW);//Orange first Road
   delay(10000);
   
  digitalWrite(pinLED2,LOW); //Red first Road
  digitalWrite(pinLED6,LOW);//Green Second Road
  digitalWrite(pinLED7,LOW);//Orange Second Road
  digitalWrite(pinLED3,HIGH);// Green first Road
  digitalWrite(pinLED5,HIGH);//Orange Second Road
  digitalWrite(pinLED4,HIGH);//Orange first Road
  delay(3000);
}
