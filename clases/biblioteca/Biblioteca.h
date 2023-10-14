#include "Libros.h"
#include <vector>
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
class Biblioteca
{
private:
  std::vector<Libro> libros;

public:
  Biblioteca();
  ~Biblioteca();
};

#endif // !BIBLIOTECA_H