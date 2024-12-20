#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Carta {
    string nomeCrianca;
    string statusEnvio; // Valores possíveis: "Enviada" ou "Nao enviada"
};

int contarCartasEnviadas(Carta cartas[], int tamanho) {
    
}

int main() {
    Carta cartas[] = {
        {"Joao", "Enviada"},
        {"Maria", "Nao enviada"},
        {"Pedro", "Enviada"},
        {"Ana", "Enviada"},
        {"Carlos", "Nao enviada"}
    };

    // Teste 1: Contar cartas enviadas
    assert(contarCartasEnviadas(cartas, 5) == 3);

    // Teste 2: Todas as cartas enviadas
    Carta todasEnviadas[] = {
        {"Laura", "Enviada"},
        {"Lucas", "Enviada"}
    };
    assert(contarCartasEnviadas(todasEnviadas, 2) == 2);

    // Teste 3: Nenhuma carta enviada
    Carta nenhumaEnviada[] = {
        {"Rafaela", "Nao enviada"},
        {"Gabriel", "Nao enviada"}
    };
    assert(contarCartasEnviadas(nenhumaEnviada, 2) == 0);

    cout << "Todos os testes passaram!\n";
    return 0;
}