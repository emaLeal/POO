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
  int num;
  cout << "Ingrese un numero: ";
  num = stoi(leer());

  if (num % 2 == 0)
  {
    cout << num << " es un numero par";
  }
  else
  {
    cout << num << " es un numero impar";
  }
  return 0;
}