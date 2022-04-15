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
  // put your main code
  here, to run repeatedly:
 if(buttonA.getSingleDebouncedPress()) {
  FightStart();
  
  //codegoeshere
  motors.setSpeeds(400,400);  //move motors
  delay(1000);
  motors.setSpeeds(0,0);//brake
}
else if(buttonB.getSingleDebouncedPress()) {
  FightStart();
  
  //codegoeshere
  motors.setSpeeds(-400,0); //move motors
  delay(300);
  motors.setSpeeds(-200, -200);
  delay(500);
  motors.setSpeeds(0,0); //brake
}
else if(buttonC.getSingleDebouncedPress()) {
  FightStart();
  
  //codegoeshere
  motors.setSpeeds(200,400);  //move motors
  delay(350);
  motors.setSpeeds(0,0); //brake
}
else{
  //do nothing
}
}
