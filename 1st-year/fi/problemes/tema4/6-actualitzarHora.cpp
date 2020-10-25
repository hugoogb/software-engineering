#include <iostream>
#include <unistd.h>

using namespace std;

void incrementaHora(int &hores, int &minuts, int &segons){
        segons += 1;

        if (segons == 60)
        {
            segons = 0;
            minuts += 1;
        }
        if (minuts == 60)
        {
            minuts = 0;
            hores += 1;
        }
        if (hores == 24)
        {
            hores = 0;
        }

        if (hores < 10)
        {
            cout << 0;
        }
        cout << hores << ":";
        if (minuts < 10)
        {
            cout << 0;
        }
        cout << minuts << ":";
        if (segons < 10)
        {
            cout << 0;
        }
        cout << segons << endl;
}

int main()
{
    int hores, minuts, segons, count;
    char c;

    cout << "Introdueix la hora en format (hh:mm:ss): ";
    cin >> hores >> c >> minuts >> c >> segons;

    count = 1;

    do
    {
        sleep(1);
	incrementaHora(hores, minuts, segons);
        count += 1;
    } while (count <= 5);

    return 0;
}
