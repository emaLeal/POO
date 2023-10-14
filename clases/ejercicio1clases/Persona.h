#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona
{
private:
  string nombre, apellido, id;
  int diaN, mesN, anioN;
  double estatura, peso;

public:
  Persona();
  Persona(string, string, string, int, int, int, double, double);
  int calcularEdad(int, int, int);
  double calcularIMC();
  string getInfoPersona();
  ~Persona();
};
#else 
class Persona
#endif // !PERSONA_H
