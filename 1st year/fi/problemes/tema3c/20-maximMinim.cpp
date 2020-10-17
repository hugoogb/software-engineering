#include <iostream>

using namespace std;

int main()
{
    int num = 0, max = 0, min = 0, count = 0;

    while (count < 10 && num >= 0)
    {
        cout << "Introdueix un nombre enter: ";
        cin >> num;

        if (count == 0 && num >= 0)
        {
            max = num;
            min = num;
        }
        else
        {
            if (num > max && num >= 0)
            {
                max = num;
            }
            else
            {
                if (num < min && num >= 0)
                    if (num < min && num >= 0)
                    {
                        min = num;
                    }
            }
        }

        count += 1;
    }

    if (count == 1 && num < 0)
    {
        cout << "No hi ha nombres a la sequencia" << endl;
    }
    else
    {
        cout << "Maxim: " << max << " - Minim: " << min << endl;
    }

    return 0;
}