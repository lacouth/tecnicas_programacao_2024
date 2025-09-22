#include <iostream>
#include <cassert>


using namespace std;



int main() {
    int a, b, esperado, obtido;

    // Teste 1: a mais próximo de 100
    a = 95; b = 80;
    esperado = 95;
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 1 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 2: b mais próximo de 100
    a = 60; b = 99;
    esperado = 99;
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 2 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 3: ambos à mesma distância
    a = 90; b = 110;
    esperado = 0;
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 3 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 4: um deles é exatamente 100
    a = 100; b = 97;
    esperado = 100;
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 4 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 5: os dois são 100 (iguais e exatos)
    a = 100; b = 100;
    esperado = 0;
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 5 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    // Teste 6: números negativos
    a = -10; b = 200;
    esperado = 200; // distâncias: 110 e 100
    obtido = maisProximoDeCem(a, b);
    cout << "Teste 6 - Entrada: (" << a << ", " << b << ") | Esperado: " 
         << esperado << " | Obtido: " << obtido << endl;
    assert(obtido == esperado);

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}
