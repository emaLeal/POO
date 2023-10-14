#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

Persona::Persona(string nom)
{
  this->nombre = nom;
  // this->miBicicleta = nullptr;
}

void Persona::comprar(Bicicleta unaB)
{
  miBicicleta = unaB;
  cout << "Compré una biciclata" << endl;
}

void Persona::recorrer(double kmARecorrer)
{
  cout << nombre << " está recorriendo ....." << endl;
  miBicicleta.pedalear(kmARecorrer);
}

void Persona::despinchar() {}
void Persona::prestar(Persona unaP) {}
void Persona::devolver(Persona aQuienLePresto) {}

Persona::~Persona()
{
  miBicicleta.~Bicicleta();
}