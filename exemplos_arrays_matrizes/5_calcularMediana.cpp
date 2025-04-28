#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;



int main() {
    // Teste 1: ímpar (mediana é 3)
    int array1[] = {5, 1, 3};
    assert(fabs(calcularMediana(array1, 3) - 3.0) < 1e-9);

    // Teste 2: par (mediana é (3+4)/2 = 3.5)
    int array2[] = {4, 1, 2, 5, 3, 6};
    assert(fabs(calcularMediana(array2, 6) - 3.5) < 1e-9);

    // Teste 3: um elemento (mediana é o próprio número)
    int array3[] = {10};
    assert(fabs(calcularMediana(array3, 1) - 10.0) < 1e-9);

    // Teste 4: array vazio (mediana é 0)
    int array4[] = {};
    assert(fabs(calcularMediana(array4, 0) - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;

    return 0;
}
