Zumo32U4LCD lcd;
Zumo32U4Buzzer buzzer;
Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;
Zumo32U4ButtonC buttonC;

Zumo32U4Motors motors;
Zumo32U4Encoders encoders;

const char beepstart[] PROGMEM = "!c32";
const char beepcountdown[] PROGMEM = "!g32";
const char beepfight[] PROGMEM = ">g32>>c32";

void RobotStart() //sets up the robot to begin the fight
{
  buzzer.playFromProgramSpace(beepstart);
  lcd.clear();
  lcd.gotoXY(2,0);
  lcd.print("Robot");
  lcd.gotoXY(3,1);
  lcd.print("Sumo");
  motors.setSpeeds(0,0);
}
void FightStart() //plays the music and noises before start
{
  lcd.clear();
  lcd.gotoXY(2,1);
  lcd.print("3,2,1");
  buzzer.playFromProgramSpace(beepcountdown);
  delay(500);
  buzzer.playFromProgramSpace(beepcountdown);
  delay(500);
  buzzer.playFromProgramSpace(beepcountdown);
  delay(500);
  lcd.clear();
  lcd.gotoXY(1,1);
  lcd.print("Fight!");
  buzzer.playFromProgramSpace(beepfight);
}
