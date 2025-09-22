#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


int main() {
    // Teste 1: dois picos (3 e 5)
    vector<int> v1 = {1, 3, 2, 5, 4};
    assert(contarPicos(v1) == 2);

    // Teste 2: vetor estritamente crescente -> sem picos
    vector<int> v2 = {1, 2, 3, 4, 5};
    assert(contarPicos(v2) == 0);

    // Teste 3: picos em posições alternadas -> dois picos (2, 2)
    vector<int> v3 = {1, 2, 1, 2, 1};
    assert(contarPicos(v3) == 2);

    // Teste 4: vetor muito curto -> sem picos
    vector<int> v4 = {10, 5};
    assert(contarPicos(v4) == 0);

    // Teste 5: todos os elementos iguais -> sem picos
    vector<int> v5 = {1, 1, 1, 1};
    assert(contarPicos(v5) == 0);

    // Teste 6: um único pico no meio
    vector<int> v6 = {5, 1, 5};
    assert(contarPicos(v6) == 1);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
