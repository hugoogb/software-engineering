SHELL=/bin/bash
CC=g++
CFLAGS=-Wall

MasterMindMJ: MasterMindMJ.o FuncionsMasterMindMJ.o
	$(CC) $(CFLAGS) MasterMindMJ.o FuncionsMasterMindMJ.o -o MasterMindMJ

MasterMindMJ.o: MasterMindMJ.cpp FuncionsMasterMindMJ.h
	$(CC) $(CFLAGS) -c MasterMindMJ.cpp -o MasterMindMJ.o

FuncionsMasterMindMJ.o: FuncionsMasterMindMJ.cpp FuncionsMasterMindMJ.h
	$(CC) $(CFLAGS) -c FuncionsMasterMindMJ.cpp -o FuncionsMasterMindMJ.o

clean:
	rm -f MasterMindMJ *.o
