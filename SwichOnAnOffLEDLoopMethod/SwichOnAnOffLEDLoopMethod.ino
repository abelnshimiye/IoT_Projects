int pinLED;

void setup() {
  // put your setup code here, to run once:

  for(pinLED = 2; pinLED<=7; pinLED++){
    pinMode(pinLED,OUTPUT);
    
    }

}

void loop() {
  // put your main code here, to run repeatedly:

for(pinLED =2; pinLED <= 7; pinLED++){
  digitalWrite(pinLED,HIGH);
  delay(50);
  digitalWrite(pinLED,LOW);
  
  }
  for(pinLED =7; pinLED >= 2; pinLED--){
  digitalWrite(pinLED,HIGH);
  delay(100);
  digitalWrite(pinLED,LOW);
  
  }
}
