#include "Persona.h"
#include <iostream>

Persona::Persona() {
  nombre = "";
  apellido = "";
}

Persona::Persona(string nombre, string apellido, string id, int diaN, int mesN, int anioN, double estatura, double peso)
{
  this->nombre = nombre;
  this->apellido = apellido;
  this->id = id;
  this->diaN = diaN;
  this->mesN = mesN;
  this->anioN = anioN;
  this->estatura = estatura;
  this->peso = peso;
}

int Persona::calcularEdad(int diaActual, int mesActual, int anioActual)
{
  int edad = 0;
  if (mesActual == mesN)
  {
    if (diaActual >= diaN)
      edad++;
  }

  if (mesActual < mesN)
    edad--;
  else
    edad++;

  edad += anioActual - anioN;

  return edad;
}

double Persona::calcularIMC()
{
  double imc = this->peso / (this->estatura * this->estatura);

  return imc;
}

string Persona::getInfoPersona()
{
  return nombre + "\t" + apellido + "\t" + id + "\t" +
         to_string(diaN) + "\t" + to_string(mesN) + "\t" + to_string(anioN) + "\t" + to_string(estatura) + "\t" + to_string(peso);
}

Persona::~Persona() {}