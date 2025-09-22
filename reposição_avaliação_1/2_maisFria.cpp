#include <iostream>
#include <string>
#include <cassert>
using namespace std;



int main() {
    Camara lista[10];
    int tamanho;
    string esperado, obtido;

    lista[0] = {"C1", -5.0};
    lista[1] = {"C2", -10.0};
    lista[2] = {"C3", -3.0};
    tamanho = 3;
    esperado = "C2";
    obtido = maisFria(lista, tamanho);
    cout << "Teste 1:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    lista[0] = {"Norte", -2.0};
    lista[1] = {"Sul", -8.5};
    tamanho = 2;
    esperado = "Sul";
    obtido = maisFria(lista, tamanho);
    cout << "Teste 2:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    lista[0] = {"Unica", -7.7};
    tamanho = 1;
    esperado = "Unica";
    obtido = maisFria(lista, tamanho);
    cout << "Teste 3:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    tamanho = 0;
    esperado = "";
    obtido = maisFria(lista, tamanho);
    cout << "Teste 4 (lista vazia):\nEsperado: \"\"\nObtido: \"" << obtido << "\"\n\n";
    assert(obtido == esperado);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
