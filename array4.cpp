#include <iostream>
#include <vector>
#include <string>

using namespace std;

string leer()
{
  string aux;
  getline(cin, aux);

  return aux;
}

int menu()
{
  int opcion;
  cout << "**********MENÚ**********" << endl;
  cout << "1. INGRESAR NOMBRES DE ESTUDIANTES" << endl;
  cout << "2. MOSTRAR NOMBRES INGRESADOS" << endl;
  cout << "3. INGRESAR UNA LETRA Y VERIFICAR LOS NOMBRES QUE EMPIECEN CON TAL LETRA" << endl;
  cout << "4. INGRESAR UNA LETRA Y VERIFICAR LOS NOMBRES QUE FINALICEN CON TAL LETRA" << endl;
  cout << "Ingrese una opción: ";
  opcion = stoi(leer());

  return opcion;
}

void opcion2(string array[], int cantidad)
{
  cout << "Lista de nombres" << endl;
  for (int i = 0; i < cantidad; i++)
  {
    cout << array[i] << endl;
  }
}

void opcion3(string array[], int cantidad)
{
  char valor;
  cout << "Ingresa una letra: ";
  valor = leer()[0];

  cout << "Estudiantes cuya primera letra es " << valor << endl;
  for (int i = 0; i < cantidad; i++)
  {
    if (array[i].find_first_of(valor) == 0)
      cout << array[i] << endl;
  }
}

void opcion4(string array[], int cantidad)
{
  char valor;
  cout << "Ingresa una letra: ";
  valor = leer().back();

  cout << "Estudiantes cuya ultima letra es " << valor << endl;
  for (int i = 0; i < cantidad; i++)
  {
    if (array[i].back() == valor)
      cout << array[i] << endl;
  }
}

int main()
{
  int cantidad, opcion;
  cout << "Ingrese la cantidad de estudiantes: ";
  cantidad = stoi(leer());
  string estudiantes[cantidad];

  while (opcion != -1)
  {
    opcion = menu();
    switch (opcion)
    {
    case 1:
      for (int i = 0; i < cantidad; i++)
      {
        cout << "Ingresa el valor en la posicion " << (i + 1) << ": ";
        estudiantes[i] = leer();
      }
      break;
    case 2:
      opcion2(estudiantes, cantidad);
      break;
    case 3:
      opcion3(estudiantes, cantidad);
      break;
    case 4:
      opcion4(estudiantes, cantidad);
      break;
    default:
      cout << "Opcion invalida";
      break;
    }
  }

  return 0;
}
