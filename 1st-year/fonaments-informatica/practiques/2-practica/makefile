SHELL=/bin/bash
CC=g++
CFLAGS=-Wall

damDamDish: damDamDish.o Aleatori.o
	$(CC) $(CFLAGS) damDamDish.o Aleatori.o -o damDamDish

brainTraining.o: damDamDish.cpp Aleatori.h
	$(CC) $(CFLAGS) -c damDamDish.cpp -o damDamDish.o

Aleatori.o: Aleatori.cpp Aleatori.h
	$(CC) $(CFLAGS) -c Aleatori.cpp -o Aleatori.o

clean:
	rm -f damDamDish *.o
