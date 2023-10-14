#include <string>
using namespace std;

#ifndef MEDIOTRANSPORTE_H
#define MEDIOTRANSPORTE_H
class MedioTransporte
{
private:
  string marca;
  int modelo;

protected:
  double distanciaR;

public:
  MedioTransporte();
  MedioTransporte(string, int, double);
  int getModelo();
  string getMarca();
  double getDistancia();
  virtual string getInfo();
};
#else
class MedioTrasporte
#endif // !MEDIOTRANSPORTE_H