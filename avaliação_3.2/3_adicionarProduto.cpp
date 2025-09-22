#include <iostream>
#include <set>
#include <string>
#include <cassert>

using namespace std;



// Função auxiliar para imprimir um conjunto de strings.
void printSet(set<string> s) {
    cout << "{";
    bool primeiro = true;
    for (auto produto : s) {
        if (!primeiro)
            cout << ", ";
        cout << "\"" << produto << "\"";
        primeiro = false;
    }
    cout << "}";
}

int main() {
    set<string> produtos;
    bool resultado;
    
    // Teste 1: Inserir "Computador" em um conjunto vazio.
    resultado = adicionarProduto(produtos, "Computador");
    cout << "Teste 1:\nProduto a adicionar: \"Computador\"\nEsperado: true\nObtido: " << boolalpha << resultado << "\nConjunto: ";
    printSet(produtos);
    cout << "\n\n";
    assert(resultado == true);
    
    // Teste 2: Tentar adicionar "Computador" novamente.
    resultado = adicionarProduto(produtos, "Computador");
    cout << "Teste 2:\nProduto a adicionar: \"Computador\"\nEsperado: false\nObtido: " << boolalpha << resultado << "\nConjunto: ";
    printSet(produtos);
    cout << "\n\n";
    assert(resultado == false);
    
    // Teste 3: Adicionar "Mouse".
    resultado = adicionarProduto(produtos, "Mouse");
    cout << "Teste 3:\nProduto a adicionar: \"Mouse\"\nEsperado: true\nObtido: " << boolalpha << resultado << "\nConjunto: ";
    printSet(produtos);
    cout << "\n\n";
    assert(resultado == true);
    
    // Teste 4: Adicionar "Teclado".
    resultado = adicionarProduto(produtos, "Teclado");
    cout << "Teste 4:\nProduto a adicionar: \"Teclado\"\nEsperado: true\nObtido: " << boolalpha << resultado << "\nConjunto: ";
    printSet(produtos);
    cout << "\n\n";
    assert(resultado == true);
    
    // Teste 5: Verificar o conjunto final.
    set<string> esperado = {"Computador", "Mouse", "Teclado"};
    cout << "Teste 5:\nConjunto final esperado: ";
    printSet(esperado);
    cout << "\nObtido: ";
    printSet(produtos);
    cout << "\n\n";
    assert(produtos == esperado);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
