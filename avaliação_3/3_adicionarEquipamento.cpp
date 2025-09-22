#include <iostream>
#include <set>
#include <string>
#include <cassert>

using namespace std;

int main() {
    set<string> equipamentos;
    
    // Teste 1: Adicionar "Transformador" no set vazio.
    assert(adicionarEquipamento(equipamentos, "Transformador") == true);
    
    // Teste 2: Tentar adicionar "Transformador" novamente.
    assert(adicionarEquipamento(equipamentos, "Transformador") == false);
    
    // Teste 3: Adicionar "Gerador".
    assert(adicionarEquipamento(equipamentos, "Gerador") == true);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}

