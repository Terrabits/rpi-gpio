Raspberry Pi GPIO Speed Test
============================

My attempt to recreate the measurements from this blog post:
http://codeandlife.com/2012/07/03/benchmarking-raspberry-pi-gpio-speed/

Requirements
------------
- Raspberry Pi Rev 2
- Raspbian jessie (2016-05-27-raspbian-jessie.zip)

python-rpi
-----------
1. cd into `./python-rpi`
2. `./main.py`
3. observe pin 11

wiring-pi
---------
1. cd into `wiring-pi\`
2. `make`
3. `sudo ./wiring-pi`
4. observe pin 11
5. (optional) `make clean`

c-register
----------
1. cd into `c-register\`
2. make
3. sudo `./register`
4. observe pin 11
5. (optional) `make clean`

bcm2835
-------
0.  `apt-get install autoconf=1.14.1`
1.  cd into `lib/bcm2835-1.50`
2.  `aclocal`
3.  `./configure`
4.  `make`
5.  `make check`
6.  `sudo make install`
7.  `sudo make installcheck`
8.  cd into `bcm2835/`
9.  `make`
10. `sudo ./bcm2835`
11. observe pin 11
12. (optional) `make clean`

Results
-------

|Test       | Language | Library       | Speed       |
|-----------|----------|---------------|-------------|
|python-rpi | Python   | RPi.GPIO      | 64   KHz    |
|wiring-pi  | c        | wiringPi      | 4.44 MHz    |
|c-register | c        | mmap /dev/mem | Not working |
|bcm2835    | c        | bcm2835 lib   | Not working |
