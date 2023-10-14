#include <string>
using namespace std;
#include "Autor.h"
#ifndef LIBROS_H
#define LIBROS_H
class Libro
{
private:
  int id;
  string nombre;
  string tipo;
  string editorial;
  string anio;
  Autor autor;
  string estado;

public:
  Libro();
  ~Libro();
};

#endif // !1