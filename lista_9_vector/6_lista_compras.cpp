#include <iostream>
#include <vector>
#include <cassert>
using namespace std;


int main() {
    vector<string> lista;

    // Teste 1: Adição de itens válidos
    assert(adicionarItem(lista, "Maçã") == true);
    assert(adicionarItem(lista, "Pão") == true);
    assert(adicionarItem(lista, "Leite") == true);
    assert(lista.size() == 3); // Verifica o tamanho

    // Teste 2: Tentativa de adicionar item duplicado
    assert(adicionarItem(lista, "Maçã") == false);
    assert(lista.size() == 3); // Nenhum item extra

    // Teste 3: Adicionar múltiplos itens novos
    assert(adicionarItem(lista, "Ovo") == true);
    assert(adicionarItem(lista, "Arroz") == true);
    assert(adicionarItem(lista, "Feijão") == true);
    assert(adicionarItem(lista, "Batata") == true);
    assert(lista.size() == 7); // Lista expande livremente

    // Teste 4: Nova tentativa de duplicata
    assert(adicionarItem(lista, "Pão") == false);
    assert(lista.size() == 7); // Tamanho inalterado

    cout << "Todos os testes passaram!" << endl;
    return 0;
}