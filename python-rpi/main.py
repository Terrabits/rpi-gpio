#!/usr/bin/env python

import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setup(11, GPIO.OUT)

while True:
    GPIO.output(11, True)
    GPIO.output(11, False)
