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
  Serial.println(finger1State);

  int finger2State=analogRead(finger2);
  Serial.println(finger2State);

  int finger3State=analogRead(finger3);
  Serial.println(finger3State);

  int finger4State=analogRead(finger4);
  Serial.println(finger4State);

  int finger5State=analogRead(finger5);
  Serial.println(finger5State);


if ((finger1State<=300)){
      tone(8, NOTE_C2);
    }

if ((finger2State<=300)){
      tone(8, NOTE_A2);
    }

if ((finger3State<=300)){
      tone(8, NOTE_G2);
    }   

if ((finger4State<=300)){
      tone(8, NOTE_E2);
    } 

if ((finger5State<=300)){
      tone(8, NOTE_C2);
    }
  }
 

