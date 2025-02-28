#include <iostream>  
#include <vector>  
#include <cassert>  
using namespace std;  


int main() {  
    vector<string> lista = {"Estudar C++", "Fazer exercícios", "Ler documentação"};  

    // Teste 1: Remoção de uma tarefa existente  
    assert(removerTarefa(lista, "Fazer exercícios") == true);  
    assert(lista.size() == 2); // Tamanho atualizado  
    assert(lista[0] == "Estudar C++"); // Elementos restantes  
    assert(lista[1] == "Ler documentação");  

    // Teste 2: Tentativa de remover tarefa inexistente  
    assert(removerTarefa(lista, "Reunião") == false);  
    assert(lista.size() == 2); // Tamanho inalterado  

    // Teste 3: Remoção de outra tarefa existente  
    assert(removerTarefa(lista, "Ler documentação") == true);  
    assert(lista.size() == 1);  
    assert(lista[0] == "Estudar C++");  

    // Teste 4: Remover a última tarefa  
    assert(removerTarefa(lista, "Estudar C++") == true);  
    assert(lista.empty()); // Lista vazia  

    cout << "Todos os testes passaram!" << endl;  
    return 0;  
}  