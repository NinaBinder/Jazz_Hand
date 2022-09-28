//left hand

int finger1 =A1; //C2
int finger2 =A2; //A
int finger3 =A3; //G
int finger4 =A4; //E
int finger5 =A5; //C 


#include "pitches.h"

void setup() {

  pinMode(finger1, INPUT);
  pinMode(finger2, INPUT);
  pinMode(finger3, INPUT);
  pinMode(finger4, INPUT);
  pinMode(finger5, INPUT);

  Serial.begin(9600);

}

void loop() {

  int finger1State=analogRead(finger1);

  int finger2State=analogRead(finger2);

  int finger3State=analogRead(finger3);
  

  int finger4State=analogRead(finger4);
  

  int finger5State=analogRead(finger5);
  

if ((finger1State<=300) && (finger2State<=350)) {
  tone(3,NOTE_B5);
  Serial.println("finger1&2");
}

else if ((finger2State<=350) && (finger3State<=300)) {
  tone(3,NOTE_GS5);
  Serial.println("finger2&3");
}

else if ((finger3State<=300) && (finger4State<=300)) {
  tone(3,NOTE_F5);
  Serial.println("finge3&4");
}

else if ((finger4State<=300) && (finger5State<=300)) {
  tone(3,NOTE_G5);
  Serial.println("finge4&5");
}


else if ((finger1State<=300)){
      tone(3, NOTE_C5);
      Serial.println("finger1");
    }

else if ((finger2State<=350)){
      tone(3, NOTE_A5);
      Serial.println("finger2");
    }

else if ((finger3State<=300)){
      tone(3, NOTE_G5);
    }   

else if ((finger4State<=300)){
      tone(3, NOTE_E5);
    } 

else if ((finger5State<=300)){
      tone(3, NOTE_C6);
    }

else {
    noTone(3);
  }
}
 
