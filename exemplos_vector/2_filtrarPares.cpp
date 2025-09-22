#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


int main() {
    // Teste 1: mistura de pares e ímpares
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    vector<int> esperado1 = {2, 4, 6};
    assert(filtrarPares(v1) == esperado1);

    // Teste 2: todos ímpares -> vetor vazio
    vector<int> v2 = {1, 3, 5, 7};
    assert(filtrarPares(v2).empty());

    // Teste 3: todos pares -> retorna igual ao original
    vector<int> v3 = {2, 4, 6, 8};
    assert(filtrarPares(v3) == v3);

    // Teste 4: vetor vazio -> retorna vazio
    vector<int> v4 = {};
    assert(filtrarPares(v4).empty());

    // Teste 5: elementos negativos e positivos
    vector<int> v5 = {-3, -2, 0, 1, 2};
    vector<int> esperado5 = {-2, 0, 2};
    assert(filtrarPares(v5) == esperado5);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
