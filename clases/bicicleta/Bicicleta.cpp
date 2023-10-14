#include "Bicicleta.h"
#include <iostream>

using namespace std;

/**
 * metodo constructor que permite construir una Bicicleta
 * de 0 km recorridos
 */
Bicicleta::Bicicleta()
{
    kilometrosR = 0;
    cout << "Se creó una bicicleta que tiene " << kilometrosR << " km recorridos!" << endl;
}

/**
 * método que recibe una cantidad de kilometros y actualiza los
 * kilometros recorridos por la bicicleta aumentando su valor
 */

void Bicicleta::pedalear(double km)
{
    kilometrosR += km;
    cout << "La bicicleta está pedaleando...." << km << " kilómetros" << endl;
}

void Bicicleta::pinchar()
{
    cout << "La biciceta se pinchó! :(" << endl;
}

/**
 * este método devuelve cuantos kim recorridos tiene la bicicleta
 */
double Bicicleta::mirarKmRecorridos()
{
    return kilometrosR;
}

Bicicleta::~Bicicleta()
{
}