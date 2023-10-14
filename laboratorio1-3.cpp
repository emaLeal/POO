#include <iostream>
#include <string>
using namespace std;

// Funcion para leer por teclado
string leer()
{
	string aux;
	getline(cin, aux);
	return aux;
}

int main()
{
	int calificaciones[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, calificacion = 1, i = 0;
	while (calificacion > 0)
	{
		cout << "Estudiante " << i << ": Digite la calificaciòn de 1 a 10 (0 para salir): ";
		calificacion = stoi(leer());

		if (calificacion <= 0)
			break;

		if (calificacion > 10)
		{
			cout << "Nota invalida, Ingrese una calificaciòn valida" << endl;
			continue;
		}

		calificaciones[calificacion - 1] = calificaciones[calificacion - 1] + 1;
		i++;
	}

	cout << "Cantidad de encuestados: " << i << endl;
	cout << "****** FRECUENCIA DE LAS CALIFICACIONES ******" << endl;
	cout << "Calificaciòn\tNum Estud\tHistograma" << endl;
	for (int j = 1; j <= 10; j++)
	{
		string ast = "";
		for (int g = 0; g < calificaciones[j - 1]; g++)
			ast += "*";
		cout << j << "\t\t" << calificaciones[j - 1] << "\t\t" << ast << endl;
	}
}
