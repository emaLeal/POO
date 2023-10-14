#ifndef SEDE_H
#define SEDE_H
#include "Persona.cpp"

class Sede
{
private:
   Persona listaPersonas[50];
  int indiceP;

public:
  Sede();
  void mostrarMensajeBienvenido();
  void solicitarInformacionPersona();
  void mostrarCantidadAnhos();
  void determinarRangosSegunEdad();
  void mostrarIMC();
  void mostrarPersonas();
  void buscarPorNombre();
  void buscarPorEdad();
  ~Sede();
};
#else
class Sede
#endif // !SEDE_H