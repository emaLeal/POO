#include "carro.h"
#include <iostream>

Carro::Carro() {}

Carro::Carro(int numeroLLantas, string tipoCombustible, string marca, int modelo, double distanciaR) : MedioTransporte(marca, modelo, distanciaR)
{
  this->tipoCombustible = tipoCombustible;
  this->numeroLlantas = numeroLLantas;
}

string Carro::getTipoCombustible()
{
  return this->tipoCombustible;
}

int Carro::getLLantas()
{
  return this->numeroLlantas;
}

string Carro::getInfo()
{
  return "Carro\n" + MedioTransporte::getInfo() + "\t" + tipoCombustible + "\t" + to_string(numeroLlantas);
}