SHELL=/bin/bash
CC=g++
CFLAGS=-Wall

damDamDish: JocMasterMind.o FuncionsMasterMind.o
	$(CC) $(CFLAGS) JocMasterMind.o FuncionsMasterMind.o -o JocMasterMind

JocMasterMind.o: JocMasterMind.cpp FuncionsMasterMind.h
	$(CC) $(CFLAGS) -c JocMasterMind.cpp -o JocMasterMind.o

FuncionsMasterMind.o: FuncionsMasterMind.cpp FuncionsMasterMind.h
	$(CC) $(CFLAGS) -c FuncionsMasterMind.cpp -o FuncionsMasterMind.o

clean:
	rm -f JocMasterMind *.o
