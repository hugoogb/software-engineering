CC=gcc
CFLAGS=-Wall

holaf-main: holaf-main.o holaf-f.o
	$(CC) $(CFLAGS) holaf-main.o holaf-f.o -o holaf-main

holaf-main.o: holaf-main.c holaf-main.h
	$(CC) $(CFLAGS) -c holaf-main.c -o holaf-main.o

holaf-f.o: holaf-f.c
	$(CC) $(CFLAGS) -c holaf-f.c -o holaf-f.o
