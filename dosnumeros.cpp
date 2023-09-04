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
  int num1, num2, sum, promedio, prod, menor;

  cout << "Ingresa el primer numero: ";
  num1 = stoi(leer());

  cout << "Ingresa el segundo numero: ";
  num2 = stoi(leer());

  sum = num1 + num2;
  promedio = (num1 + num2) / 2;
  prod = num1 * num2;

  if (num1 > num2)
  {
    menor = num2;
  }
  else if (num1 < num2)
  {
    menor = num1;
  }
  else
  {
    menor = 0;
  }

  cout << "La suma entre " << num1 << " y " << num2 << " es: " << sum << endl;
  cout << "El promedio entre " << num1 << " y " << num2 << " es: " << promedio << endl;
  cout << "El producto entre " << num1 << " y " << num2 << " es: " << prod << endl;

  if (menor == 0)
  {
    cout << "Ambos numeros son iguales" << endl;
  }
  else
  {
    cout << "El numero menor entre los dos es: " << menor << endl;
  }
}