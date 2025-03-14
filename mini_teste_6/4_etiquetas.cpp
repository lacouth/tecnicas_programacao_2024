#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cassert>

using namespace std;


int main() {
    // Testes para criarMapaTraducoes
    auto mapa1 = criarMapaTraducoes({"frances", "Joyeux Noel", "ingles", "Merry Christmas"});
    assert(mapaTraducoes1["frances"] == "Joyeux Noel");
    assert(mapaTraducoes1["ingles"] == "Merry Christmas");

    auto mapaTraducoes2 = criarMapaTraducoes({"portugues", "Feliz Natal", "espanhol", "Feliz Navidade"});
    assert(mapaTraducoes2["portugues"] == "Feliz Natal");
    assert(mapaTraducoes2["espanhol"] == "Feliz Navidade");

    // Testes gerarEtiquetas
    vector<string> criancas1 = {"John Brolargo", "ingles"};
    assert((gerarEtiquetas(mapaTraducoes1, criancas1) == vector<string>{"John Brolargo, Merry Christmas"}));

    vector<string> criancas2 = {"Joao Paulo", "portugues", "Pietro", "espanhol"};
    assert((gerarEtiquetas(mapaTraducoes2, criancas2) == vector<string>{"Joao Paulo, Feliz Natal", "Pietro, Feliz Navidade"}));

    vector<string> criancas3 = {};
    assert((gerarEtiquetas(mapaTraducoes2, criancas2) == vector<string>{"Joao Paulo, Feliz Natal", "Pietro, Feliz Navidade"}));

    cout << "Todos os testes passaram!" << endl;
    return 0;
}