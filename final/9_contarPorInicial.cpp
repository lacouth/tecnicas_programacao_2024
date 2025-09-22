#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cassert>

using namespace std;


// Função auxiliar para comparar dois maps
bool compararMapas(const map<char, int>& m1, const map<char, int>& m2) {
    return m1 == m2;
}

// Função auxiliar para imprimir o map
void imprimirMap(const map<char, int>& m) {
    cout << "{ ";
    for (const auto& par : m) {
        cout << "'" << par.first << "': " << par.second << ", ";
    }
    cout << "}";
}

int main() {
    vector<string> entrada;
    map<char, int> esperado, obtido;

    // Teste 1: Letras misturadas
    entrada = {"Ana", "alice", "Bruno", "bernardo", "Carla", "carlos", "banana"};
    esperado = {
        {'A', 1},
        {'a', 1},
        {'B', 1},
        {'b', 2},
        {'C', 1},
        {'c', 1}
    };
    obtido = contarPorInicial(entrada);
    cout << "Teste 1 - Esperado: ";
    imprimirMap(esperado);
    cout << "\n          Obtido: ";
    imprimirMap(obtido);
    cout << "\n";
    assert(compararMapas(obtido, esperado));

    // Teste 2: Todas com mesma letra maiúscula
    entrada = {"Casa", "Carro", "Caminhão"};
    esperado = {
        {'C', 3}
    };
    obtido = contarPorInicial(entrada);
    cout << "\nTeste 2 - Esperado: ";
    imprimirMap(esperado);
    cout << "\n           Obtido: ";
    imprimirMap(obtido);
    cout << "\n";
    assert(compararMapas(obtido, esperado));

    // Teste 3: Mistura de letras e números
    entrada = {"1teste", "2teste", "Ana", "3", "#hashtag"};
    esperado = {
        {'1', 1},
        {'2', 1},
        {'A', 1},
        {'3', 1},
        {'#', 1}
    };
    obtido = contarPorInicial(entrada);
    cout << "\nTeste 3 - Esperado: ";
    imprimirMap(esperado);
    cout << "\n           Obtido: ";
    imprimirMap(obtido);
    cout << "\n";
    assert(compararMapas(obtido, esperado));

    // Teste 4: vetor vazio
    entrada = {};
    esperado = {};
    obtido = contarPorInicial(entrada);
    cout << "\nTeste 4 - Esperado: ";
    imprimirMap(esperado);
    cout << "\n           Obtido: ";
    imprimirMap(obtido);
    cout << "\n";
    assert(compararMapas(obtido, esperado));

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}