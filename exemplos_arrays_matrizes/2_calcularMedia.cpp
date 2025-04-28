#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;


int main() {
    // Teste 1
    double array1[] = {2.5, 4.0, 6.5, 8.0, 10.0};
    assert(fabs(calcularMedia(array1, 5) - 6.2) < 1e-9);

    // Teste 2
    double array2[] = {1.1, 1.1, 1.1, 1.1};
    assert(fabs(calcularMedia(array2, 4) - 1.1) < 1e-9);

    // Teste 3
    double array3[] = {0.0};
    assert(fabs(calcularMedia(array3, 1) - 0.0) < 1e-9);

    // Teste 4 - array vazio
    double array4[] = {};
    assert(fabs(calcularMedia(array4, 0) - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;

    return 0;
}
