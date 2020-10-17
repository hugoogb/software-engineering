#include <iostream>

using namespace std;

int main()
{
    float metres, km;

    cout << "Quina es la distancia en metres? ";
    cin >> metres;

    km = metres / 1000;

    cout << metres << " metres son " << km << " kilometres" << endl;

    return 0;
}