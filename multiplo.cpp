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
  int num1, num2;

  cout << "Ingresa el primer numero: ";
  num1 = stoi(leer());

  cout << "Ingresa el segundo numero: ";
  num2 = stoi(leer());

  if (num2 % num1 == 0)
    cout << num1 << " es multiplo de " << num2;
  else
    cout << num1 << " no es multiplo de " << num2;

    return 0;
}