#include <iostream>

using namespace std;

int main()
{
    char inicialNom, inicialCognom;
    int edat;

    cout << "Escriu la inicial del teu nom: ";
    cin >> inicialNom;
    cout << "Escriu la inicial del teu cognom: ";
    cin >> inicialCognom;
    cout << "Introdueix la teva edat: ";
    cin >> edat;

    cout << "Hola " << inicialNom << "." << inicialCognom << ". Tens " << edat << " anys!" << endl;

    return 0;
}