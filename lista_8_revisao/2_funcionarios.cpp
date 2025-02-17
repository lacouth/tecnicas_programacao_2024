#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;


int main() {
    // Testes para Funcionario:
    Funcionario f1("João", 2000);
    assert(f1.getNome() == "João");
    assert(fabs(f1.getSalario() - 2000) < 1e-6);
    
    // Cria um funcionário com salário negativo: deve ficar com 0.
    Funcionario f2("Maria", -500);
    assert(fabs(f2.getSalario() - 0) < 1e-6);
    
    // Testa setSalario() com valor negativo (não altera o salário)
    f1.setSalario(-1000);
    assert(fabs(f1.getSalario() - 2000) < 1e-6);
    
    // Testes para Vendedor:
    // Vendedor com totalVendas abaixo de 1000: bônus deve ser 0.
    Vendedor v1("Carlos", 1500, 800);
    assert(fabs(v1.calcularBonus() - 0) < 1e-6);
    double salarioAntes = v1.getSalario();
    v1.atualizarSalarioComBonus();
    assert(fabs(v1.getSalario() - salarioAntes) < 1e-6);
    
    // Vendedor com totalVendas acima de 1000: bônus = 5% de 3000 = 150.
    Vendedor v2("Ana", 1800, 3000);
    assert(fabs(v2.calcularBonus() - 150) < 1e-6);
    v2.atualizarSalarioComBonus();
    // Novo salário deve ser 1800 + 150 = 1950.
    assert(fabs(v2.getSalario() - 1950) < 1e-6);
    
    // Testa o método registrarVenda:
    double vendasAntes = v1.getTotalVendas();
    v1.registrarVenda(500);    // venda válida
    assert(fabs(v1.getTotalVendas() - (vendasAntes + 500)) < 1e-6);
    v1.registrarVenda(-200);   // valor negativo deve ser ignorado
    assert(fabs(v1.getTotalVendas() - (vendasAntes + 500)) < 1e-6);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
