#include <iostream>

using namespace std;

string leer()
{
    string aux;
    getline(cin, aux);

    return aux;
}

int main()
{
    cout << "**********KILOMETRAJE**********" << endl;
    cout << endl;
    int kilometros = 0, litros, sumaLitros = 0, sumaKilometros = 0;
    double kpl, total = 0;

    while (kilometros != -1)
    {
        // Pedir kilometros
        cout << "Escriba los kilometros usados (-1 para salir): ";
        kilometros = stoi(leer());
        if (kilometros == -1) // Comprobar que no sea un numero negativo
            break;
        cout << "Escriba los litros: "; // Pedir los litros
        litros = stoi(leer());
        sumaKilometros += kilometros;
        sumaLitros += litros;

        // Calculos
        kpl = kilometros / (litros * 1.0);
        total = sumaKilometros / (sumaLitros * 1.0);

        // Mostar resultados
        cout << "KLP en este reabastecimiento: " << kpl << endl;
        cout << "Total KLP: " << total << endl;
    }
}