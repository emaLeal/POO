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
  int cant, valor, apariciones = 0;
  cout << "Cuantos elementos desea ingresar: ";
  cant = stoi(leer());
  int elementos[cant];

  for (int i = 0; i < cant; i++)
  {
    cout << "Ingresa el elemento " << (i+1) << ": ";
    elementos[i] = stoi(leer());
  }

  cout << "Que valor desea comprobar: ";
  valor = stoi(leer());
  cout << "Lista de elementos" << endl;
  for (int i = 0; i < cant; i++)
  {
    if (elementos[i] == valor)
      apariciones++;

    cout << elementos[i] << endl;
  }

  cout << valor << " aparece " << apariciones << " veces en la lista de elementos";

  return 0;
}
