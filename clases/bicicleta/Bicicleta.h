#ifndef BICICLETA_H
#define BICICLETA_H
class Bicicleta
{
private:
    double kilometrosR;

public:
    Bicicleta();
    void pinchar();
    void pedalear(double);
    double mirarKmRecorridos();
    ~Bicicleta();
};
#endif