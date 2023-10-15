int led = 9;

void setup(){
    Serial.begin(9600);
    pinMode(led,OUTPUT);
    digitalWrite(led,LOW);
    Serial.print("begin...");
}

void loop(){
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    int number = random(500,1500);
    // Serial.print("number:"+number);
    Serial.println(number);
    delay(number);
}