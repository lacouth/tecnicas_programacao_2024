#include <iostream>
#include <cassert>

using namespace std;


int main() {
    int a, b, c, esperado, obtido;

    // Teste 1: maior no início
    a = 9; b = 4; c = 2;
    esperado = 9;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 1 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 2: maior no meio
    a = 3; b = 10; c = 2;
    esperado = 10;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 2 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 3: maior no final
    a = 1; b = 4; c = 7;
    esperado = 7;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 3 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 4: todos iguais
    a = b = c = 5;
    esperado = 5;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 4 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 5: dois valores maiores iguais
    a = 10; b = 10; c = 3;
    esperado = 10;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 5 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 6: números negativos
    a = -5; b = -2; c = -10;
    esperado = -2;
    obtido = maiorInteiro(a, b, c);
    cout << "Teste 6 - Entrada: (" << a << ", " << b << ", " << c << ")"
         << " | Esperado: " << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}