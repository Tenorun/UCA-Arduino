void setup() {
  pinMode(10,OUTPUT);
}

void loop() {
  for(int i=0; i<256;i++){
    analogWrite(9,i);
    delay(3);
  }
  for(int i=255; i>=0;i--){
    analogWrite(9,i);
    delay(3);
  }
}
