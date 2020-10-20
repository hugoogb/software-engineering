#include <iostream>

using namespace std;

int main()
{
    float num;
    int positiu = 0, negatiu = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Introdueix un numero: ";
        cin >> num;

        if (num > 0)
        {
            positiu += 1;
        }
        else
        {
            if (num < 0)
            {
                negatiu += 1;
            }
        }
    }

    cout << "Positius: " << positiu << " - Negatius: " << negatiu << endl;

    return 0;
}
