#include <iostream>
#include <vector>
#include <cassert>

using namespace std;





// Função auxiliar para imprimir um vetor
void printVector(vector<int> vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << ", ";
    }
    cout << "]";
}

int main() {
    vector<int> input, expected, output;
    int n;
    
    // Teste 1
    // Entrada: {2, 4, 6, 8, 10}, n = 2, Esperado: {2, 4, 6, 8, 10}
    input = {2, 4, 6, 8, 10};
    n = 2;
    expected = {2, 4, 6, 8, 10};
    output = encontrarMultiplos(input, n);
    cout << "Teste 1:\nEntrada: ";
    printVector(input);
    cout << "\nMultiplo de: " << n;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 2
    // Entrada: {3, 5, 7, 9, 12}, n = 3, Esperado: {3, 9, 12}
    input = {3, 5, 7, 9, 12};
    n = 3;
    expected = {3, 9, 12};
    output = encontrarMultiplos(input, n);
    cout << "Teste 2:\nEntrada: ";
    printVector(input);
    cout << "\nMultiplo de: " << n;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 3
    // Entrada: {1, 4, 8, 10}, n = 3, Esperado: {}
    input = {1, 4, 8, 10};
    n = 3;
    expected = {};
    output = encontrarMultiplos(input, n);
    cout << "Teste 3:\nEntrada: ";
    printVector(input);
    cout << "\nMultiplo de: " << n;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 4
    // Entrada: {}, n = 5, Esperado: {}
    input = {};
    n = 5;
    expected = {};
    output = encontrarMultiplos(input, n);
    cout << "Teste 4:\nEntrada: ";
    printVector(input);
    cout << "\nMultiplo de: " << n;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 5
    // Entrada: {0, -3, -6, 5, 7}, n = -3, Esperado: {0, -3, -6}
    input = {0, -3, -6, 5, 7};
    n = -3;
    expected = {0, -3, -6};
    output = encontrarMultiplos(input, n);
    cout << "Teste 5:\nEntrada: ";
    printVector(input);
    cout << "\nMultiplo de: " << n;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
