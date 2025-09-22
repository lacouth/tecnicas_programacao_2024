#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;


// Função auxiliar para imprimir um vetor de strings.
void printVector(vector<string> vec) {
    cout << "{";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << "\"" << vec[i] << "\"";
        if (i != vec.size() - 1)
            cout << ", ";
    }
    cout << "}";
}

int main() {
    vector<string> input, expected, output;
    char letra;
    
    // Teste 1
    // Entrada: {"casa", "carro", "sol", "lua", "flor", "casa", "arroz"}, c = 'c'
    // Esperado: {"carro", "casa"}
    input = {"casa", "carro", "sol", "lua", "flor", "casa", "arroz"};
    letra = 'c';
    expected = {"carro", "casa"};
    output = filtraPalavrasPorLetra(input, letra);
    cout << "Teste 1:\nEntrada: ";
    printVector(input);
    cout << "\nLetra: " << letra;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 2
    // Entrada: {"banana", "uva", "manga", "pera"}, c = 'm'
    // Esperado: {"manga"}
    input = {"banana", "uva", "manga", "pera"};
    letra = 'm';
    expected = {"manga"};
    output = filtraPalavrasPorLetra(input, letra);
    cout << "Teste 2:\nEntrada: ";
    printVector(input);
    cout << "\nLetra: " << letra;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    // Teste 3
    // Entrada: {"hello", "world", "test"}, c = 'z'
    // Esperado: {}
    input = {"hello", "world", "test"};
    letra = 'z';
    expected = {};
    output = filtraPalavrasPorLetra(input, letra);
    cout << "Teste 3:\nEntrada: ";
    printVector(input);
    cout << "\nLetra: " << letra;
    cout << "\nEsperado: ";
    printVector(expected);
    cout << "\nObtido: ";
    printVector(output);
    cout << "\n\n";
    assert(output == expected);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
