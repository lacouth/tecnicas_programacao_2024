#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int main() {
    // Teste 1: valores diferentes
    vector<ItemCompra> lista1 = {
        {"Caneta",   1.50, 10},  // total = 15.0
        {"Caderno",  5.00,  3},  // total = 15.0 (empate lexical com Caneta)
        {"Borracha", 0.75,  4}   // total = 3.0
    };
    assert(ordenarNomesPorValorTotal(lista1) ==
           vector<string>({"Caderno","Caneta","Borracha"}));

    // Teste 2: valores distintos
    vector<ItemCompra> lista2 = {
        {"Livro",    12.0, 2},   // 24.0
        {"Lapis",     1.0, 5},   // 5.0
        {"Agenda",    7.5, 1}    // 7.5
    };
    assert(ordenarNomesPorValorTotal(lista2) ==
           vector<string>({"Livro","Agenda","Lapis"}));

    // Teste 3: vetor vazio
    vector<ItemCompra> lista3;
    assert(ordenarNomesPorValorTotal(lista3).empty());

    // Teste 4: único item
    vector<ItemCompra> lista4 = {{"Mochila",  50.0, 1}};
    assert(ordenarNomesPorValorTotal(lista4) == vector<string>({"Mochila"}));

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
