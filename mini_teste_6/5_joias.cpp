#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;


int main() {
    int resultado;

    resultado = contarJoiasDistintas({"()", "(())", "()", "()()"});
    if (resultado != 3) {
        cout << "Teste 1 falhou! Resultado obtido: " << resultado << ", esperado: 3" << endl;
        return 1;
    }

    resultado = contarJoiasDistintas({"((()))", "(())", "()"});
    if (resultado != 3) {
        cout << "Teste 2 falhou! Resultado obtido: " << resultado << ", esperado: 3" << endl;
        return 1;
    }

    resultado = contarJoiasDistintas({"()", "()", "()"});
    if (resultado != 1) {
        cout << "Teste 3 falhou! Resultado obtido: " << resultado << ", esperado: 1" << endl;
        return 1;
    }

    resultado = contarJoiasDistintas({"()()", "()()", "(())", "((()))", "()"});
    if (resultado != 4) {
        cout << "Teste 4 falhou! Resultado obtido: " << resultado << ", esperado: 4" << endl;
        return 1;
    }

    cout << "Todos os testes passaram!" << endl;
    return 0;
}