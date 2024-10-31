/*

Crie uma função chamada contaPositivos que receba um array de números inteiros e o tamanho do array 
como parâmetros e retorne a quantidade de números positivos presentes no array.

*/

#include <iostream>
#include <cassert>

using namespace std;


int main() {
    // Arrays para testes
    int arr1[] = {1, -2, 3, -4, 5};
    int arr2[] = {10, 20, -5, 8, -3};
    int arr3[] = {-1, -2, -3, -4};
    int arr4[] = {0, 0, 0, 0, 1};

    // Testes unitários
    assert(contaPositivos(arr1, 5) == 3);   // Há 3 números positivos: 1, 3, 5
    assert(contaPositivos(arr2, 5) == 3);   // Há 3 números positivos: 10, 20, 8
    assert(contaPositivos(arr3, 4) == 0);   // Nenhum número positivo
    assert(contaPositivos(arr4, 5) == 1);   // Há 1 número positivo: 1

    cout << "Todos os testes passaram!" << endl;

    return 0;
}
