#include <iostream>
#include <string>
#include "Sede.h"

using namespace std;

Sede::Sede()
{
}

string leer()
{
  string aux;
  getline(cin, aux);

  return aux;
}

void Sede::mostrarMensajeBienvenido()
{
  cout << "Bienvenido a la sede comunal!!!" << endl;
}

void Sede::solicitarInformacionPersona()
{
  string nom, ap, id;
  int dia, mes, anio;
  double est, pes;

  if (indiceP < 50)
  {

    cout << "Digite el nombre de la persona: ";
    nom = leer();
    cout << "Digite el apellido de la persona: ";
    ap = leer();
    cout << "Digite la identificacion de la persona: ";
    id = leer();
    cout << "Digite el dia de nacimiento de la persona: ";
    dia = stoi(leer());
    cout << "Digite el mes de nacimiento de la persona: ";
    mes = stoi(leer());
    cout << "Digite el año de nacimiento de la persona: ";
    anio = stoi(leer());
    cout << "Digite la estatura de la persona: ";
    est = stod(leer());
    cout << "Digite el peso de la persona: ";
    pes = stod(leer());

    Persona unaPersona = Persona(nom, ap, id, dia, mes, anio, est, pes);
    // guardar en una poscion del arreglo
    listaPersonas[indiceP] = unaPersona;
    // actualizar la posicion del arreglo
    indiceP = indiceP + 1;
    cout << "Se creó la persona " << nom << " con éxito!" << endl;
  }
  else
  {
    cout << "La lista de personas está llena, ya no hay mas cupos";
  }
}

void Sede::mostrarPersonas()
{
  for (int i = 0; i < indiceP; i++)
  {
    cout << listaPersonas[i].getInfoPersona() << endl;
  }
}

void Sede::mostrarCantidadAnhos()
{
    time_t tiempo = time(nullptr);
    tm* ahora = localtime(&tiempo);
    
    int dia = ahora->tm_mday;
    int mes = ahora->tm_mon + 1;
    int an = ahora->tm_year+1900;
    
    for (int i = 0; i < indiceP; i++)
    {
        int ed = listaPersonas[i].calcularEdad(dia,mes,an);
        cout<<listaPersonas[i].getNombre()<<"\t"<<listaPersonas[i].getId()<<"\t"<<ed<<"\n";
    }
    
}

Sede::~Sede() {}