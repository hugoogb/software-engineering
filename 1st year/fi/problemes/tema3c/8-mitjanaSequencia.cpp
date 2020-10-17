#include <iostream>

using namespace std;

int main()
{
    float denominador, nota, sumaNotes = 0, mitjana;

    do
    {
        cout << "Introdueix la nota: ";
        cin >> nota;

        if (nota == 0 && sumaNotes == 0)
        {
            cout << "Error: La sequencia es buida. No es pot calcular la mitjana." << endl;
        }
        else
        {
            sumaNotes = sumaNotes + nota;
            denominador++;
        }
    } while (nota != 0);

    mitjana = sumaNotes / (denominador - 1);

    if (sumaNotes != 0)
    {
        cout << "Mitjana dels nombres de la sequencia: " << mitjana << endl;
    }

    return 0;
}