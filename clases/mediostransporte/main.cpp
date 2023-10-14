#include "camion.cpp"

#include <iostream>

int main()
{
  MedioTransporte *medios[4];
  medios[0] = new Camion(56.1, 8, "Diesel", "Volvo", 2023, 120.4);
  medios[1] = new Carro(4, "Gasolina", "Renault", 2020, 3500);
  medios[2] = new MedioTransporte("Un medio", 2015, 56000);
  medios[3] = new Camion(56.1, 10, "diesel", "otro camion", 2013, 120.4);
  for (int i = 0; i < 4; i++)
  {
    cout << medios[i]->getInfo() << endl;
  }
  return 0;
}