#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float costat, area;

    cout << "Introdueix la mida del costat del quadrat: ";
    cin >> costat;

    area = pow(costat, 2);

    cout << "L'area del quadrat es: " << area << endl;

    return 0;
}