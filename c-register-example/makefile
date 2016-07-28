
all: register.out

register.out: main.o
	gcc -L./ -Wall -o ../register.out main.o

main.o: main.c
	gcc -c -Wall -Werror -fpic main.c -o main.o

clean:
	rm *o *.out
