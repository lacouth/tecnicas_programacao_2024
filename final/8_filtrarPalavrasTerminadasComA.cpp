#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;



// Função auxiliar para comparar vetores de strings
bool compararVetores(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

// Função auxiliar para imprimir vetores
void imprimirVector(const vector<string>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << "\"" << v[i] << "\"";
        if (i < v.size() - 1) cout << ", ";
    }
    cout << "]";
}

int main() {
    vector<string> entrada, esperado, obtido;

    // Teste 1
    entrada = {"banana", "uva", "melancia", "abacaxi"};
    esperado = {"banana", "uva", "melancia"};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 1 - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    // Teste 2: letras maiúsculas
    entrada = {"Pizza", "Torta", "Café", "ÁGUA", "Bolo"};
    esperado = {"Pizza", "Torta", "ÁGUA"};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 2 - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    // Teste 3: nenhuma termina com 'a' ou 'A'
    entrada = {"carro", "sol", "chuva", "vento"};
    esperado = {};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 3 - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    // Teste 4: vetor vazio
    entrada = {};
    esperado = {};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 4 - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    // Teste 5: mistura de palavras com e sem 'a'/'A'
    entrada = {"mesa", "cadeira", "porta", "janela", "mouse", "teclado"};
    esperado = {"mesa", "cadeira", "porta", "janela"};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 5 - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

        // Teste 6: palavras repetidas terminadas com 'a' ou 'A'
    entrada = {"banana", "banana", "uva", "banana", "abacaxi", "uva"};
    esperado = {"banana", "banana", "uva", "banana", "uva"};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 6 - Palavras repetidas (válidas) - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    // Teste 7: palavras repetidas mas algumas não terminam com 'a'
    entrada = {"porta", "porta", "mesa", "cadeira", "copo", "copo"};
    esperado = {"porta", "porta", "mesa", "cadeira"};
    obtido = filtrarPalavrasTerminadasEmA(entrada);
    cout << "Teste 7 - Repetidas com filtro - Esperado: ";
    imprimirVector(esperado);
    cout << " | Obtido: ";
    imprimirVector(obtido);
    cout << endl;
    assert(compararVetores(obtido, esperado));

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}
