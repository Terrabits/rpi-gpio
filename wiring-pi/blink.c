#include <wiringPi.h>

#define PIN 11

int main(void) {
    wiringPiSetup();

    int pin = 14;
    pinMode(pin, OUTPUT);
    while (1) {
      digitalWrite(pin, HIGH);
      // delay(500);
      digitalWrite(pin, LOW );
      // delay(500);
    }

    return 0;
}
