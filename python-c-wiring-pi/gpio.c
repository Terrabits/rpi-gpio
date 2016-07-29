#include "gpio.h"
#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>


static int pin_ = 0;

void setPin(int pin) {
  pin_ = pin;
  wiringPiSetup();
  pinMode(pin_, OUTPUT);
}

void setPinHigh() {
  digitalWrite(pin_, HIGH);
  // printf("High %d\n", pin_);
}
void setPinLow() {
  digitalWrite(pin_, LOW );
  // printf("Low %d\n", pin_);
}

void freeRun() {
  // const unsigned int US = 1000000;
  while (1) {
    setPinHigh();
    // usleep(US);
    setPinLow ();
    // usleep(US);
  }
}
