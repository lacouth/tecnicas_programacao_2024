#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;



// Função auxiliar para imprimir um map de estoque ou vendas.
void printMap(map<string, int> m) {
    cout << "{";
    bool primeiro = true;
    for (auto par : m) {
        if (!primeiro)
            cout << ", ";
        cout << "{\"" << par.first << "\", " << par.second << "}";
        primeiro = false;
    }
    cout << "}";
}

int main() {
    map<string, int> estoque, vendas, esperado, obtido;
    
    // Teste 1: Exemplo do enunciado
    // Estoque: { {"camisa", 10}, {"calça", 5}, {"sapato", 8} }
    // Vendas: { {"camisa", 3}, {"calça", 7}, {"sapato", 2} }
    // Esperado: { {"camisa", 7}, {"calça", 0}, {"sapato", 6} }
    estoque = { {"camisa", 10}, {"calça", 5}, {"sapato", 8} };
    vendas = { {"camisa", 3}, {"calça", 7}, {"sapato", 2} };
    esperado = { {"camisa", 7}, {"calça", 0}, {"sapato", 6} };
    obtido = processaVendas(estoque, vendas);
    cout << "Teste 1:\nEstoque Inicial: ";
    printMap(estoque);
    cout << "\nVendas: ";
    printMap(vendas);
    cout << "\nEstoque Atualizado Esperado: ";
    printMap(esperado);
    cout << "\nEstoque Atualizado Obtido: ";
    printMap(obtido);
    cout << "\n\n";
    assert(obtido == esperado);
    
    // Teste 2: Produto vendido que não existe no estoque
    // Estoque: { {"notebook", 5}, {"mouse", 10} }
    // Vendas: { {"notebook", 2}, {"teclado", 3} } --> "teclado" não está no estoque
    // Esperado: { {"notebook", 3}, {"mouse", 10} }
    estoque = { {"mouse", 10}, {"notebook", 5} };
    vendas = { {"notebook", 2}, {"teclado", 3} };
    esperado = { {"mouse", 10}, {"notebook", 3} };
    obtido = processaVendas(estoque, vendas);
    cout << "Teste 2:\nEstoque Inicial: ";
    printMap(estoque);
    cout << "\nVendas: ";
    printMap(vendas);
    cout << "\nEstoque Atualizado Esperado: ";
    printMap(esperado);
    cout << "\nEstoque Atualizado Obtido: ";
    printMap(obtido);
    cout << "\n\n";
    assert(obtido == esperado);
    
    // Teste 3: Vendas vazias (nenhum produto vendido)
    // Estoque: { {"livro", 20}, {"caneta", 50} }
    // Vendas: {}
    // Esperado: { {"livro", 20}, {"caneta", 50} }
    estoque = { {"caneta", 50}, {"livro", 20} };
    vendas = {};
    esperado = { {"caneta", 50}, {"livro", 20} };
    obtido = processaVendas(estoque, vendas);
    cout << "Teste 3:\nEstoque Inicial: ";
    printMap(estoque);
    cout << "\nVendas: ";
    printMap(vendas);
    cout << "\nEstoque Atualizado Esperado: ";
    printMap(esperado);
    cout << "\nEstoque Atualizado Obtido: ";
    printMap(obtido);
    cout << "\n\n";
    assert(obtido == esperado);
    
    // Teste 4: Estoque vazio
    // Estoque: {}
    // Vendas: { {"geladeira", 1} }
    // Esperado: {} (não há produto para atualizar)
    estoque = {};
    vendas = { {"geladeira", 1} };
    esperado = {};
    obtido = processaVendas(estoque, vendas);
    cout << "Teste 4:\nEstoque Inicial: ";
    printMap(estoque);
    cout << "\nVendas: ";
    printMap(vendas);
    cout << "\nEstoque Atualizado Esperado: ";
    printMap(esperado);
    cout << "\nEstoque Atualizado Obtido: ";
    printMap(obtido);
    cout << "\n\n";
    assert(obtido == esperado);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}