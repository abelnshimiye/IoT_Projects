int analogPin = A0;
int sensorValue = 0;
int pinLED = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //open Serial Monitor to see poten values
  

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0); // for values from 0 to 1023

  int outputValue = map(sensorValue,0,1023,0,255); //
  analogWrite(analogPin,outputValue);
  analogWrite(pinLED, outputValue);
  Serial.print("Sensor =");
  Serial.println(sensorValue);
  Serial.print("value =");
  Serial.println(outputValue);
  //delay(1000);

}
