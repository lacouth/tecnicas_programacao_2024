#include <iostream>
#include <string>
#include <cassert>

using namespace std;



int main() {
    // Teste 1
    assert(contarEspacos("Tecnicas de programacao") == 2);

    // Teste 2
    assert(contarEspacos("Ola mundo!") == 1);

    // Teste 3
    assert(contarEspacos("SemEspacosAqui") == 0);

    // Teste 4
    assert(contarEspacos("   Tres espacos no inicio") == 6);

    cout << "Todos os testes passaram com sucesso!" << endl;

    return 0;
}
