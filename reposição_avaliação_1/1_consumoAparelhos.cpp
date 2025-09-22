#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
using namespace std;






int main() {
    Aparelho aparelhos[10];
    float esperado, obtido;
    int tamanho;

    aparelhos[0] = {"Geladeira", 1.5, 24};
    aparelhos[1] = {"Televisão", 0.2, 5};
    aparelhos[2] = {"Computador", 0.5, 8};
    tamanho = 3;
    esperado = 41.0;
    obtido = calcularConsumoDiarioTotal(aparelhos, tamanho);
    cout << "Teste 1:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(fabs(obtido - esperado) < 1e-9);

    aparelhos[0] = {"Ventilador", 0.1, 10};
    tamanho = 1;
    esperado = 1.0;
    obtido = calcularConsumoDiarioTotal(aparelhos, tamanho);
    cout << "Teste 2:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(fabs(obtido - esperado) < 1e-9);

    tamanho = 0;
    esperado = 0.0;
    obtido = calcularConsumoDiarioTotal(aparelhos, tamanho);
    cout << "Teste 3:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(fabs(obtido - esperado) < 1e-9);

    aparelhos[0] = {"Micro-ondas", 1.2, 1};
    aparelhos[1] = {"Chuveiro", 5.0, 0.5};
    tamanho = 2;
    esperado = 3.7;
    obtido = calcularConsumoDiarioTotal(aparelhos, tamanho);
    cout << "Teste 4:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(fabs(obtido - esperado) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
