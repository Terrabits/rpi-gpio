
all: register.out

register.out: main.o
	gcc -L./ -o register.out main.o

main.o: main.c
	gcc -c -fpic main.c -o main.o

clean:
	rm *o *.out
