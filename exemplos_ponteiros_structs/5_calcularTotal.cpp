#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    Produto item;

    // Teste 1: 1.5 * 10 = 15.0
    item = {"Caneta", 1.5, 10};
    assert(fabs(valorEstoque(item) - 15.0) < 1e-9);

    // Teste 2: 2.75 * 4 = 11.0
    item = {"Caderno", 2.75, 4};
    assert(fabs(valorEstoque(item) - 11.0) < 1e-9);

    // Teste 3: preço zero => valor 0
    item = {"Brinde", 0.0, 100};
    assert(fabs(valorEstoque(item) - 0.0) < 1e-9);

    // Teste 4: quantidade zero => valor 0
    item = {"Etiqueta", 5.0, 0};
    assert(fabs(valorEstoque(item) - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
