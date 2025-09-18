#include <iostream>
#include <iomanip>
#include "../include/Cliente.h"

using namespace std;

Cliente::Cliente(const string &nome, const string &cpf)
{
    this->nome = nome;
    this->cpf = cpf;
    this->totalCompras = 0.0;
}

void Cliente::adicionarCompra(float preco)
{
    totalCompras += preco;
}

float Cliente::calculaTotalCompra()
{
    return totalCompras;
}

void Cliente::mostrarCliente()
{
    cout << "Cliente: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total: R$ " << calculaTotalCompra() << endl;
}