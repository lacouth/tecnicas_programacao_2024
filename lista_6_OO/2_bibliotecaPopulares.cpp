#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main() {
    Livro livro1("C++ Avançado", "Maria Oliveira");

    // Testa atributos iniciais
    assert(livro1.getTitulo() == "C++ Avançado");
    assert(livro1.getAutor() == "Maria Oliveira");
    assert(livro1.calcularMedia() == 0);

    // Testa adicionar avaliações válidas
    livro1.adicionarAvaliacao(5);
    livro1.adicionarAvaliacao(4);
    assert(livro1.calcularMedia() == 4.5);

    // Testa adicionar avaliação inválida
    livro1.adicionarAvaliacao(6);
    assert(livro1.calcularMedia() == 4.5);

    // Testa saída de informações
    assert(livro1.getInfo() == "Livro: C++ Avançado, Autor: Maria Oliveira, Média: 4.500000");

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
