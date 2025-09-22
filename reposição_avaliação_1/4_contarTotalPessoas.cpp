#include <iostream>
#include <string>
#include <cassert>
using namespace std;



int main() {
    Reserva reservas[10];
    int esperado, obtido;

    reservas[0] = {"Alice", 2};
    reservas[1] = {"Bruno", 0};
    reservas[2] = {"Carla", 3};
    esperado = 8;
    obtido = contarTotalPessoas(reservas, 3);
    cout << "Teste 1:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    reservas[0] = {"Diego", 0};
    esperado = 1;
    obtido = contarTotalPessoas(reservas, 1);
    cout << "Teste 2:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    reservas[0] = {"Eva", 1};
    reservas[1] = {"Fábio", 1};
    reservas[2] = {"Gabi", 1};
    esperado = 6;
    obtido = contarTotalPessoas(reservas, 3);
    cout << "Teste 3:\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    esperado = 0;
    obtido = contarTotalPessoas(reservas, 0);
    cout << "Teste 4 (lista vazia):\nEsperado: " << esperado << "\nObtido: " << obtido << "\n\n";
    assert(obtido == esperado);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
