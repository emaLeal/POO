#include <iostream>
#include <string>

using namespace std;

// Funcion hecha para poder leer desde teclado
string leer() {
	string aux;
	getline(cin, aux);
	return aux;
}

int main() {
	int cuenta = 0;
	double saldoInicial, cargosTotales, creditosTotales, limiteCredito, saldoTotal;

	while (cuenta != -1) {
		// Entrada para verificar que la cuenta no sea -1
		cout << "Introduzca el numero de cuenta (o -1 para salir): ";
		cuenta = stoi(leer());
		if (cuenta == -1) // Verifica que la cuenta sea -1 para salir del bucle
			break;

		// Entradas del programa
		cout << "Introduzca el saldo inicial: ";
		saldoInicial = stod(leer());
		cout << "Introduzca los cargos totales: ";
		cargosTotales = stod(leer());
		cout << "Introduzca los creditos totales: ";
		creditosTotales = stod(leer());
		cout << "Introduzca el limite del credito: ";
		limiteCredito = stod(leer());
		
		saldoTotal = saldoInicial + cargosTotales - creditosTotales;
		cout << "El nuevo saldo es: " << saldoTotal << endl;
		
		if (saldoTotal > limiteCredito) {
			cout << "Cuenta:\t " << cuenta << endl;
			cout << "Limite de crèdito:\t " << limiteCredito << endl;
			cout << "Saldo:\t " << saldoTotal << endl;
			cout << "Se excedio el limite del credito."<<endl;
		}
		cout<<endl;
	}
}
