#ifndef MEMORIAUSB_H
#define MEMORIAUSB_H

#include <iostream>
#include <string>

using namespace std;

class MemoriaUSB
{
public:

    void mostraMemoriaUSB();
    void setMemoriaUSB(string nome, int capacidade);

    private:
    string nome;
    int capacidade;
};

#endif
