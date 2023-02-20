#include <AccelStepper.h>
AccelStepper myStepper(1, 12, 13); //Вверх вниз
//AccelStepper myStepper1(1, 4, 7); // туда сюда
void setup() {
  myStepper.setMaxSpeed(4000);
  myStepper.setAcceleration(2000);
  myStepper.setSpeed(4000);
  myStepper1.setMaxSpeed(1000);
  myStepper1.setAcceleration(1000);
  myStepper1.setSpeed(1000);

}

void loop() {
  myStepper.moveTo(600);
  myStepper1.moveTo(600); 
  myStepper.run();
  myStepper1.run();
}
