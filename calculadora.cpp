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
  int num1, num2, sum, res, mult, opc;
  double div;
  // Entrada numeros
  cout << "Ingresa el primer numero: ";
  num1 = stoi(leer());
  cout << "Ingresa el segundo numero:  ";
  num2 = stoi(leer());

  // Menu
  cout << "Que quieres hacer?" << endl;
  cout << "1. SUMAR\n2. RESTA\n3. MULTIPLICACIÓN\n4. DIVISION" << endl;
  cout << "Digita una opción: ";
  opc = stoi(leer());

  switch (opc)
  {
  case 1:
    sum = num1 + num2;
    cout << "La suma entre " << num1 << " y " << num2 << " es " << sum;
    break;
  case 2:
    res = num1 - num2;
    cout << "La resta entre " << num1 << " y " << num2 << " es " << res;
    break;
  case 3:
    mult = num1 * num2;
    cout << "La multiplicación entre " << num1 << " y " << num2 << " es " << mult;
    break;
  case 4:
    if (num2 == 0)
    {
      cout << "No se puede dividir por 0";
      break;
    }
    div = num1 / (num2 * 1.0);
    cout << "La división entre " << num1 << " y " << num2 << " es " << div;
    break;

  default:
    cout << "Operación incorrecta";
    break;
  }

  return 0;
}