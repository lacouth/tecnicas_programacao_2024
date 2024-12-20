#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Estacao {
    string nomeCidade;
    int horaChegada;
};

string proximaParada(Estacao estacoes[], int tamanho, int horaAtual) {
    
}

int main() {
    Estacao estacoes[] = {
        {"Cidade A", 18},
        {"Cidade B", 20},
        {"Cidade C", 22},
        {"Cidade D", 23},
        {"Cidade E", 24}
    };

    // Teste 1: Hora atual antes de todas as paradas
    assert(proximaParada(estacoes, 5, 17) == "Cidade A");

    // Teste 2: Hora atual no meio das paradas
    assert(proximaParada(estacoes, 5, 19) == "Cidade B");

    // Teste 3: Hora atual depois da última parada
    assert(proximaParada(estacoes, 5, 24) == "Sem mais paradas");

    // Teste 4: Hora atual exatamente em uma parada
    assert(proximaParada(estacoes, 5, 22) == "Cidade D");

    // Teste 5: Nenhuma parada registrada
    Estacao semEstacoes[] = {};
    assert(proximaParada(semEstacoes, 0, 15) == "Sem mais paradas");

    cout << "Todos os testes passaram!\n";
    return 0;
}