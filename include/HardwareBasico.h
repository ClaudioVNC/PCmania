#ifndef HARDWAREBASICO_H
#define HARDWAREBASICO_H

#include <iostream>
#include <string>

using namespace std;

class HardwareBasico
{
public:
    HardwareBasico(string nome, float capacidade);
    void mostraHardware();

private:
    string nome;
    float capacidade;
};

#endif
