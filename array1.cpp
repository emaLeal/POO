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
  int cantidad;

  cout << "Ingrese la cantidad de estudiantes en el curso: ";
  cantidad = stoi(leer());
  string nombres[cantidad];

  for (int i = 0; i < cantidad; i++)
  {
    cout << "\nDigite el nombre " << (i + 1) << ": ";
    nombres[i] = leer();
  }

  for (int i = 0; i < cantidad; i++)
  {
    cout << i << "\t" << nombres[i] << endl;
  }

  return 0;
}