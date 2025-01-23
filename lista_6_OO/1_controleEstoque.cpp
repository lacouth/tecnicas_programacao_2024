#include <iostream>
#include <cassert>
#include <string>

using namespace std;


int main() {
    Produto p1("Caneta", 1.5, 10);

    // Testa atributos iniciais
    assert(p1.getNome() == "Caneta");
    assert(p1.getPreco() == 1.5);
    assert(p1.getQuantidade() == 10);

    // Testa adicionar estoque
    p1.adicionarEstoque(5);
    assert(p1.getQuantidade() == 15);

    // Testa remover estoque
    p1.removerEstoque(3);
    assert(p1.getQuantidade() == 12);

    // Testa remoção inválida (quantidade maior que o disponível)
    p1.removerEstoque(20);
    assert(p1.getQuantidade() == 12);

    // Testa saída de informações
    assert(p1.getInfo() == "Produto: Caneta, Preço: 1.500000, Quantidade: 12");

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
