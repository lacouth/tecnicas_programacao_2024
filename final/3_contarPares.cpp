#include <iostream>
#include <cassert>

using namespace std;



// Função auxiliar para exibir o conteúdo do array
void imprimirArray(int v[], int tamanho) {
    cout << "[";
    for (int i = 0; i < tamanho; i++) {
        cout << v[i];
        if (i < tamanho - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    const int TAM = 10;
    int esperado, obtido;

    // Teste 1: metade pares, metade ímpares
    int teste1[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    esperado = 5;
    obtido = contarPares(teste1, TAM);
    cout << "Teste 1 - Entrada: ";
    imprimirArray(teste1, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 2: todos pares
    int teste2[TAM] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    esperado = 10;
    obtido = contarPares(teste2, TAM);
    cout << "Teste 2 - Entrada: ";
    imprimirArray(teste2, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 3: todos ímpares
    int teste3[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    esperado = 0;
    obtido = contarPares(teste3, TAM);
    cout << "Teste 3 - Entrada: ";
    imprimirArray(teste3, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 4: pares apenas no início e fim
    int teste4[TAM] = {2, 4, 1, 3, 5, 7, 9, 11, 14, 16};
    esperado = 4;
    obtido = contarPares(teste4, TAM);
    cout << "Teste 4 - Entrada: ";
    imprimirArray(teste4, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 5: valores negativos misturados
    int teste5[TAM] = {-2, -3, -4, -5, -6, 1, 2, 3, 4, 5};
    esperado = 5;  // -2, -4, -6, 2, 4
    obtido = contarPares(teste5, TAM);
    cout << "Teste 5 - Entrada: ";
    imprimirArray(teste5, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}
