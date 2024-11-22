/*

Crie uma função chamada alteraIdade que receba um ponteiro para uma struct Pessoa e uma nova idade. A função deve alterar o campo idade da pessoa.

*/

#include <iostream>
#include <cassert>

using namespace std;

int main() {
    Pessoa p = {"Joao", 25, 1.75};

    alteraIdade(&p, 30);
    assert(p.idade == 30);

    alteraIdade(&p, 18);
    assert(p.idade == 18);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
