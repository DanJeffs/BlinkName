/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/danie/Dropbox/Deakin/SIT210/1.2P/Morse/Morse/src/Morse.ino"
/*
 * Project Morse
 * Description:
 * Author:
 * Date:
 */

void setup();
void loop();
void dit();
void dash();
void space();
void newLetter();
int ledAutoToggle(String command);
int ledToggle(String command);
#line 8 "c:/Users/danie/Dropbox/Deakin/SIT210/1.2P/Morse/Morse/src/Morse.ino"
int led1 = D0;
int led2 = D6;
int led3 = D7;


int ditTime = 100;
int dashTime = ditTime * 3;
int spaceTime = ditTime * 7;



void setup()
{

   
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);

   Particle.function("led",ledToggle);
   
   Particle.function("ledAuto",ledAutoToggle);
  
   digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);

}


void loop()
{

//start  
delay(4000);

//D
dash();
dit();
dit();
newLetter();

//A
dit();
dash();
newLetter();

//N
dash();
dit();

space();


//J
dit();
dash();
dash();
dash();
newLetter();

//E
dit();
newLetter();

//F
dit();
dash();
dit();
newLetter();

//F
dit();
dash();
dit();
newLetter();

//S
dit();
dit();
dit();
newLetter();

}


void dit() {
    
    ledAutoToggle("switch");
    delay(ditTime);
    ledAutoToggle("switch");
    delay(ditTime);
    return;
}


void dash(){
    
    ledAutoToggle("switch");
    delay(dashTime);
    ledAutoToggle("switch");
    delay(ditTime);
    return;
}

void space(){
    delay(spaceTime);
    return;
}

void newLetter(){
    delay(dashTime);
    return;
}


//Custom function to enable switch from on to off dependant on current state.
int ledAutoToggle(String command) {
    if (command=="switch"){
        if (digitalRead(led1) == LOW) {
            digitalWrite(led1,HIGH);
            digitalWrite(led2,HIGH);
            digitalWrite(led3,HIGH);
            return 1;
        }
        else if (digitalRead(led1) == HIGH) {
            digitalWrite(led1,LOW);
            digitalWrite(led2,LOW);
            digitalWrite(led3,LOW);
            return 0;
        }
        else {
            return -1;
        }
    }
    else {
        return -1;
    }
    
}


//Particle function for implicit on and off
int ledToggle(String command) {

    if (command=="on") {
        digitalWrite(led1,HIGH);
        digitalWrite(led2,HIGH);
        digitalWrite(led3,HIGH);
        return 1;
    }
    else if (command=="off") {
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        return 0;
    }
    else {
        return -1;
    }
}