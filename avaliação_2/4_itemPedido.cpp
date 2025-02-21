#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;


int main(){
    // Teste para ItemPedido:
    ItemPedido item("Item Genérico", 15.0);
    assert(item.getNome() == "Item Genérico");
    assert(fabs(item.getPrecoBase() - 15.0) < 1e-6);
    assert(fabs(item.calcularCusto() - 15.0) < 1e-6);
    
    // Teste para Prato:
    Prato p1("Lasanha", 30.0, true);
    Prato p2("Salada", 20.0, false);
    assert(p1.getNome() == "Lasanha");
    assert(fabs(p1.calcularCusto() - 40.0) < 1e-6); // 30 + 10
    assert(p2.getNome() == "Salada");
    assert(fabs(p2.calcularCusto() - 20.0) < 1e-6);
    
    // Teste para Bebida:
    Bebida b1("Suco", 5.0, 4);
    Bebida b2("Refrigerante", 3.0, 6);
    assert(b1.getNome() == "Suco");
    assert(b1.getQuantidade() == 4);
    assert(fabs(b1.calcularCusto() - 20.0) < 1e-6); // 5 * 4
    assert(b2.getNome() == "Refrigerante");
    assert(b2.getQuantidade() == 6);
    assert(fabs(b2.calcularCusto() - 16.0) < 1e-6); // (3*6) - 2 = 16
    
    // Teste de validação de valores: preço negativo e quantidade negativa.
    Bebida b3("Água", -10.0, -3);
    assert(fabs(b3.getPrecoBase() - 0) < 1e-6);
    assert(b3.getQuantidade() == 0);
    assert(fabs(b3.calcularCusto() - 0) < 1e-6);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
