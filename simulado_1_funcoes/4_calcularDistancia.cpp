#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

struct Ponto {
    double x;
    double y;
};

double calcularDistancia(Ponto p1, Ponto p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    // Teste 1: distância entre (0,0) e (3,4) é 5
    Ponto a1 = {0.0, 0.0};
    Ponto b1 = {3.0, 4.0};
    assert(fabs(calcularDistancia(a1, b1) - 5.0) < 1e-9);

    // Teste 2: pontos idênticos -> distância 0
    Ponto a2 = {1.5, -2.5};
    Ponto b2 = {1.5, -2.5};
    assert(fabs(calcularDistancia(a2, b2) - 0.0) < 1e-9);

    // Teste 3: distância em um eixo
    Ponto a3 = {2.0, 3.0};
    Ponto b3 = {2.0, -1.0};
    // delta y = 4 -> distância = 4
    assert(fabs(calcularDistancia(a3, b3) - 4.0) < 1e-9);

    // Teste 4: valores não inteiros
    Ponto a4 = {0.0, 0.0};
    Ponto b4 = {0.5, 0.5};
    // sqrt(0.5^2 + 0.5^2) = sqrt(0.5) ≈ 0.707106781
    assert(fabs(calcularDistancia(a4, b4) - sqrt(0.5)) < 1e-9);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
