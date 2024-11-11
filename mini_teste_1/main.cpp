#include <iostream>
#include <iomanip>

using namespace std;

// Variável global para o saldo
double saldo = 0.0;

// Protótipos das funções
void inserirMoedas(double valor);
void comprarBebida(int bebida, int quantidade);
void sacarSaldo();
void mostrarBebidas();
void verSaldo();
void limparTela();
void pausar();


// Função principal
int main() {
    cout << fixed << setprecision(2); //Define a precisão dos números de ponto flutuante para duas casas decimais
    int opcao;
    double valorMoeda;
    int bebidaEscolhida, quantidade;

    do {
        limparTela();
        cout << "--- Máquina de Venda de Bebidas ---\n";
        cout << "1. Ver Bebidas\n";
        cout << "2. Inserir Moeda\n";
        cout << "3. Comprar Bebida\n";
        cout << "4. Ver Saldo\n";
        cout << "5. Sacar Saldo\n";
        cout << "6. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        limparTela();

        switch (opcao) {
        case 1:
            mostrarBebidas();
            break;
        case 2:
            cout << "Insira uma moeda (0.25, 0.50 ou 1.00): ";
            cin >> valorMoeda;
            inserirMoedas(valorMoeda);
            break;
        case 3:
            mostrarBebidas();
            cout << "Escolha uma bebida: ";
            cin >> bebidaEscolhida;
            cout << "Escolha a quantidade: ";
            cin >> quantidade;
            comprarBebida(bebidaEscolhida, quantidade);
            break;
        case 4:
            verSaldo();
            break;
        case 5:
            sacarSaldo();
            break;
        case 6:
            cout << "Encerrando o programa.\n";
            break;
        default:
            cout << "Opção inválida. Tente novamente.\n";
            break;
        }

        // Pausa entre cada operação
        if (opcao != 6) pausar();

    } while (opcao != 6);

    return 0;
}

// Função para exibir o menu de bebidas
void mostrarBebidas() {
    cout << "Bebidas disponíveis:\n";
    cout << "1. Água - R$0.50\n";
    cout << "2. Refrigerante - R$1.00\n";
    cout << "3. Suco - R$1.50\n";
}

// Função para exibir o saldo atual
void verSaldo() {
    cout << "Saldo atual: R$" << saldo << endl;
}

// Função para limpar a tela
void limparTela() {
    // Limpa a tela (funciona para a maioria dos sistemas)
    cout << "\033[2J\033[1;1H";
}

// Função para pausar e aguardar o Enter do usuário
void pausar() {
    cout << "Pressione Enter para continuar...";
    cin.ignore(); // ignora caracteres até o Enter
    cin.get(); // aguarda Enter
}

// Funções a serem completadas

void inserirMoedas(double valor) {

}

void comprarBebida(int bebida, int quantidade) {

}

void sacarSaldo() {

}
