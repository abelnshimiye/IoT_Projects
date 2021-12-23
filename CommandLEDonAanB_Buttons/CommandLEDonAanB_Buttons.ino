#define pinLED 8

char ch = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()> 0) {
    ch = Serial.read();
 

  if(ch == 'a' || ch == 'b'){
    digitalWrite(pinLED,HIGH);
    Serial.print("ON");
    }else if(ch == 'h' || ch == 'j'){
      digitalWrite(pinLED,LOW);
      Serial.print("OFF");
      
      }
 }
}
