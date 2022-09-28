
int button =A0;
int buttonState;


#include "pitches.h"


// notes in the melody:
int melody[] = { NOTE_A4 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = { 4 };

void setup() {

  pinMode(button, INPUT);
  
  Serial.begin(9600);

}

void loop() {

  int ldrState=analogRead(button);
  Serial.println(ldrState);

//// WHEN NO LIGHT AKA TOUCH SURFACE PLAY NOTE////
if ((ldrState<=300)){

    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 1; thisNote++) {

      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);


    //// DELAY INBETWEEN NOTES ////
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      //int pauseBetweenNotes = noteDuration * 1.30;
      //delay(pauseBetweenNotes);
      // stop the tone playing:
      //noTone(8);
    }
  
  }

  
}
