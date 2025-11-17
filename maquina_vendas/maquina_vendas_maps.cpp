#include <iostream>
#include <iomanip> 
#include <string>
#include <map>     
#include <stdlib.h> 

using namespace std;

const string SENHA_ADMIN = "admin123"; 

void mostrarBebidas(const map<int, string>& nomes,
                    const map<int, double>& precos,
                    const map<int, int>& estoque);

void comprarBebida(int codigo, int quantidade, double& saldo,
                   const map<int, string>& nomes,
                   const map<int, double>& precos,
                   map<int, int>& estoque);

void inserirMoedas(double valor, double& saldo);
void verSaldo(double saldo);
void sacarSaldo(double& saldo);
void limparTela();
void pausar();

bool autenticarAdmin();
void reabastecerEstoque(map<int, int>& estoque, const map<int, string>& nomes);
void adicionarNovoProduto(map<int, string>& nomes,
                          map<int, double>& precos,
                          map<int, int>& estoque);

int main() {
    cout << fixed << setprecision(2); 

    double saldo = 0.0;
    int opcao;

    map<int, string> nomes;
    map<int, double> precos;
    map<int, int> estoque;

    nomes[101] = "Água";
    precos[101] = 0.50;
    estoque[101] = 10;

    nomes[102] = "Refrigerante";
    precos[102] = 1.00;
    estoque[102] = 5;

    nomes[103] = "Suco";
    precos[103] = 1.50;
    estoque[103] = 7;

    do {
        limparTela();
        cout << "--- Máquina de Venda de Bebidas 2.0 ---\n";
        cout << "1. Ver Bebidas\n";
        cout << "2. Inserir Moeda\n";
        cout << "3. Comprar Bebida\n";
        cout << "4. Ver Saldo\n";
        cout << "5. Sacar Saldo\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        limparTela();

        switch (opcao) {
            case 1:
                mostrarBebidas(nomes, precos, estoque);
                break;
            case 2:
                double valorMoeda;
                cout << "Insira uma moeda (0.25, 0.50 ou 1.00): ";
                cin >> valorMoeda;
                inserirMoedas(valorMoeda, saldo);
                break;
            case 3:
                int codigoEscolhido, quantidade;
                mostrarBebidas(nomes, precos, estoque);
                cout << "Escolha o código da bebida: ";
                cin >> codigoEscolhido;
                cout << "Escolha a quantidade: ";
                cin >> quantidade;
                comprarBebida(codigoEscolhido, quantidade, saldo, nomes, precos, estoque);
                break;
            case 4:
                verSaldo(saldo);
                break;
            case 5:
                sacarSaldo(saldo);
                break;
            case 0:
                cout << "Encerrando o programa.\n";
                break;
            
            case 88: 
                cout << "--- Modo Administrador: Reabastecer Estoque ---\n";
                if (autenticarAdmin()) {
                    reabastecerEstoque(estoque, nomes);
                } else {
                    cout << "Acesso negado.\n";
                }
                break;
            
            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }

        if (opcao != 0) pausar();
    } while (opcao != 0);

    return 0;
}

void mostrarBebidas(const map<int, string>& nomes,
                    const map<int, double>& precos,
                    const map<int, int>& estoque) {
    
}

void comprarBebida(int codigo, int quantidade, double& saldo,
                   const map<int, string>& nomes,
                   const map<int, double>& precos,
                   map<int, int>& estoque) {

   
}

void inserirMoedas(double valor, double& saldo) {
    if (valor == 0.25 || valor == 0.50 || valor == 1.00) {
        saldo += valor;
        cout << "Saldo atualizado: R$" << saldo << endl;
    } else {
        cout << "Moeda inválida. Insira 0.25, 0.50 ou 1.00." << endl;
    }
}

void verSaldo(double saldo) {
    cout << "Saldo atual: R$" << saldo << endl;
}

void sacarSaldo(double& saldo) {
    if (saldo > 0) {
        cout << "Saldo disponível: R$" << saldo << endl;
        cout << "Saldo sacado com sucesso.\n";
        saldo = 0.0;
    } else {
        cout << "Você não possui saldo para sacar.\n";
    }
}

void limparTela() {
    system("clear");
}

void pausar() {
    cout << "Pressione Enter para continuar...";
    cin.ignore();
    cin.get(); 
}

bool autenticarAdmin() {
    string tentativa;
    cout << "Por favor, insira a senha de administrador: ";
    cin >> tentativa;

    if (tentativa == SENHA_ADMIN) {
        cout << "Acesso concedido.\n";
        return true;
    } else {
        cout << "Senha incorreta.\n";
        return false;
    }
}

void reabastecerEstoque(map<int, int>& estoque, const map<int, string>& nomes) {
   
}

void adicionarNovoProduto(map<int, string>& nomes,
                          map<int, double>& precos,
                          map<int, int>& estoque) {
    
}
