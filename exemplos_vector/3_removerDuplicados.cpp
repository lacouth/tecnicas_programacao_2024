#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;


int main() {
    // Teste 1: elementos repetidos
    vector<int> v1 = {1, 2, 2, 3, 1, 4};
    assert(removerDuplicados(v1) == vector<int>({1,2,3,4}));

    // Teste 2: sem repetidos
    vector<int> v2 = {5,6,7};
    assert(removerDuplicados(v2) == v2);

    // Teste 3: todos iguais
    vector<int> v3 = {9,9,9};
    assert(removerDuplicados(v3) == vector<int>({9}));

    cout << "Exemplo 2: testes OK\n";
    return 0;
}
