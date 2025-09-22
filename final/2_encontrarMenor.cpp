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
    int v[TAM], esperado, obtido;

    // Teste 1: array com valores positivos
    int teste1[TAM] = {5, 8, 12, 3, 9, 15, 7, 6, 11, 10};
    esperado = 3;
    obtido = encontrarMenor(teste1, TAM);
    cout << "Teste 1 - Entrada: ";
    imprimirArray(teste1, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 2: array com valores negativos
    int teste2[TAM] = {-2, -5, -1, -3, -4, -7, -6, -9, -8, -10};
    esperado = -10;
    obtido = encontrarMenor(teste2, TAM);
    cout << "Teste 2 - Entrada: ";
    imprimirArray(teste2, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 3: todos os valores iguais
    int teste3[TAM] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    esperado = 4;
    obtido = encontrarMenor(teste3, TAM);
    cout << "Teste 3 - Entrada: ";
    imprimirArray(teste3, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 4: menor valor na última posição
    int teste4[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, -1};
    esperado = -1;
    obtido = encontrarMenor(teste4, TAM);
    cout << "Teste 4 - Entrada: ";
    imprimirArray(teste4, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 5: menor valor na primeira posição
    int teste5[TAM] = {-99, 0, 10, 20, 30, 40, 50, 60, 70, 80};
    esperado = -99;
    obtido = encontrarMenor(teste5, TAM);
    cout << "Teste 5 - Entrada: ";
    imprimirArray(teste5, TAM);
    cout << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    cout << "\nTodos os testes passaram com sucesso!" << endl;

    return 0;
}
