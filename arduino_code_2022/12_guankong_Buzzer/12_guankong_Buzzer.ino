#include <pitches.h>
#include <themes.h>
int buzzerpin=6;
void play_Titanic(){
  for (int i=0;i<sizeof(Titanic_note)/sizeof(int);i++){
    int Titanic_time=1000/Titanic_duration[i];
    tone(buzzerpin,Titanic_note[i],Titanic_time);

    int pauseBetweenNotes = Titanic_time * 2.70;
    delay(pauseBetweenNotes);
    noTone(buzzerpin); //stop music on pin 8 
  }
}
void setup(){
  pinMode(buzzerpin,OUTPUT);
}
void loop(){
  while(1){
    play_Titanic();
  }
}
