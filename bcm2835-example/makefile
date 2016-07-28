all: bcm2835.out

bcm2835.out: main.o
	gcc -L./ -L/usr/local/lib -Wall -o ../bcm2835.out -lbcm3835

main.o: main.c
	gcc -c -Wall -Werror -fpic main.c -o main.o

clean:
	rm *o *.out
