#include "Aleatori.h"

int Aleatori(int NumMin, int NumMax)
{
	int NumAleatori;

	NumAleatori = NumMin + (rand() % (NumMax - NumMin + 1));

	return NumAleatori;
}
