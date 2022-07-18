/*
Projetar e implementar um sistema orientado a objetos para operar um caixa eletrônico de banco. 
O sistema deve ser capaz de realizar consultas (saldo / extrato), pagamentos (boleto), transferências 
(mesmo banco / banco diferente), depósitos (dinheiro / cheque) e saques.
*/

#include <iostream>

using namespace std;

string menuPrincipal = "Entre com o numero da operacao desejada:\n1- Consultas\n2- Deposito\n3- Saque\n4- Transferencia\n5- Pagamentos\n";
string listaBancos = "1- Itau\n2- Nubank\n3- Banco do Brasil\n4- Inter\n";
string QualBanco(int numBanco)
    {
        switch (numBanco)
        {
        case 1:
            return "Itau";
        case 2:
            return "Nubank";
        case 3:
            return "Banco do Brasil";
        case 4:
            return "Inter";
        default:
            break;
        }
        return "Desconhecido";
    }

class ContaBancaria
{
    public: 
        ContaBancaria()
        {
            cout << "Nome do titular: ";
            cin >> _titular;
            cout << "Numero da identidade: ";
            cin >> _id;
            while (_numBanco < 1 || _numBanco > 4)
        {
            cout << "Lista de bancos:\n" << listaBancos;
            cin >> _numBanco;
        }
            QualBanco(_numBanco);
            _numero = rand() % 100000;
        }

        int _numero;
        float _saldo = 0;
        int _numBanco = 0;
        string _banco;

    void Set_Saldo(float valor, int acao)
    {
        int deposito = 1, retirada = 2;
        if (valor < 0) { valor = (-1 * valor); }

        if (acao == 1)
        {
            _saldo = _saldo + valor;
            Atualizar_Extrato(valor);
            return;
        }
        else if (acao == 2)
        {
            _saldo = _saldo - valor;
            Atualizar_Extrato(valor);
            return;
        }
        else { return; }
    }

    private:
        string _titular;
        int _id;
        float _extrato[7];

        void Atualizar_Extrato(float valor)
        {
            for (int i = 6; i > 0; i--)
            {
                _extrato[i] = _extrato[i-1];
            }
            _extrato[0] = valor;
        }
};

int main()
{
    return 0;
}