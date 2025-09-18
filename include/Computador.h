#ifndef COMPUTADOR_H
#define COMPUTADOR_H

#include <iostream>
#include <string>
#include "MemoriaUSB.h"
#include "Cliente.h"
#include "SistemaOperacional.h"
#include "HardwareBasico.h"

using namespace std;

class Computador
{
public:
    void montarPC(string marca, float preco);

    void mostraPCConfigs(HardwareBasico hardware, SistemaOperacional sistema, MemoriaUSB memoria);

    void addMemoriaUSB(MemoriaUSB &memoria, string tipo, int capacidade);

private:
    string marca;
    float preco;
};

#endif
