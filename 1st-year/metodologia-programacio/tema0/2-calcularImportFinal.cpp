#include <iostream>

using namespace std;

float calcularImportClientBasic(float importCompra)
{
    return importCompra;
}

float calcularImportClientEstandar(float importCompra)
{
    if (importCompra > 10000)
    {
        return importCompra - (importCompra * 0.05);
    }
    else
    {
        return importCompra;
    }
}

float calcularImportClientPremium(float importCompra)
{
    if (importCompra > 10000)
    {
        return importCompra - (importCompra * 0.20);
    }
    else if (importCompra > 1000)
    {
        return importCompra - (importCompra * 0.10);
    }
    else if (importCompra > 100)
    {
        return importCompra - (importCompra * 0.05);
    }
    else
    {
        return importCompra;
    }
}

float calcularImportFinal(char tipusClient, float importCompra)
{
    bool error = false;
    float importFinal;

    switch (tipusClient)
    {
    case 'B':
        importFinal = calcularImportClientBasic(importCompra);
        break;
    case 'S':
        importFinal = calcularImportClientEstandar(importCompra);
        break;
    case 'P':
        importFinal = calcularImportClientPremium(importCompra);
        break;
    default:
        error = true;
        break;
    }

    if (!error)
    {
        return importFinal;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char tipusClient;
    float importCompra, importFinal;

    cout << "Introdueix l'import de la compra: ";
    cin >> importCompra;

    cout << "Introdueix el tipus de client ('B', Basic / 'S', Estandar / 'P', Premium): ";
    cin >> tipusClient;

    importFinal = calcularImportFinal(tipusClient, importCompra);

    if (importFinal != -1)
    {
        cout << "Import final de la compra (descompte aplicat): " << importFinal << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    return 0;
}