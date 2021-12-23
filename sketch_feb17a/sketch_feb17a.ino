void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

int mum1, mum2, sum;
mum1 = 90;
mum2 = 100;

sum = mum1 + mum2;

Serial.print(sum);

Serial.print("\n");
int arr[] = {14,78,78,78,78,58,63,66};

for(int i = 0; i<8; i++){
  Serial.println(arr[i]);
}

char nom[] = {"Union;
","U","Union","Uon","Un"}


}

void loop() {
  // put your main code here, to run repeatedly:

}
