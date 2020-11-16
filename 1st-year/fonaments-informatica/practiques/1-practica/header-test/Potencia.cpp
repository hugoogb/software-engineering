#include "Potencia.h"
#include <math.h>

int Potencia(int base, int exponent)
{
    int resPotencia;

    resPotencia = pow(base, exponent);

    return resPotencia;
}