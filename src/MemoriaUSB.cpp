#include <iostream>
#include "../include/MemoriaUSB.h"

using namespace std;

void MemoriaUSB::setMemoriaUSB(string nome, int capacidade)
{
    this->nome = nome;
    this->capacidade = capacidade;
}
void MemoriaUSB::mostraMemoriaUSB()
{
    cout << "Acompanha: " << this->nome << " - " << this->capacidade << "GB" << endl;
}