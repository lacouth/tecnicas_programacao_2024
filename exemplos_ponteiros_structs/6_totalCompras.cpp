#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    // Teste 1: um único item
    ItemCompra lista1[] = {
        {"Livro", 12.50, 2}
    };
    // 12.50 * 2 = 25.0
    assert(fabs(calcularTotalCompras(lista1, 1) - 25.0) < 1e-9);

    // Teste 2: vários itens
    ItemCompra lista2[] = {
        {"Caneta", 1.50, 3},    // 4.50
        {"Caderno", 7.00, 2},   // 14.00
        {"Borracha", 0.75, 4}   // 3.00
    };
    // Total = 4.50 + 14.00 + 3.00 = 21.50
    assert(fabs(calcularTotalCompras(lista2, 3) - 21.50) < 1e-9);

    // Teste 3: item com quantidade zero
    ItemCompra lista3[] = {
        {"Marcador", 2.00, 0},
        {"Papel", 0.10, 10}
    };
    // 2.00*0 + 0.10*10 = 1.0
    assert(fabs(calcularTotalCompras(lista3, 2) - 1.0) < 1e-9);

    // Teste 4: nenhum item (n = 0)
    ItemCompra lista4[1]; 
    assert(fabs(calcularTotalCompras(lista4, 0) - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
