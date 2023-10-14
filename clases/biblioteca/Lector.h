#include "Libros.h"
#include <string>
using namespace std;
#ifndef LECTOR_H
#define LECTOR_H
class Lector
{
private:
  Libro librosPrestamo[3];
  string nombre;

public:
  Lector();
  ~Lector();
};

#endif // !LECTOR_H
