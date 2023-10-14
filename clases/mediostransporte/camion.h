#include "carro.cpp"

#ifndef CAMION_H
#define CAMION_H
class Camion : public Carro
{
private:
  double capacidadCarga;

public:
  Camion();
  Camion(double, int, string, string, int, double);
  double getCapacidadCarga();
  string getInfo();
};
#else
class Camion

#endif // !CAMION_H