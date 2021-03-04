#include <iostream>
#include <math.h>

using namespace std;

const int MAX_COSTATS = 30;

typedef struct
{
    float x;
    float y;
} Punt;

typedef struct
{
    int costats;
    Punt vertex[MAX_COSTATS];
} Poligon;

void llegeixPunt(Punt &p)
{
    cin >> p.x;
    cin >> p.y;
}

void mostraPunt(Punt &p)
{
    cout << p.x << ", " << p.y << endl;
}

float distanciaPunts(Punt &p1, Punt &p2)
{
    return (sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
}

void llegeixPoligon(Poligon &p)
{
    cout << "Introdueix el nombre de costats del poligon (vertexs): ";
    cin >> p.costats;

    for (int i = 0; i < p.costats; i++)
    {
        llegeixPunt(p.vertex[i]);
    }
}

void mostraPoligon(Poligon &p)
{
    for (int i = 0; i < p.costats; i++)
    {
        mostraPunt(p.vertex[i]);
    }
}

float calculaPerimetre(Poligon &p)
{
    float perimetre = 0;

    for (int i = 1; i < p.costats; i++)
    {
        perimetre += distanciaPunts(p.vertex[i - 1], p.vertex[i]);
    }

    perimetre += distanciaPunts(p.vertex[p.costats - 1], p.vertex[0]);

    return perimetre;
}

void rectangleMinim(Poligon &p, Punt &superiorEsquerra, Punt &inferiorDreta)
{
    float puntYMax, puntXMax, puntYMin, puntXMin;

    for (int i = 0; i < p.costats; i++)
    {
        if (i == 0)
        {
            puntYMax = p.vertex[i].y;
            puntXMax = p.vertex[i].x;
            puntYMin = p.vertex[i].y;
            puntXMin = p.vertex[i].x;
        }

        if (p.vertex[i].y > puntYMax)
        {
            puntYMax = p.vertex[i].y;
        }
        else if (p.vertex[i].y < puntYMin)
        {
            puntYMin = p.vertex[i].y;
        }

        if (p.vertex[i].x > puntXMax)
        {
            puntXMax = p.vertex[i].x;
        }
        else if (p.vertex[i].x < puntXMin)
        {
            puntXMin = p.vertex[i].x;
        }
    }

    superiorEsquerra.x = puntXMin;
    superiorEsquerra.y = puntYMin;

    inferiorDreta.x = puntXMax;
    inferiorDreta.y = puntYMax;
}

bool interseccioRectangle(Poligon &p1, Poligon &p2)
{
    Punt upLeft1, upLeft2;
    Punt downRight1, downRight2;
    bool interseccio;

    rectangleMinim(p1, upLeft1, downRight1);
    rectangleMinim(p2, upLeft2, downRight2);

    if ((upLeft2.x > upLeft1.x && upLeft2.y > upLeft1.y) ||
        (downRight2.x > downRight1.x && downRight2.y > downRight1.y))
    {
        interseccio = true;
    }
    else
    {
        interseccio = false;
    }

    return interseccio;
}