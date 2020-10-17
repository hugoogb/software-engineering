#include <iostream>

using namespace std;

int main()
{
    int codi;
    char lletra1, lletra2, lletra3;

    cout << "Introdueix una nombre enter: ";
    cin >> codi;

    lletra1 = codi;
    lletra2 = codi + 1;
    lletra3 = codi + 10;

    cout << lletra1 << " " << lletra2 << " " << lletra3 << endl;

    return 0;
}