#include <iostream>

using namespace std;

struct TipusAlumne
{
    char Nom[10];
    char Cognom1[15];
    char Cognom2[15];
    float Nota;
};

int main()
{
    struct TipusAlumne alumne1;

    cout << "Introdueix el nom de l'alumne: "; cin >> alumne1.Nom;
    cout << "Introdueix el primer cognom de l'alumne: "; cin >> alumne1.Cognom1;
    cout << "Introdueix el segon cognom de l'alumne: "; cin >> alumne1.Cognom2;
    cout << "Introdueix la nota de l'alumne: "; cin >> alumne1.Nota;

    cout << alumne1.Cognom1 << " " << alumne1.Cognom2 << ", " << alumne1.Nom << " " << alumne1.Nota << endl;

    return 0;
}
