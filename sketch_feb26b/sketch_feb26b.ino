
char ch = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
       

}



void loop() {
  // put your main code here, to run repeatedly:

  
    if(Serial.available() > 0) //check for availability
  {
    ch = Serial.read(); // read ch or get char

    if(ch >= '0' && ch <= '9'){
        Serial.print("Character received:");
        Serial.println(ch);
        }else{
          Serial.print("Char not received");
          }
}

}
