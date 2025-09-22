#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int main() {
    Jogador jogadores[5];
    int totais[5];
    int esperado[5];

    jogadores[0] = {"Alice", {10, 20, 30}};
    jogadores[1] = {"Bob", {15, 15, 15}};
    jogadores[2] = {"Clara", {5, 5, 5}};

    somarPontuacoes(jogadores, 3, totais);
    esperado[0] = 60;
    esperado[1] = 45;
    esperado[2] = 15;

    cout << "Teste 1:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Esperado jogador " << i << ": " << esperado[i] << "\nObtido: " << totais[i] << "\n\n";
        assert(totais[i] == esperado[i]);
    }

    jogadores[0] = {"Dani", {0, 0, 0}};
    jogadores[1] = {"Eli", {100, 50, 25}};
    somarPontuacoes(jogadores, 2, totais);
    esperado[0] = 0;
    esperado[1] = 175;

    cout << "Teste 2:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Esperado jogador " << i << ": " << esperado[i] << "\nObtido: " << totais[i] << "\n\n";
        assert(totais[i] == esperado[i]);
    }

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
