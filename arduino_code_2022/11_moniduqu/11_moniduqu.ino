int potpin=0;
int ledpin=10;
int val=0;
void setup(){
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  val=analogRead(potpin);
  Serial.println(val);
  analogWrite(ledpin,val/4);
  delay(10);
}
