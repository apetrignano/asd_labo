prog: main.o aux.o
	gcc -o prog main.o aux.o -Wall
main.o: main.c
	gcc -c main.c
aux.o: aux.c
	gcc -c aux.c

delete:
	rm prog main.o aux.o
