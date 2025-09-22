#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
using namespace std;



int main() {
    Robo r1("Explorer", 90);
    r1.carregar(15);
    cout << "Teste 1:\nEsperado: 100\nObtido: " << r1.getNivelBateria() << "\n\n";
    assert(fabs(r1.getNivelBateria() - 100.0) < 1e-9);

    Robo r2("Polar", -50);
    cout << "Teste 2:\nEsperado: 0\nObtido: " << r2.getNivelBateria() << "\n\n";
    assert(fabs(r2.getNivelBateria() - 0.0) < 1e-9);

    Robo r3("Ártico", 50);
    r3.carregar(-10);
    cout << "Teste 3:\nEsperado: 50\nObtido: " << r3.getNivelBateria() << "\n\n";
    assert(fabs(r3.getNivelBateria() - 50.0) < 1e-9);

    Robo r4("Nevasca", 25);
    bool ativou = r4.modoEconomico();
    cout << "Teste 4:\nEsperado ativou: 1\nObtido ativou: " << ativou << "\nEsperado bateria: 27.5\nObtido: " << r4.getNivelBateria() << "\n\n";
    assert(ativou == true);
    assert(fabs(r4.getNivelBateria() - 27.5) < 1e-9);

    Robo r5("Gelo", 40);
    bool ativado = r5.modoEconomico();
    cout << "Teste 5:\nEsperado ativou: 0\nObtido ativou: " << ativado << "\nEsperado bateria: 40\nObtido: " << r5.getNivelBateria() << "\n\n";
    assert(ativado == false);
    assert(fabs(r5.getNivelBateria() - 40.0) < 1e-9);

    Robo r6("Resetador", 70);
    r6.resetarBateria();
    cout << "Teste 6:\nEsperado: 0\nObtido: " << r6.getNivelBateria() << "\n\n";
    assert(fabs(r6.getNivelBateria() - 0.0) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
