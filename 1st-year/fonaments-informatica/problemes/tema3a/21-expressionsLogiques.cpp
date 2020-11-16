#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    bool a, b, c;

    cout << "Introdueix un nombre enter (x): ";
    cin >> x;
    cout << "Introdueix un altre nombre enter (y): ";
    cin >> y;
    cout << "Introdueix un altre nombre enter (z): ";
    cin >> z;

    a = (x < 7) && ((y > z) || (7 > z));
    b = ((x == 'c') && (y < -5)) && ((z >= 100) || (z < 6));
    c = ((9 >= x) && (13 < y)) || (-36 >= z);

    cout << "Resultat de les expressions: " << a << " " << b << " " << c << endl;

    return 0;
}