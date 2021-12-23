int pinLED =13;
int buttonPin = 2;


void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(pinLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonValue = 0;
  buttonValue = digitalRead(buttonPin);
  
  if(buttonValue == HIGH){
    digitalWrite(pinLED,HIGH);
    
    }else{
      digitalWrite(pinLED,LOW);
      
      }

}
