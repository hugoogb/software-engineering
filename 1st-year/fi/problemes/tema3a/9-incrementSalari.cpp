#include <iostream>

using namespace std;

int main()
{
    float salariInicial, salariNou, incrementSalari;

    cout << "Introdueix el salari inicial: ";
    cin >> salariInicial;

    incrementSalari = salariInicial * 0.08;
    salariNou = salariInicial + incrementSalari;

    cout << "El nou salari es: " << salariNou << endl;

    return 0;
}