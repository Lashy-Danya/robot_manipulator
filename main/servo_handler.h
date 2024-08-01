#ifndef SERVO_HANDLER_H
#define SERVO_HSNDLER_H

#include "esp_log.h"

#define SERVOMIN        150 // 0 angle
#define SERVOMAX        600 // 180 angle
#define SERVO_FREQ      50
#define MAX_CURRENT     1.0
#define MIN_ANGLE       0.0
#define MAX_ANGLE       180.0

uint16_t angle_to_pwm(float angle);

void set_servo_position(uint8_t channel, float angle);

void rotate_servo(uint8_t channel, float angle_delta);

#endif