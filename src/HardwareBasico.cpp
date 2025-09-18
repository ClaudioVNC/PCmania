#include <iostream>
#include <iomanip>
#include "../include/HardwareBasico.h"

using namespace std;

HardwareBasico::HardwareBasico(string nome, float capacidade)
{
    this->nome = nome;
    this->capacidade = capacidade;
}

void HardwareBasico::mostraHardware()
{
    cout << "Hardware: " << this->nome << endl;
    cout << "Capacidade: " << fixed << setprecision(1) << this->capacidade << " GB" << endl;
}