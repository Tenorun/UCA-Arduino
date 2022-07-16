void setup() {
  pinMode(A0,OUTPUT);

}

void loop() {
  int i;
  for(i=0; i<=255; i++){
    analogWrite(5,i);
    delay(10);
  }
  for(; i>=0; i--){
    analogWrite(5,i);
    delay(10);
  }

}
