#include <Servo.h> // include external libroial from 
Servo myServo;  // create a servo object
int angle = 0;
#define pin 9
char ch = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(pin);  //atach servo to the pin number 9

}

void loop() {
  // put your main code here, to run repeatedly:
  //for (angle =0; angle<=180; angle++){
    //myServo.write(angle);
    //delay(3);
    //}

    //for (angle =180; angle>=0; angle--){
    //myServo.write(angle);
    //delay(3);
    //}

    if(Serial.available()> 0) {
    ch = Serial.read();
 

  if(ch == 'a' || ch == 'b'){
    for (angle =0; angle<=180; angle++){
    myServo.write(angle);
    delay(3);
    }

    for (angle =180; angle>=0; angle--){
    myServo.write(angle);
    delay(3);
    }
    }else if(ch == 'h' || ch == 'j'){
    myServo.write(angle);
      
   }

}
}
