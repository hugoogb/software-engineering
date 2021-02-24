#include <iostream>

using namespace std;

void realitzarOperacions(int numOperacions)
{
    int i, suma, operand, operacions = 1;

    do
    {
        i = 1;
        suma = 0;

        do
        {
            operand = 1 * i;

            if (i == 1)
            {
                cout << operand;
            }
            else
            {
                cout << "+" << operand;
            }

            suma += operand;

            i++;
        } while (i <= operacions);

        cout << "=" << suma << endl;

        operacions++;
    } while (operacions <= numOperacions);
}

int main()
{
    int numOperacions;

    cout << "Introdueix el nombre d'operacions a realitzar: ";
    cin >> numOperacions;

    realitzarOperacions(numOperacions);

    return 0;
}