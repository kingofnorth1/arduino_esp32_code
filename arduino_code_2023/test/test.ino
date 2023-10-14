void setup(){
    pinMode(9,OUTPUT);
    digitalWrite(9,LOW);
}

void loop(){
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);
}