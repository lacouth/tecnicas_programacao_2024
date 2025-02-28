#include <iostream>  
#include <vector>  
#include <cassert>  
using namespace std;  


int main() {  
    vector<Produto> inventario;  

    // Teste 1: Adicionar novo produto  
    assert(adicionarProduto(inventario, "Caneta", 50, 2.5) == true);  
    assert(inventario.size() == 1);  
    assert(inventario[0].nome == "Caneta" && inventario[0].quantidade == 50 && inventario[0].preco == 2.5);  

    // Teste 2: Atualizar produto existente  
    assert(adicionarProduto(inventario, "Caneta", 30, 3.0) == false);  
    assert(inventario.size() == 1); // Tamanho não muda  
    assert(inventario[0].quantidade == 30 && inventario[0].preco == 3.0);  

    // Teste 3: Adicionar segundo produto  
    assert(adicionarProduto(inventario, "Caderno", 20, 15.9) == true);  
    assert(inventario.size() == 2);  
    assert(inventario[1].nome == "Caderno" && inventario[1].preco == 15.9);  

    cout << "Todos os testes passaram!" << endl;  
    return 0;  
}  