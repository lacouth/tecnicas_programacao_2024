#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int x, y;

    // Teste 1
    x = 10;
    y = 20;
    trocar(&x, &y);
    assert(x == 20 && y == 10);

    // Teste 2
    x = -5;
    y = 100;
    trocar(&x, &y);
    assert(x == 100 && y == -5);

    // Teste 3
    x = 7;
    y = 7;
    trocar(&x, &y);
    assert(x == 7 && y == 7);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
