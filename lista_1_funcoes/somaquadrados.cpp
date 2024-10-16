
// Crie uma função chamada somaQuadrados que receba dois números inteiros como parâmetros 
// e retorne a soma dos quadrados desses dois números. Por exemplo, a soma dos quadrados de 3 e 4 é 9 + 16 = 25.


#include <iostream>
#include <cassert>

using namespace std;

int main() {
    // Testes unitários
    assert(somaQuadrados(3, 4) == 25);
    assert(somaQuadrados(0, 0) == 0);
    assert(somaQuadrados(-3, 4) == 25);
    assert(somaQuadrados(5, -5) == 50);
    assert(somaQuadrados(1, 1) == 2);

    cout << "Todos os testes passaram!" << endl;

    return 0;
}
