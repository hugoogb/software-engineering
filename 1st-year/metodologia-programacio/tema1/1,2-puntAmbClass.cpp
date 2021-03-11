#include <iostream>
#include <math.h>
#include "1,2-puntAmbClass.h"

using namespace std;

void Punt::llegeix()
{
    cout << "Introdueix coordinades x i y del punt: ";
    cin >> m_x >> m_y;
}

void Punt::mostra()
{
    cout << "(" << m_x << ", " << m_y << ")";
}

float Punt::distancia(Punt &p)
{
    float dx = m_x - p.m_x;
    float dy = m_y - p.m_y;
    return sqrt(dx * dx + dy * dy);
}

void Punt::suma(Punt &p1, Punt &p2)
{
    p2.m_x = m_x + p1.m_x;
    p2.m_y = m_y + p1.m_y;
}

int main()
{
    Punt p1, p2, p3;

    p1.m_x = 0;
    p1.m_y = 0;

    p2.llegeix();

    cout << "Primer punt: ";
    p1.mostra();
    cout << endl;
    cout << "Segon punt: ";
    p2.mostra();
    cout << endl;

    float distancia = p1.distancia(p2);
    cout << "Distancia: " << distancia << endl;

    p1.suma(p2, p3);

    cout << "Suma dels dos punts: ";
    p3.mostra();
    cout << endl;

    return 0;
}
