
#define ARRAYSIZE(x) (sizeof(x)/sizeof(x[0]))
int arr[]={2,3,4,5,6,7};


void setup() {
  // put your setup code here, to run once:
for(int i =0;i<ARRAYSIZE(arr);i++){
pinMode(arr[i],OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for(int j=0; j<ARRAYSIZE(arr);j++){
    digitalWrite(arr[j],HIGH);
    delay(200);
    digitalWrite(arr[j],LOW);
    delay(200);
    }

}
