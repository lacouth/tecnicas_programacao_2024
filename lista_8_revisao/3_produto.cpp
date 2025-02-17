#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;


int main() {
    // Teste 1: Criação do produto com valores válidos
    Produto p1("Caneta", 2.5, 100);
    assert(p1.getNome() == "Caneta");
    assert(fabs(p1.getPreco() - 2.5) < 1e-6);
    assert(p1.getQuantidade() == 100);
    
    // Teste 2: Criação com valores negativos
    Produto p2("Lápis", -1.0, -10);
    assert(p2.getNome() == "Lápis");
    assert(fabs(p2.getPreco() - 0) < 1e-6);
    assert(p2.getQuantidade() == 0);
    
    // Teste 3: Método vender()
    // Vender uma quantidade válida
    p1.vender(20);
    assert(p1.getQuantidade() == 80);
    // Tentar vender quantidade maior que o estoque (não altera)
    p1.vender(100);
    assert(p1.getQuantidade() == 80);
    // Tentar vender valor negativo (não altera)
    p1.vender(-5);
    assert(p1.getQuantidade() == 80);
    
    // Teste 4: Método repor()
    p1.repor(50);
    assert(p1.getQuantidade() == 130);
    // Tentar repor valor negativo (não altera)
    p1.repor(-30);
    assert(p1.getQuantidade() == 130);
    
    // Teste 5: Método calcularValorEstoque()
    double valorEstoque = p1.calcularValorEstoque();  // 2.5 * 130 = 325
    assert(fabs(valorEstoque - 325) < 1e-6);
    
    // Teste 6: Método aplicarDesconto()
    // Caso válido: aplicar 10% de desconto em p1 (2.5 * 0.9 = 2.25, que é >= 1)
    bool descontoAplicado = p1.aplicarDesconto(10);
    assert(descontoAplicado == true);
    assert(fabs(p1.getPreco() - 2.25) < 1e-6);
    
    // Tentar aplicar um desconto que resulte em preço inferior a 1:
    // Por exemplo, aplicar 90% de desconto em p1 (2.25 * 0.1 = 0.225 < 1)
    descontoAplicado = p1.aplicarDesconto(90);
    assert(descontoAplicado == false);
    assert(fabs(p1.getPreco() - 2.25) < 1e-6);
    
    // Tentar aplicar desconto com porcentagem inválida (ex.: 150%)
    descontoAplicado = p1.aplicarDesconto(150);
    assert(descontoAplicado == false);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
