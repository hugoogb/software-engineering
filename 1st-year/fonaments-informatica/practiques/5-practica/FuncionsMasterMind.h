#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LongCodi 4
#define MaxIntents 15
#define Digits 10

void Ajuda();
int Aleatori(int , int );
void GenerarCodiOcult(int , int );
int LlegirNombre(int , int );
void IntToArray(int , int *, int );
void InicialitzarArray(int *, int , int );
void FrequenciaDigit(int *, int , int *);
int NombreEncerts(int *, int *, int );
int Minim(int , int );
int NombreAproximacions(int *, int *, int );
void ImprimirComparacions(int , int );
int JocMasterMind();
void Menu();
void ImprimirResultatsJoc(int );
