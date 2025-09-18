#ifndef SISTEMAOPERACIONAL_H
#define SISTEMAOPERACIONAL_H

#include <iostream>
#include <string>

using namespace std;

class SistemaOperacional
{
public:
    SistemaOperacional(string nome, int tipo);
    void mostraSO();

private:
    string nome;
    int tipo;
};

#endif
