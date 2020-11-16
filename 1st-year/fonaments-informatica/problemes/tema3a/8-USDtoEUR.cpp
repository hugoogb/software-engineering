#include <iostream>

using namespace std;

int main()
{
    float dolars, euros;

    cout << "Escriu una quantitat de dolars: ";
    cin >> dolars;

    euros = dolars * 0.892439;

    cout << dolars << " dolars son " << euros << " euros" << endl;

    return 0;
}