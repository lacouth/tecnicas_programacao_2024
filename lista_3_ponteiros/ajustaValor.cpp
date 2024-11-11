/*

Crie uma função chamada ajustaValor que receba dois ponteiros para variáveis inteiras. 
A função deve incrementar o valor apontado pelo primeiro ponteiro e decrementar o valor apontado pelo segundo ponteiro.

*/

#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    ajustaValor(&a, &b);
    assert(a == 11);  // a foi incrementado
    assert(b == 4);   // b foi decrementado

    int c = -1;
    int d = 0;

    ajustaValor(&c, &d);
    assert(c == 0);   // c foi incrementado de -1 para 0
    assert(d == -1);  // d foi decrementado de 0 para -1

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
