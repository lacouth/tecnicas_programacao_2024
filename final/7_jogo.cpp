#include <iostream>
#include <string>
#include <cassert>

using namespace std;


int main() {
    // Teste 1: Construtor válido
    Jogo j1("Super Mario World", "Plataforma", 1990);
    assert(j1.getNome() == "Super Mario World");
    assert(j1.getGenero() == "Plataforma");
    assert(j1.getAno() == 1990);
    assert(j1.ehRetro() == true);
    cout << "Teste 1 passou (construtor válido + ehRetro == true)\n";

    // Teste 2: Construtor com valores inválidos
    Jogo j2("", "", 1800);
    assert(j2.getNome() == "Desconhecido");
    assert(j2.getGenero() == "Indefinido");
    assert(j2.getAno() == 1970);
    cout << "Teste 2 passou (construtor com dados inválidos)\n";

    // Teste 3: Setters com valores válidos
    j2.setNome("The Legend of Zelda");
    j2.setGenero("Aventura");
    j2.setAno(1986);
    assert(j2.getNome() == "The Legend of Zelda");
    assert(j2.getGenero() == "Aventura");
    assert(j2.getAno() == 1986);
    assert(j2.ehRetro() == true);
    cout << "Teste 3 passou (setters válidos + ehRetro)\n";

    // Teste 4: Setters com valores inválidos (não devem alterar os dados)
    j2.setNome("");
    j2.setGenero("");
    j2.setAno(1800);
    assert(j2.getNome() == "The Legend of Zelda");
    assert(j2.getGenero() == "Aventura");
    assert(j2.getAno() == 1986);
    cout << "Teste 4 passou (setters inválidos ignorados)\n";

    // Teste 5: Jogo não retrô
    Jogo j3("Elden Ring", "RPG", 2022);
    assert(j3.ehRetro() == false);
    cout << "Teste 5 passou (ehRetro == false para jogo moderno)\n";

    // Teste 6: exibirDetalhes
    cout << "\nTeste 6 - Detalhes de j3:" << endl;
    j3.exibirDetalhes();

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}
