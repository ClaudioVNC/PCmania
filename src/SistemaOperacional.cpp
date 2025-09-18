#include <iostream>
#include "../include/SistemaOperacional.h"

using namespace std;

SistemaOperacional::SistemaOperacional(string nome, int tipo)
{
    this->nome = nome;
    this->tipo = tipo;
}

void SistemaOperacional::mostraSO()
{
    cout << "Sistema Operacional: " << this->nome << " (" << this->tipo << " bits)" << endl;
}