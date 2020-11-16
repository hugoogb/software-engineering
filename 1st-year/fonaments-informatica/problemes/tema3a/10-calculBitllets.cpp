#include <iostream>

using namespace std;

int main()
{
    int bitllets5, bitllets10, bitllets20, diners;

    cout << "Indica la quantitat de billets de 5€: ";
    cin >> bitllets5;
    cout << "Indica la quantitat de billets de 10€: ";
    cin >> bitllets10;
    cout << "Indica la quantitat de billets de 20€: ";
    cin >> bitllets20;

    diners = (bitllets5 * 5) + (bitllets10 * 10) + (bitllets20 * 20);

    cout << "L'import total del qual disposa es de " << diners << "€" << endl;

    return 0;
}