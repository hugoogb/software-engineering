#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int numAleatori, num, count;
    char c;

    do
    {
        srand((unsigned)time(NULL));

        numAleatori = rand() % 10 + 1;

        num = 0;
        count = 0;

        for (int i = 0; i <= 5 && numAleatori != num; i++)
        {
            cout << "Introdueix un numero (1 - 10): ";
            cin >> num;

            while (num < 1 || num > 10)
            {
                cout << "Error: Valor fora del rang 1-10" << endl;

                cout << "Introdueix un numero (1 - 10): ";
                cin >> num;
            }

            if (num > numAleatori)
            {
                cout << "El numero a endevinar es mes petit" << endl;
            }
            else
            {
                if (num < numAleatori)
                {
                    cout << "El numero a endevinar es mes gran" << endl;
                }
            }
            count += 1;
        }

        if (num == numAleatori)
        {
            cout << "Has guanyat!!! Has encertat en " << count << " intents" << endl;
        }
        else
        {
            cout << "Has perdut: El numero secret era " << numAleatori << endl;
        }

        cout << "Vols tornar a jugar? (S/-) ";
        cin >> c;

    } while (c == 'S');

    return 0;
}