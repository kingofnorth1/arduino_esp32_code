int ledpin=11;
int inpin=7;
int val;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(inpin,INPUT);
}

void loop() {
  val=digitalRead(inpin);
  delay(30);
  if(val==LOW){
    digitalWrite(ledpin,LOW);
  }
  else if(val==HIGH){
    digitalWrite(ledpin,HIGH);  
  }
  delay(30);
}
