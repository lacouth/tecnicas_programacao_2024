#include <iostream>
#include <cassert>
#include <string>
using namespace std;


int main() {
    // Teste 1: ProdutoEletronico com preco > 1000.0
    ProdutoEletronico pe1("Smartphone", 1200.0);
    assert(pe1.calcularDesconto() == 120.0);
    cout << "Teste 1: ProdutoEletronico com preco 1200.0 - desconto correto." << endl;

    // Teste 2: ProdutoEletronico com preco <= 1000.0
    ProdutoEletronico pe2("Tablet", 800.0);
    assert(pe2.calcularDesconto() == 40.0);
    cout << "Teste 2: ProdutoEletronico com preco 800.0 - desconto correto." << endl;

    // Teste 3: ProdutoAlimenticio com diasParaExpirar <= 5
    ProdutoAlimenticio pa1("Iogurte", 50.0, 3);
    assert(pa1.calcularDesconto() == 10.0);
    cout << "Teste 3: ProdutoAlimenticio com preco 50.0 e diasParaExpirar 3 - desconto correto." << endl;

    // Teste 4: ProdutoAlimenticio com diasParaExpirar > 5
    ProdutoAlimenticio pa2("Queijo", 50.0, 10);
    assert(pa2.calcularDesconto() == 5.0);
    cout << "Teste 4: ProdutoAlimenticio com preco 50.0 e diasParaExpirar 10 - desconto correto." << endl;

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
