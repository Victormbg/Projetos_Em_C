# Calculadora makefile

all: calculadora

calculadora: main.o calculos.o
	gcc -o calculadora main.o calculos.o

main.o: main.c calculos.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

calculos.o: calculos.c calculos.h
	gcc -o calculos.o calculos.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ calculadora