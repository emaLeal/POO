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
  int n, mayor, menor;
  double promedio = 0;
  cout << "Cantidad de enteros a ingresar: ";
  n = stoi(leer());
  int numeros[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Ingresa el numero " << (i + 1) << ": ";
    numeros[i] = stoi(leer());
  }

  for (int i = 0; i < n; i++)
  {
    mayor = numeros[0];
    if (numeros[0] < numeros[i])
      mayor = numeros[i];
  }

  for (int i = 0; i < n; i++)
  {
    menor = numeros[0];

    if (numeros[0] > numeros[i])
      menor = numeros[i];
  }

  for (int i = 0; i < n; i++)
  {
    promedio += numeros[i];
  }

  promedio = (promedio / n);

  cout << "El promedio de los numeros ingresados es: " << promedio << endl;
  cout << "El numero mayor de los numeros ingresados es: " << mayor << endl;
  cout << "El numero menor de los numeros ingresados es: " << menor << endl;

  return 0;
}