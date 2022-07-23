int flag = 0;
boolean toggle_state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
  pinMode(7,OUTPUT);
}

void loop() {
  if(digitalRead(4) == 0){
    if(flag == 0){
      flag = 1;
      toggle_state = !toggle_state;
    }
  }
  else{
    if(flag == 1){
      flag = 0;
    }
  }

  if(toggle_state){
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(7,LOW);
  }
  
}
