#include <iostream>
#include <string>


using namespace std;

// --- COLOQUE SUA FUNÇÃO AQUI ---


int main() {
    cout << "\n--- Testando contarCaractere ---" << endl;

    // Teste 1: Contar a letra 'a' em uma frase
    int resultado1 = contarCaractere("banana", 'a');
    if (resultado1 == 3) {
        cout << "Teste 1 (contar 'a' em banana): PASSOU" << endl;
    } else {
        cout << "Teste 1: FALHOU. Esperado: 3, Recebido: " << resultado1 << endl;
    }

    // Teste 2: Caractere que não existe na string
    int resultado2 = contarCaractere("Ola Mundo", 'z');
    if (resultado2 == 0) {
        cout << "Teste 2 (contar 'z' em Ola Mundo): PASSOU" << endl;
    } else {
        cout << "Teste 2: FALHOU. Esperado: 0, Recebido: " << resultado2 << endl;
    }

    // Teste 3: Teste com string vazia
    int resultado3 = contarCaractere("", 'x');
    if (resultado3 == 0) {
        cout << "Teste 3 (string vazia): PASSOU" << endl;
    } else {
        cout << "Teste 3: FALHOU. Esperado: 0, Recebido: " << resultado3 << endl;
    }

    // Teste 4: Teste sensível a maiúsculas
    int resultado4 = contarCaractere("Abacaxi", 'a'); // Deve contar apenas 'a' minúsculo
    if (resultado4 == 2) {
        cout << "Teste 4 (sensível a maiúsculas): PASSOU" << endl;
    } else {
        cout << "Teste 4: FALHOU. Esperado: 2, Recebido: " << resultado4 << endl;
    }

    // Teste 5: Contar um espaço
    int resultado5 = contarCaractere("C++ e uma linguagem poderosa", ' ');
    if (resultado5 == 4) {
        cout << "Teste 5 (contar espacos): PASSOU" << endl;
    } else {
        cout << "Teste 5: FALHOU. Esperado: 4, Recebido: " << resultado5 << endl;
    }
    return 0;
}