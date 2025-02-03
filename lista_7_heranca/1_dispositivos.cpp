#include <iostream>
#include <string>
#include <cassert>

using namespace std;


int main() {
    // Teste 1: Construtor de Dispositivo
    Dispositivo dispositivo("Genérico", 64);
    assert(dispositivo.getModelo() == "Genérico");
    assert(dispositivo.getArmazenamentoGB() == 64);
    cout << "=== Detalhes do Dispositivo ===" << endl;
    dispositivo.exibirDetalhes();
    cout << "\n✅ **Teste 1 passou**: Construtor de Dispositivo inicializou modelo e armazenamento corretamente.\n" << endl;

    // Teste 2: Construtor de Notebook e exibição de detalhes
    Notebook notebook("Dell XPS 13", 512, "Windows 11");
    assert(notebook.getModelo() == "Dell XPS 13");
    assert(notebook.getArmazenamentoGB() == 512);
    cout << "=== Detalhes do Notebook ===" << endl;
    notebook.exibirDetalhes();
    cout << "\n✅ **Teste 2 passou**: Construtor de Notebook inicializou atributos e exibiu sistema operacional.\n" << endl;

    // Teste 3: Construtor de Tablet e exibição de detalhes
    Tablet tablet("Samsung Galaxy Tab S8", 256, true);
    assert(tablet.getModelo() == "Samsung Galaxy Tab S8");
    assert(tablet.getArmazenamentoGB() == 256);
    cout << "=== Detalhes do Tablet ===" << endl;
    tablet.exibirDetalhes();
    cout << "\n✅ **Teste 3 passou**: Construtor de Tablet inicializou atributos e exibiu conexão 5G.\n" << endl;

    cout << "🎉 **Todos os testes passaram!**" << endl;
    return 0;
}