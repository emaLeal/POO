#include <string>
using namespace std;
#ifndef AUTOR_H
#define AUTOR_H
class Autor
{
private:
  string nombre;
  string nacionalidad;
  string fechaNacimiento;

public:
  Autor();
  ~Autor();
};

#endif // !AUTOR_H
