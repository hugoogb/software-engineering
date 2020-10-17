#include <iostream>

using namespace std;

int main()
{
    float notaTeoria, notaSeminaris, notaPractiques, notaFinal;

    cout << "Introdueix la nota de teoria: ";
    cin >> notaTeoria;
    cout << "Introdueix la nota de seminaris: ";
    cin >> notaSeminaris;
    cout << "Introdueix la nota de practiques: ";
    cin >> notaPractiques;

    notaFinal = 0.4 * notaTeoria + 0.3 * notaSeminaris + 0.3 * notaPractiques;

    if (notaFinal < 5)
    {
        cout << "La nota final es " << notaFinal << " SUSPES";
    }
    else
    {
        if (notaFinal < 7)
        {
            cout << "La nota final es " << notaFinal << " APROVAT";
        }
        else
        {
            if (notaFinal < 9)
            {
                cout << "La nota final es " << notaFinal << " NOTABLE";
            }
            else
            {
                if (notaFinal < 10)
                {
                    cout << "La nota final es " << notaFinal << " EXCEL.LENT";
                }
                else
                {
                    if (notaFinal == 10)
                    {
                        cout << "La nota final es " << notaFinal << " MATRICULA D'HONOR";
                    }
                }
            }
        }
    }

    cout << endl;

    return 0;
}