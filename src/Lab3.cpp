/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Desktop/Lab3/src/Lab3.ino"
void setup();
void colorValues(int RGB1, int RGB2, int RGB3);
void loop();
#line 1 "/Users/admin/Desktop/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);



void setup() {


pinMode(D5,OUTPUT);
pinMode(D6, OUTPUT); 
pinMode(D7, OUTPUT);


}

void colorValues(int RGB1, int RGB2, int RGB3){

    analogWrite(D5, RGB1);
    analogWrite(D6, RGB2); 
    analogWrite(D7, RGB3);
    delay(1000);

}

void loop() {

//red
colorValues(255,255,0);
//green
colorValues(255,0,255);
//blue
colorValues(0,255,255);
//yellow
colorValues(250,0,0);


}

