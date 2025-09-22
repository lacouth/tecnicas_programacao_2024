#include <iostream>
#include <cassert>

using namespace std;



int main() {
    int esperado, obtido;

    // Testes da função soma
    cout << "Testes da função soma:\n";
    esperado = 7;
    obtido = soma(3, 4);
    cout << "soma(3, 4) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 3;
    obtido = soma(-2, 5);
    cout << "soma(-2, 5) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = -10;
    obtido = soma(-3, -7);
    cout << "soma(-3, -7) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 0;
    obtido = soma(0, 0);
    cout << "soma(0, 0) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 10;
    obtido = soma(0, 10);
    cout << "soma(0, 10) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    // Testes da função subtracao
    cout << "\nTestes da função subtracao:\n";
    esperado = 6;
    obtido = subtracao(10, 4);
    cout << "subtracao(10, 4) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = -6;
    obtido = subtracao(4, 10);
    cout << "subtracao(4, 10) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = -2;
    obtido = subtracao(-5, -3);
    cout << "subtracao(-5, -3) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 0;
    obtido = subtracao(0, 0);
    cout << "subtracao(0, 0) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = -7;
    obtido = subtracao(0, 7);
    cout << "subtracao(0, 7) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    // Testes da função multiplicacao
    cout << "\nTestes da função multiplicacao:\n";
    esperado = 15;
    obtido = multiplicacao(3, 5);
    cout << "multiplicacao(3, 5) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = -8;
    obtido = multiplicacao(-2, 4);
    cout << "multiplicacao(-2, 4) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 18;
    obtido = multiplicacao(-3, -6);
    cout << "multiplicacao(-3, -6) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 0;
    obtido = multiplicacao(0, 100);
    cout << "multiplicacao(0, 100) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    esperado = 0;
    obtido = multiplicacao(7, 0);
    cout << "multiplicacao(7, 0) -> Esperado: " << esperado << " | Obtido: " << obtido << "\n";
    assert(obtido == esperado);

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}
