all: bcm2835.out

bcm2835.out: main.o
	gcc main.o -lbcm2835 -o bcm2835.out

main.o: main.c
	gcc -c main.c

clean:
	rm *o *.out
