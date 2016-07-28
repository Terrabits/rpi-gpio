#include <wiringPi.h>

#define PIN 11

int main(void) {
    wiringPiSetup();

    int pin;
    for (pin=14; pin<=14; pin++) {
        pinMode(pin, OUTPUT);
    }
    
    for (pin=14; pin<=14; pin++) {
        digitalWrite(pin, HIGH);
        delay(500);
        digitalWrite(pin, LOW);
        delay(500);
    }

    return 0;
}
