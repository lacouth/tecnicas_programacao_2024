#include <iostream>
#include <cassert>

using namespace std;


int main() {
    // Teste 1
    int matriz1[2][3] = {{1, 2, 3},
                         {4, 5, 6}};
    assert(somarElementosMatriz(matriz1, 2, 3) == 21);

    // Teste 2
    int matriz2[3][3] = {{0, 0, 0},
                         {0, 0, 0},
                         {0, 0, 0}};
    assert(somarElementosMatriz(matriz2, 3, 3) == 0);

    // Teste 3
    int matriz3[1][3] = {{10, -2, 5}};
    assert(somarElementosMatriz(matriz3, 1, 3) == 13);

    cout << "Todos os testes passaram com sucesso!" << endl;

    return 0;
}
