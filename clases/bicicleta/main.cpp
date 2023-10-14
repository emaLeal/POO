#include <iostream>
#include "Persona.cpp"
#include "Bicicleta.cpp"

using namespace std;

int main()
{
  Bicicleta unaBici = Bicicleta();
  Persona juanita = Persona("Juanita Lopez");
  juanita.comprar(unaBici);
  juanita.recorrer(20);

  return 0;
};
