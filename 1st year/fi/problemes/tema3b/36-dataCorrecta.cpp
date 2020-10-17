#include <iostream>

using namespace std;

int main()
{
    int dia, diesMes, mes, any;
    char c;

    cout << "Introdueix la data en format (DD/MM/AAAA): ";
    cin >> dia >> c >> mes >> c >> any;

    switch (mes)
    {
    case 1:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 2:
        if ((((any % 4) == 0) && ((any % 100) != 0)) || ((any % 400) == 0))
        {
            diesMes = 29;
        }
        else
        {
            diesMes = 28;
        }
        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 3:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 4:
        diesMes = 30;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 5:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 6:
        diesMes = 30;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }
        break;
    case 7:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 8:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 9:
        diesMes = 30;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 10:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 11:
        diesMes = 30;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;
    case 12:
        diesMes = 31;

        if (dia > 0 && dia <= diesMes)
        {
            cout << "Data correcta";
        }
        else
        {
            cout << "Error: Dia incorrecte";
        }

        break;

    default:
        cout << "Error: Mes incorrecte";

        break;
    }

    cout << endl;

    return 0;
}