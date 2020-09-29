# Calculadora makefile

all: printy

printy: main.o calculos.o
	gcc -o printy main.o calculos.o

main.o: main.c calculos.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

calculos.o: calculos.c calculos.h
	gcc -o calculos.o calculos.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ printy