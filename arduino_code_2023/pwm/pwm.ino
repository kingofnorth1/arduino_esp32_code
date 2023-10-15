int model = 9;
void setup(){
    Serial.begin(9600);
    pinMode(model,OUTPUT);
}
void loop(){
    for (int i=0;i<255;i++){
        analogWrite(model,i);
        delay(20);
    }
    delay(500);
    for (int i=255;i>=0;i--){
        analogWrite(model,i);
        delay(20);
    }
    delay(500);
    // analogWrite(model,0);
}