int led=8;
int qx=5;
int num;
void setup(){
  pinMode(led,OUTPUT);
}
void loop(){
  while(1){
    num=analogRead(qx);
    if (num>200){
      digitalWrite(led,HIGH);
    }
    else {
      digitalWrite(led,LOW);
    }
//    delay(500);
    break;
  }
}
