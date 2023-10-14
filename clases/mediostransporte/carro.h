#include "mediotransporte.cpp"
#ifndef CARRO_H
#define CARRO_H
class Carro : public MedioTransporte
{
protected:
  int numeroLlantas;
  string tipoCombustible;

public:
  Carro();
  Carro(int, string, string, int, double);
  string getTipoCombustible();
  int getLLantas();
  string getInfo();
};
#else
class Carro
#endif // !CARRO_H