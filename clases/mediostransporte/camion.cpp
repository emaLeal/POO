#include "camion.h"
#include <iostream>

Camion::Camion() {}

Camion::Camion(double capacidadCarga, int numeroLLantas, string tipoCombustible, string marca, int modelo, double distanciaR) : Carro(numeroLLantas, tipoCombustible, marca, modelo, distanciaR)
{
  this->capacidadCarga = capacidadCarga;
}

double Camion::getCapacidadCarga()
{
  return this->capacidadCarga;
}

string Camion::getInfo()
{
  return "Camion\n" + getMarca() + "\t" + to_string(getModelo()) + "\t" + to_string(getDistancia()) + "\t" + to_string(numeroLlantas) + "\t" + tipoCombustible +  to_string(capacidadCarga);
}