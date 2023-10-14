#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "Bicicleta.h"

class Persona
{
private:
    std::string nombre;
    Bicicleta miBicicleta;

public:
    Persona(std::string);
    void comprar(Bicicleta);
    void despinchar();
    void recorrer(double);
    void prestar(Persona);
    void devolver(Persona);
    ~Persona();
};

#endif