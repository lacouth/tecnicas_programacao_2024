#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    Aluno x;

    // Teste 1: média = (8.0 + 6.0) / 2 = 7.0
    x = {"Ana", 8.0, 6.0};
    assert(fabs(calcularMedia(x) - 7.0) < 1e-9);

    // Teste 2: média = (5.5 + 4.5) / 2 = 5.0
    x = {"Bruno", 5.5, 4.5};
    assert(fabs(calcularMedia(x) - 5.0) < 1e-9);

    // Teste 3: média = (0.0 + 0.0) / 2 = 0.0
    x = {"Carla", 0.0, 0.0};
    assert(fabs(calcularMedia(x) - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
