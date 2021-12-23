void sum1(); //declare of functon
int i = 0;
int n = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //sum1();

  // loop FOR WHILE an DO ... WHILE
Serial.print("***************************************************FOR");
  for(int i= 0; i<10; i++){
    Serial.print("i =");
    Serial.println(i);
    delay(100);
    }
Serial.print("***************************************************WHILE");
Serial.println("..");
    while(i<=10){
      Serial.print("i =");
    Serial.println(i);
    delay(100);
    i++;
      }
Serial.print("***************************************************DO ... WHILE");
do {
    Serial.print("n =");
    Serial.println(n);
    delay(10);
    n++;
        }while(n<=10);

Serial.print("Radom  numbers betwen 0 and 10");
      int  nb =random(10);
Serial.println(nb);

}

void loop() {
  // put your main code here, to run repeatedly:
//sum1();
//delay(500);
}

void sum1(){
  int a,b,sum;
  a =70;
  b = 100;
  sum = a + b;
  Serial.print(sum);
  }
