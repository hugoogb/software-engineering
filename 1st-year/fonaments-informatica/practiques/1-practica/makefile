SHELL=/bin/bash
CC=g++
CFLAGS=-Wall

brainTraining: brainTraining.o Aleatori.o
	$(CC) $(CFLAGS) brainTraining.o Aleatori.o -o brainTraining

brainTraining.o: brainTraining.cpp Aleatori.h
	$(CC) $(CFLAGS) -c brainTraining.cpp -o brainTraining.o

Aleatori.o: Aleatori.cpp Aleatori.h
	$(CC) $(CFLAGS) -c Aleatori.cpp -o Aleatori.o

clean:
	rm -f brainTraining *.o
