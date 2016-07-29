#!/usr/bin/env python
from cffi import FFI

ffi = FFI()
ffi.cdef("""
void setPin    (int pin);
void setPinHigh();
void setPinLow ();
void freeRun   ();
""")
C = ffi.dlopen("./libgpio.so")

C.setPin(14);
while(True):
    C.setPinHigh();
    C.setPinLow ();
