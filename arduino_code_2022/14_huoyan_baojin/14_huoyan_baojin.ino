int flame=A5;
int Beep=8;
int val=0;
void setup(){
  pinMode(Beep,OUTPUT);
  pinMode(flame,INPUT);
  Serial.begin(9600);
}
void loop(){
  val=analogRead(flame);
//  Serial.println(val);
  Serial.println(val);
  if (val<=600){
    digitalWrite(Beep,HIGH);
    delay(1);
    digitalWrite(Beep,LOW);
    delay(1);
  }
  else{
    digitalWrite(Beep,LOW);
  }
  delay(500);
}
