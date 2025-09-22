#include <iostream>
#include <cassert>

using namespace std;

/**
 * Retorna true se existir pelo menos um par de elementos
 * idênticos em posições consecutivas no array de inteiros.
 * Retorna false caso contrário (incluindo n < 2).
 */
bool existeConsecutivos(int arr[], int n) {
    if (n < 2) return false;
    for (int i = 0; i + 1 < n; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    // Teste 1: existe par consecutivo (2,2)
    int a1[] = {1, 2, 2, 3};
    assert(existeConsecutivos(a1, 4) == true);

    // Teste 2: todos iguais
    int a2[] = {5, 5, 5, 5};
    assert(existeConsecutivos(a2, 4) == true);

    // Teste 3: sem pares consecutivos
    int a3[] = {1, 2, 3, 4, 5};
    assert(existeConsecutivos(a3, 5) == false);

    // Teste 4: um único elemento
    int a4[] = {42};
    assert(existeConsecutivos(a4, 1) == false);

    // Teste 5: array vazio
    int a5[] = {};
    assert(existeConsecutivos(a5, 0) == false);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}