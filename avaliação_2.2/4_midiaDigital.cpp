#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;

// Inclua aqui as implementações das classes MidiaDigital, Musica e Filme

int main() {
    // Teste 1: Validações da classe base MidiaDigital
    MidiaDigital m1("", -5.0);
    assert(m1.getTitulo() == "");
    assert(fabs(m1.getPrecoBase() - 0.0) < 1e-6);

    // Teste 2: Música com versão premium
    Musica mus1("Shape of You", 10.0, true);  // Nome genérico substituído
    assert(mus1.getTitulo() == "Shape of You");
    assert(mus1.calcularCusto() == 15.0);

    // Teste 3: Música sem versão premium
    Musica mus2("Dancing Queen", 8.0, false);  // Novo exemplo
    assert(mus2.calcularCusto() == 8.0);

    // Teste 4: Filme com dias de locação inválidos
    Filme filme1("Dark Knight", 8.0, -3);  // Novo título
    assert(filme1.getDiasLocacao() == 0);
    assert(filme1.calcularCusto() == 0.0);

    // Teste 5: Filme com desconto
    Filme filme2("Inception", 8.0, 10);  // Título alternativo
    assert(filme2.calcularCusto() == (8.0 * 10 - 10));

    // Teste 6: Filme sem desconto
    Filme filme3("Jurassic World", 7.5, 7);  // Novo exemplo
    assert(filme3.calcularCusto() == (7.5 * 7));

    // Teste 7: Preço base negativo em Filme
    Filme filme4("Untitled Movie", -20.0, 5);  // Nome genérico
    assert(fabs(filme4.getPrecoBase() - 0.0) < 1e-6);

    // Teste 8: Locação de filme com 0 dias
    Filme filme5("Interstellar", 15.0, 0);  // Título existente
    assert(filme5.calcularCusto() == 0.0);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}