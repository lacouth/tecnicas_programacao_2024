#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int main() {
    // Teste 1: mistura de menores e adultos
    vector<Pessoa> grupo1 = {
        {"Joao", 17},
        {"Maria", 18},
        {"Ana",   20},
        {"Paulo", 15}
    };
    assert(contarAdultos(grupo1) == 2);

    // Teste 2: todos adultos
    vector<Pessoa> grupo2 = {
        {"Carlos", 30},
        {"Lucia",  25}
    };
    assert(contarAdultos(grupo2) == 2);

    // Teste 3: todos menores
    vector<Pessoa> grupo3 = {
        {"Pedro", 10},
        {"Carla", 16}
    };
    assert(contarAdultos(grupo3) == 0);

    // Teste 4: vetor vazio
    vector<Pessoa> grupo4;
    assert(contarAdultos(grupo4) == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
