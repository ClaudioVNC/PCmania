#include <iostream>
#include <iomanip>
#include "../include/Computador.h"

using namespace std;

void Computador::montarPC(string marca, float preco)
{
    this->marca = marca;
    this->preco = preco;

    if (marca == "Apple")
    {
        HardwareBasico hardware("Pentium Core i3 (2200 Mhz)", 8.0);
        SistemaOperacional sistema("macOS Sequoia", 64);
        MemoriaUSB memoria;
        addMemoriaUSB(memoria, "Pen-drive", 16);

        // Mostra as configuracoes do PC montado
        mostraPCConfigs(hardware, sistema, memoria);
        return;
    }
    else if (marca == "Samsung")
    {
        HardwareBasico hardware("Pentium Core i5 (3370 Mhz)", 16.0);
        SistemaOperacional sistema("Windows 8", 64);
        MemoriaUSB memoria;
        addMemoriaUSB(memoria, "Pen-drive", 32);

        // Mostra as configuracoes do PC montado
        mostraPCConfigs(hardware, sistema, memoria);
        return;
    }
    else if (marca == "Dell")
    {
        HardwareBasico hardware("Pentium Core i7 (4500 Mhz)", 32.0);
        SistemaOperacional sistema("Windows 10", 64);
        MemoriaUSB memoria;
        addMemoriaUSB(memoria, "HD Externo", 1024);

        // Mostra as configuracoes do PC montado
        mostraPCConfigs(hardware, sistema, memoria);
        return;
    }
}

void Computador::mostraPCConfigs(HardwareBasico hardware, SistemaOperacional sistema, MemoriaUSB memoria)
{
    cout << "Computador montado com sucesso!" << endl;
    cout << "Marca: " << this->marca << endl;
    cout << fixed << setprecision(2);
    cout << "Preco: R$ " << this->preco << endl;
    hardware.mostraHardware();
    sistema.mostraSO();
    memoria.mostraMemoriaUSB();
    cout << endl;
}

void Computador::addMemoriaUSB(MemoriaUSB &memoria, string tipo, int capacidade)
{
    memoria.setMemoriaUSB(tipo, capacidade);
}

// nao entendi o porque precisa da funcao addMemoriaUSB, mas ok