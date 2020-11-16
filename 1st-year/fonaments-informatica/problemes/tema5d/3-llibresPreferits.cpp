#include <iostream>

using namespace std;

struct TLlibre
{
    char titol[20];
    char editorial[20];
    int pagines;
    float preu;
};

int main()
{
    struct TLlibre llibre1;
    struct TLlibre llibre2;

    cout << "Introdueix el titol d'un dels teus llibres favorits: "; cin >> llibre1.titol;
    cout << "Introdueix la editorial d'un dels teus llibres favorits: "; cin >> llibre1.editorial;
    cout << "Introdueix les pagines d'un dels teus llibres favorits: "; cin >> llibre1.pagines;
    cout << "Introdueix el preu d'un dels teus llibres favorits: "; cin >> llibre1.preu;

    cout << endl;

    cout << "Introdueix el titol d'un altre dels teus llibres favorits: "; cin >> llibre2.titol;
    cout << "Introdueix la editorial d'un altre dels teus llibres favorits: "; cin >> llibre2.editorial;
    cout << "Introdueix les pagines d'un altre dels teus llibres favorits: "; cin >> llibre2.pagines;
    cout << "Introdueix el preu d'un altre dels teus llibres favorits: "; cin >> llibre2.preu;

    cout << "Llibres preferits:" << endl;
    cout << llibre1.titol << " " << llibre1.editorial << " " << llibre1.pagines << " " << llibre1.preu << endl;
    cout << llibre2.titol << " " << llibre2.editorial << " " << llibre2.pagines << " " << llibre2.preu << endl;

    return 0;
}
