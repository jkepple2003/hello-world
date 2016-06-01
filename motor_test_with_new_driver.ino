#include <AFMotor.h>
#include "adafruit_motor_driver.h"
#define MOTOR_INIT 1

Michelino::Motor motor(MOTOR_INIT);

void setup()
{
    motor.setSpeed(255);
}

void loop()
{
}
