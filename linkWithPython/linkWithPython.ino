void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i<=30;i++){
    Serial.print("i = ");
    Serial.println(i);
    delay(2000);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
