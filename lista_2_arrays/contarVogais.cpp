#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    cout << "\n--- Testando contarVogais ---" << endl;

    // Teste 1: Vogais maiúsculas e minúsculas
    int resultado1 = contarVogais("Linguagem de Programacao");
    if (resultado1 == 10) {
        cout << "Teste 1 (Linguagem de Programacao): PASSOU" << endl;
    } else {
        cout << "Teste 1: FALHOU. Esperado: 10, Recebido: " << resultado1 << endl;
    }

    // Teste 2: String sem vogais
    int resultado2 = contarVogais("Rhythm Glyphs");
    if (resultado2 == 0) {
        cout << "Teste 2 (Rhythm Glyphs): PASSOU" << endl;
    } else {
        cout << "Teste 2: FALHOU. Esperado: 0, Recebido: " << resultado2 << endl;
    }

    // Teste 3: String vazia
    int resultado3 = contarVogais("");
    if (resultado3 == 0) {
        cout << "Teste 3 (String vazia): PASSOU" << endl;
    } else {
        cout << "Teste 3: FALHOU. Esperado: 0, Recebido: " << resultado3 << endl;
    }

    // Teste 4: Apenas vogais
    int resultado4 = contarVogais("AEIOUaeiou");
    if (resultado4 == 10) {
        cout << "Teste 4 (AEIOUaeiou): PASSOU" << endl;
    } else {
        cout << "Teste 4: FALHOU. Esperado: 10, Recebido: " << resultado4 << endl;
    }
    return 0;
}