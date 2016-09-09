CC=gcc
CFLAGS=-I.

default: main

main: main.o adder.o
	$(CC) -o test main.o adder.o -I.
clean:
	-rm -f *.o
	-rm -f *.exe
	-rm -f main
