#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int x;

    // Teste 1
    x = 5;
    dobrarValor(&x);
    assert(x == 10);

    // Teste 2
    x = -3;
    dobrarValor(&x);
    assert(x == -6);

    // Teste 3
    x = 0;
    dobrarValor(&x);
    assert(x == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
