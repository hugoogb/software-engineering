#include <iostream>

using namespace std;

int main()
{
    int s = 0, a = 0, n = 0, e = 0, mh = 0;
    float nota;

    cout << "Introdueix la nota: ";
    cin >> nota;

    while (nota >= 0 && nota <= 10)
    {

        if (nota >= 0 && nota < 5)
        {
            s += 1;
        }
        else
        {
            if (nota >= 5 && nota < 7)
            {
                a += 1;
            }
            else
            {
                if (nota >= 7 && nota < 9)
                {
                    n += 1;
                }
                else
                {
                    if (nota >= 9 && nota < 10)
                    {
                        e += 1;
                    }
                    else
                    {
                        if (nota == 10)
                        {
                            mh += 1;
                        }
                    }
                }
            }
        }
        cout << "Introdueix la nota: ";
        cin >> nota;
    }
    cout << "S: " << s << " - A: " << a << " - N: " << n << " - E: " << e << " - MH: " << mh << endl;
}