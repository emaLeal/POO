#include "mediotransporte.h"
#include <iostream>

MedioTransporte::MedioTransporte()
{
  this->marca = "";
  this->modelo = 0;
  this->distanciaR = 0;
}

MedioTransporte::MedioTransporte(string marca, int modelo, double distanciaR)
{
  this->marca = marca;
  this->modelo = modelo;
  this->distanciaR = distanciaR;
}

int MedioTransporte::getModelo()
{
  return this->modelo;
}

string MedioTransporte::getMarca()
{
  return this->marca;
}

double MedioTransporte::getDistancia()
{
  return this->distanciaR;
}

string MedioTransporte::getInfo()
{
  return marca + "\t" + to_string(modelo) + "\t" + to_string(distanciaR);
}