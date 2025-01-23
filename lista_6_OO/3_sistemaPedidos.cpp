#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main() {
    Produto p1("Hambúrguer", 15.0);
    Produto p2("Batata Frita", 10.0);
    Produto p3("Refrigerante", 5.0);

    Pedido pedido;
    pedido.adicionarProduto(p1);
    pedido.adicionarProduto(p2);
    pedido.adicionarProduto(p3);

    // Testa cálculo do total
    assert(pedido.calcularTotal() == 30.0);

    // Testa resumo do pedido
    cout << "Resumo esperado:" << endl;
    pedido.getResumo();

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
