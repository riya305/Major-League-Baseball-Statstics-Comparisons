CC=g++
CFLAGS=-I.
DEPS = defns.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

p1: p1.o 
	$(CC) -o p1 p1.o