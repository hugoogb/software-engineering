#include <math.h>
#include "4-interseccioRecta.h"

float Recta::distancia(Punt &pt)
{
    return ((abs(getA() * pt.getX() + getB() * pt.getY() + getC())) / (sqrt(pow(getA(), 2) + pow(getB(), 2))));
}

bool Recta::interseccio(Recta &r, Punt &pt)
{
    bool interseccio = false;

    if ((r.getB() * getA() - getB() * r.getA()) != 0)
    {
        interseccio = true;

        pt.setX(((getB() * r.getC() - r.getB() * getC()) / (r.getB() * getA() - getB() * r.getA())));
        pt.setY(((r.getA() * getC() - getA() * r.getC()) / (r.getB() * getA() - getB() * r.getA())));
    }

    return interseccio;
}