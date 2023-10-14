int yellowpin=5;
int greenpin=6;
int redpin=7;
int writerled=9;
int yellowled=8;
int redled=10;
int yellow;
int writer;
int red;
void setup(){
  pinMode(yellowpin,INPUT);
  pinMode(greenpin,INPUT);
  pinMode(redpin,INPUT);
  pinMode(writerled,OUTPUT);
  pinMode(yellowled,OUTPUT);
  pinMode(redled,OUTPUT);
}
void loop(){
  yellow=digitalRead(yellowpin);
  if (yellow==HIGH){
    digitalWrite(yellowled,HIGH);
  }
  else {
    digitalWrite(yellowled,LOW);
  }
  writer=digitalRead(greenpin);
  if (writer==HIGH){
    digitalWrite(writerled,HIGH);
  }
  else {
    digitalWrite(writerled,LOW);
  }
  red=digitalRead(redpin);
  if (red==HIGH){
    digitalWrite(redled,HIGH);
  }
  else {
    digitalWrite(redled,LOW);
  }
}
