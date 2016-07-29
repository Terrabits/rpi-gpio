
all: gpio.so

#gpio.so: main.c libfoo.so
#	gcc -L./ -Wall -o a.out main.c -lfoo

gpio.so:
	gcc -shared -o libgpio.so gpio.c -lwiringPi

#foo.o: foo.c
#	gcc -c -Wall -Werror -fpic foo.c -o foo.o

clean:
	rm libgpio.so
