#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Quina es la temperatura en graus Celsius? ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;

    cout << celsius << " graus Celsius son " << fahrenheit << " graus Fahrenheit" << endl;

    return 0;
}