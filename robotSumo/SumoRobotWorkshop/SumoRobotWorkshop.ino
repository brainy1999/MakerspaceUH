/*
 * Sumo Wrestling Workshop Starter Code for Makerspace @UH Libraries
 * Written and developed by Bernard Li
 * Limited Technologies, LLC
 * 
 * This robot and it's code are compliant with the GNU Open Source Licensing Agreements
 * 
 * SumoRobotWorkshop Type S Mark 1.1 Software 1.2
 */


#include <Wire.h>
#include <Zumo32U4.h>
#include "robotsumo.h"



void setup() {
  // put your setup code here, to run once:
  RobotStart();
  
}

void loop() {
  /* How to Use
   *  Press Button A, B, or C
   *  Inside each if statement is where your code goes
   *  motors.setSpeeds(x,y); where X, Y are motor speeds of max 400. -400 is reverse.
   *  delay(300); time each motor runs
   *  motors.setSpeeds(0,0); is brake
   *  FightStart() sets up each starting
   */
 if(buttonA.getSingleDebouncedPress()) {
  FightStart();
  
  //codegoeshere

}
else{
  //do nothing code
}
}
