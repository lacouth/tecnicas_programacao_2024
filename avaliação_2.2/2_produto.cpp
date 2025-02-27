#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;


int main() {
    // Teste 1: Criação com valores válidos
    Produto p1("Notebook", "Eletrônicos", 100, 2000.0);
    assert(p1.getNome() == "Notebook");
    assert(p1.getCategoria() == "Eletrônicos");
    assert(p1.getEstoque() == 100);
    assert(fabs(p1.getPreco() - 2000.0) < 1e-6);

    // Teste 2: Criação com valores inválidos
    Produto p2("Inválido", "Fantasia", -50, -100.0);
    assert(p2.getCategoria() == "Outros");
    assert(p2.getEstoque() == 0);
    assert(fabs(p2.getPreco() - 0.0) < 1e-6);

    // Teste 3: Alterar nome
    p1.alterarNome("Ultrabook");
    assert(p1.getNome() == "Ultrabook");
    p1.alterarNome(""); // Não deve alterar
    assert(p1.getNome() == "Ultrabook");

    // Teste 4: Alterar preço
    p1.alterarPreco(2500.0);
    assert(fabs(p1.getPreco() - 2500.0) < 1e-6);
    p1.alterarPreco(-500.0); // Deve ajustar para 0
    assert(fabs(p1.getPreco() - 0.0) < 1e-6);

    // Teste 5: Atualizar estoque
    Produto p3("Teclado", "Eletrônicos", 50, 150.0);
    p3.atualizarEstoque(30); // 50 + 30 = 80
    assert(p3.getEstoque() == 80);
    p3.atualizarEstoque(-100); // 80 - 100 = 0 (não pode ser negativo)
    assert(p3.getEstoque() == 0);

    // Teste 6: Aplicar desconto para Eletrônicos
    Produto p4("Smartphone", "Eletrônicos", 60, 1000.0);
    bool desconto = p4.aplicarDesconto();
    assert(desconto && fabs(p4.getPreco() - 850.0) < 1e-6); // 15% de desconto

    Produto p5("Tablet", "Eletrônicos", 50, 500.0);
    desconto = p5.aplicarDesconto();
    assert(!desconto && fabs(p5.getPreco() - 500.0) < 1e-6);

    // Teste 7: Aplicar desconto para Alimentos
    Produto p6("Arroz", "Alimentos", 101, 20.0);
    desconto = p6.aplicarDesconto();
    assert(desconto && fabs(p6.getPreco() - 18.0) < 1e-6); // 10% de desconto

    Produto p7("Feijão", "Alimentos", 100, 15.0);
    desconto = p7.aplicarDesconto();
    assert(!desconto && fabs(p7.getPreco() - 15.0) < 1e-6);

    // Teste 8: Aplicar desconto para Vestuário/Outros
    Produto p8("Camisa", "Vestuário", 201, 50.0);
    desconto = p8.aplicarDesconto();
    assert(desconto && fabs(p8.getPreco() - 47.5) < 1e-6); // 5% de desconto

    Produto p9("Mochila", "Outros", 250, 100.0);
    desconto = p9.aplicarDesconto();
    assert(desconto && fabs(p9.getPreco() - 95.0) < 1e-6);

    Produto p10("Calça", "Vestuário", 200, 80.0);
    desconto = p10.aplicarDesconto();
    assert(!desconto && fabs(p10.getPreco() - 80.0) < 1e-6);

    // Teste 9: Aplicar desconto múltiplas vezes
    Produto p11("Monitor", "Eletrônicos", 60, 1000.0);
    p11.aplicarDesconto(); // 850.0
    p11.aplicarDesconto(); // 722.5 (15% de 850)
    assert(fabs(p11.getPreco() - 722.5) < 1e-6);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}