void setup() {
  Serial.begin(9600);
  
}
void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);

  if(lightValue<200){
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }
  
}
