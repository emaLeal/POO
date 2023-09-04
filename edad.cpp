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
  int edad;
  cout << "Ingresa tu edad: ";
  edad = stoi(leer());

  if (edad < 0 or edad > 102)
  {
    cout << "La edad no es valida";
    return 1;
  }

  if (edad >= 0 and edad <= 4)
    cout << "Tu eres un Parvulo";

  if (edad >= 5 and edad <= 8)
    cout << "Tu eres un Niño";

  if (edad >= 9 and edad <= 11)
    cout << "Tu eres un preadolescente";

  if (edad >= 12 and edad <= 17)
    cout << "Tu eres un adolescente";

  if (edad >= 18 and edad <= 34)
    cout << "Tu eres un Adulto joven";

  if (edad >= 35 and edad <= 59)
    cout << "Tu eres un adulto";

  if (edad >= 60)
    cout << "Tu eres un adulto mayor";

  return 0;
}