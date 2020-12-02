#include <iostream>
#include <math.h>

using namespace std;

#define LongCodi 4
#define MaxIntents 15
#define Digits 10

#define AJUDA 1
#define JUGAR 2
#define HISTORIC 3
#define SORTIR 4
#define MAX_PARTIDES 20

#define MAX_LONG_NOM 25

/* Creeu aqui el tipus de dades Registre partida */
typedef struct
{
  int CodiJugador1[LongCodi];
  int CodiJugador2[LongCodi];
  int IntentsJugador1;
  int IntentsJugador2;
} RegistrePartida;
/* ============================================= */

// MasterMind original
void Menu();
void Ajuda();
int LlegirNombre(int min, int max);
void IntToArray(int Nombre, int Codi[], int Dim);
void InicialitzarArray(int Array[], int Dim, int Valor);
void FrequenciaDigit(int Codi[], int Dim, int Frequencia[]);
int NombreEncerts(int CodiMaster[], int CodiBreaker[], int Dim);
int Minim(int Valor1, int Valor2);
int NombreAproximacions(int FrequenciaCodiMaster[], int FrequenciaCodiBreaker[], int Encerts);
void ImprimirComparacions(int Encerts, int Aproximacions);

// MasterMind MJ
void EscriureVector(int Array[], int Dim, bool SaltDeLinia);
int EsbrinarCodiMaster(int CodiMaster[]);
RegistrePartida JocMultijugadorMasterMind(char NomJugador1[], char NomJugador2[]);
void ImprimirResultatPartida(char Jugador1[], char Jugador2[], RegistrePartida ResultatPartida, int NumPartida);
void ImprimirHistoric(char Jugador1[], char Jugador2[], RegistrePartida RegistreHistoric[], int PartidesJugades);
