#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;


int main() {
    // Testes de Controle de Tensão:
    Resistor r(10, 100); // 10 V e 100 Ω => corrente = 0.1 A
    assert(fabs(r.getTensao() - 10) < 1e-6);
    assert(fabs(r.calcularCorrente() - 0.1) < 1e-6);
    
    // Atualiza para um valor válido
    r.setTensao(12);
    assert(fabs(r.getTensao() - 12) < 1e-6);
    
    // Atualiza com valor inválido: tensão deve ser definida para 0
    r.setTensao(-5);
    assert(fabs(r.getTensao() - 0) < 1e-6);
    
    // Testa a inicialização com valor inválido via construtor
    Resistor r2(20, 100);  // 20 V é inválido, logo tensao deve ser 0
    assert(fabs(r2.getTensao() - 0) < 1e-6);
    
    // Testes para o Diodo:
    Diodo d1(0.5, 100); // 0.5 V, corrente deve ser 0 (0.5 < 0.7)
    assert(fabs(d1.getTensao() - 0.5) < 1e-6);
    assert(fabs(d1.calcularCorrente() - 0) < 1e-6);
    
    Diodo d2(5, 100); // 5 V: corrente ≈ (5 - 0.7)/100 ≈ 0.043 A
    assert(fabs(d2.getTensao() - 5) < 1e-6);
    assert(fabs(d2.calcularCorrente() - ((5 - 0.7) / 100)) < 1e-6);
    
    // Teste do Ajuste de Resistência (para Resistor):
    // Inicialmente: r tem tensão 10 V e resistência 100 Ω => corrente = 0.1 A
    r.setTensao(10);
    assert(fabs(r.getResistencia() - 100) < 1e-6);
    
    // Ajusta para 50 Ω: corrente = 10/50 = 0.2 A (válido, pois ≤ 0.5 A)
    r.ajustarResistencia(50);
    assert(fabs(r.getResistencia() - 50) < 1e-6);
    
    // Tenta ajustar para 10 Ω: corrente = 10/10 = 1.0 A (inválido, corrente > 0.5 A)
    r.ajustarResistencia(10);
    assert(fabs(r.getResistencia() - 50) < 1e-6);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
