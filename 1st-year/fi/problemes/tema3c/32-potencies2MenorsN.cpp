#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num, res = 0;

    cout << "Introdueix un nombre: ";
    cin >> num;

    for (int i = 0; res < num; i++)
    {
        res = pow(2, i);

        if (res < num)
        {
            cout << res << " ";
        }
    }

    cout << endl;

    return 0;
}