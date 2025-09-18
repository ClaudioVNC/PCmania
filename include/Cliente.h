#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

using namespace std;

class Cliente
{
public:
    Cliente(const string &nome, const string &cpf);
    void adicionarCompra(float preco);
    float calculaTotalCompra();
    void mostrarCliente();

private:
    string nome;
    string cpf;
    float totalCompras;
};

#endif
