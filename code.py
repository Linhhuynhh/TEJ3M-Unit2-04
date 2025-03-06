#!/usr/bin/env python3
"""
Created by: Linh Huynh
Created on: Mar 2025
"""

import board
import digitalio
import time

led = digitalio.DigitalInOut(board.LED)
led.direction = digitalio.Direction.OUTPUT

while True:
    led.value = True
    time.sleep(0.5)
    led.value = False
    time.sleep(0.5)
