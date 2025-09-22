#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int x;

    // Teste 1
    x = 4;
    triplicar(x);
    assert(x == 12);

    // Teste 2
    x = -2;
    triplicar(x);
    assert(x == -6);

    // Teste 3
    x = 0;
    triplicar(x);
    assert(x == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
