#include <iostream>
#include <iomanip>
#include "../include/Computador.h"
#include "../include/Cliente.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Ola, bem vindo a PC Mania!" << endl
         << "Melhor loja de PCs de todo mundo!" << endl
         << endl;

    // Cadastro do cliente
    string nome, cpf;
    cout << "Por favor, digite seu nome: ";
    cin >> nome;
    cout << "Digite seu CPF: ";
    cin >> cpf;

    Cliente cliente(nome, cpf);
    cout << endl
         << "Cliente cadastrado com sucesso!" << endl
         << endl;

    int cont_promo = 0;

    // Tabela de promocoes
    cout << "===========================================================================================" << endl;
    cout << "|                                    NOSSAS PROMOCOES                                     |" << endl;
    cout << "===========================================================================================" << endl;
    cout << "|    Promocao 1               |         Promocao 2           |         Promocao 3         |" << endl;
    cout << "===========================================================================================" << endl;
    cout << "| Marca: Apple                | Marca: Samsung               | Marca: Dell                |" << endl;
    cout << "| Preco: R$ 654,00            | Preco: R$ 1880,00            | Preco: R$ 6332,00          |" << endl;
    cout << "| Pentium Core i3 (2200 Mhz)  | Pentium Core i5 (3370 Mhz)   | Pentium Core i7 (4500 Mhz) |" << endl;
    cout << "| 8 Gb de Memoria RAM         | 16 Gb de Memoria RAM         | 32 Gb de Memoria RAM       |" << endl;
    cout << "| 500Gb de HD                 | 1Tb de HD                    | 2Tb de HD                  |" << endl;
    cout << "| Sistema Operacional         | Sistema Operacional          | Sistema Operacional        |" << endl;
    cout << "| macOS Sequoia (64 bits)     | Windows 8 (64 bits)          | Windows 10 (64 bits)       |" << endl;
    cout << "| Acompanha Pen-drive de 16Gb | Acompanha Pen-drive de 32Gb  | Acompanha HD Externo 1Tb   |" << endl;
    cout << "===========================================================================================" << endl;

    // Escolha das promocoes
    while (true)
    {
        cout << "Escolha o numero da promocao que deseja (1, 2 ou 3) ou 0 para sair: ";
        int promocao;
        cin >> promocao;

        if (promocao == 1)
        {
            cout << "Voce escolheu a Promocao 1!" << endl;
            cont_promo++;
            cliente.adicionarCompra(654.00);
            Computador computador;
            computador.montarPC("Apple", 654.00);
        }
        else if (promocao == 2)
        {
            cout << "Voce escolheu a Promocao 2!" << endl;
            cont_promo++;
            cliente.adicionarCompra(1880.00);
            Computador computador;
            computador.montarPC("Samsung", 1880.00);
        }
        else if (promocao == 3)
        {
            cout << "Voce escolheu a Promocao 3!" << endl;
            cont_promo++;
            cliente.adicionarCompra(6332.00);
            Computador computador;
            computador.montarPC("Dell", 6332.00);
        }
        else if (promocao == 0)
        {
            if (cont_promo < 2)
            {
                cout << "Nao pode sair ainda!" << endl
                     << "Precisa comprar pelo menos 2 computadores. Normas da empresa!" << endl;
            }
            else
            {
                cout << endl
                     << "=== RESUMO DA COMPRA ===" << endl;
                cliente.mostrarCliente();
                cout << "Numero de compras: " << cont_promo << endl;
                break;
            }
        }
        else
        {
            cout << "Promocao invalida!" << endl;
        }
    }
    return 0;
}
