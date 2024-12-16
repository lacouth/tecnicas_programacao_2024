#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int TAM = 3; // Quantidade de bebidas para venda

// Struct para armazenar as informacoes das bebidas
struct Bebida {
    string nome;
    double preco;
    int estoque;
};

// Struct para registrar vendas
struct Venda {
    string bebida;
    int quantidade;
    double valorTotal;
};

// Prototipos das funcoes
void mostrarBebidas(Bebida bebidas[], int tamanho);
void comprarBebida(Bebida bebidas[], int tamanho, double *saldo, int escolha, int quantidade);
void sacarSaldo(double *saldo);
void registrarVenda(const Venda &venda);
void inserirMoedas(double *saldo, double valor);
void verSaldo(double saldo);

// Funcao principal
int main() {
    Bebida bebidas[TAM] = {
        {"Agua", 0.50, 10},
        {"Refrigerante", 1.00, 10},
        {"Suco", 1.50, 10}
    };

    double saldo = 0.0;
    int opcao;

    do {
        system("cls");
        cout << "\n--- Maquina de Venda de Bebidas ---\n";
        cout << "1. Ver Bebidas\n";
        cout << "2. Inserir Moeda\n";
        cout << "3. Comprar Bebida\n";
        cout << "4. Ver Saldo\n";
        cout << "5. Sacar Saldo\n";
        cout << "6. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarBebidas(bebidas, TAM);
                break;
            case 2: {
                double valorMoeda;
                cout << "Insira uma moeda (valores aceitos: 0.25, 0.50, 1.00): ";
                cin >> valorMoeda;
                inserirMoedas(&saldo, valorMoeda);
                break;
            }
            case 3: {
                mostrarBebidas(bebidas,TAM);
                int escolha, quantidade;
                cout << "Escolha uma bebida pelo numero: ";
                cin >> escolha;
                cout << "Quantas unidades voce deseja comprar? ";
                cin >> quantidade;
                comprarBebida(bebidas, TAM, &saldo, escolha, quantidade);
                break;
            }
            case 4:
                verSaldo(saldo);
                break;
            case 5:
                sacarSaldo(&saldo);
                break;
            case 6:
                cout << "Encerrando o programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                break;
        }
        cout << "pressione ENTER para continuar...";
        cin.ignore();
        cin.get();
    } while (opcao != 6);

    return 0;
}

// Funcao para inserir moedas
void inserirMoedas(double *saldo, double valor) {
    if (valor == 0.25 || valor == 0.50 || valor == 1.00) {
        *saldo += valor;
        cout << "Moeda aceita. Saldo atualizado: R$" << fixed << setprecision(2) << *saldo << endl;
    } else {
        cout << "Moeda invalida. Por favor, insira um valor valido.\n";
    }
}

// Funcao para ver o saldo
void verSaldo(double saldo) {
    cout << "Saldo atual: R$" << fixed << setprecision(2) << saldo << endl;
}

// Funcao para registrar vendas em um arquivo CSV
void registrarVenda(const Venda &venda) {
    ofstream arquivo("vendas.csv", ios::app);
    if (arquivo.is_open()) {
        arquivo << venda.bebida << "," 
                << venda.quantidade << "," 
                << fixed << setprecision(2) << venda.valorTotal << endl;
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo de vendas.\n";
    }
}

// Funcoes a serem implementadas pelos alunos

void mostrarBebidas(Bebida bebidas[], int tamanho) {
    // Implemente a logica para exibir as bebidas e seus detalhes
}

void comprarBebida(Bebida bebidas[], int tamanho, double *saldo, int escolha, int quantidade) {
    // Implemente a logica para permitir a compra de bebidas
    // Atualize o estoque, saldo, e registre a venda usando a função registrarVenda
}

void sacarSaldo(double *saldo) {
    // Implemente a logica para exibir e zerar o saldo
}
