#include <iostream>
#include <math.h>

using namespace std;

int potencia(int base, int num){
  int res;
    for (int i = 1; res < num; i++)
    {
        res = pow(base, i);

        if (res < num)
        {
            cout << res << " ";
        }
    }
  return 0;
}

int main()
{
    float base, num, res = 0;

    cout << "Introdueix la base de les potencies: ";
    cin >> base;
    cout << "Introdueix un nombre: ";
    cin >> num;

    if (base > 1 && num > base) {
      potencia(base, num);
    } else {
      cout << "Error: Valors incorrectes" << endl;
    }

    cout << endl;

    return 0;
}

