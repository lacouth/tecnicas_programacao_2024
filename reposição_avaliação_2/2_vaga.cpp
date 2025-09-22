#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int main() {
    Vaga v1("A1", 'C');
    cout << "Teste 1 - getCodigo: Esperado: A1, Obtido: " << v1.getCodigo() << endl;
    assert(v1.getCodigo() == "A1");

    cout << "Teste 2 - getTipo: Esperado: C, Obtido: " << v1.getTipo() << endl;
    assert(v1.getTipo() == 'C');

    cout << "Teste 3 - estaOcupada: Esperado: 0, Obtido: " << v1.estaOcupada() << endl;
    assert(v1.estaOcupada() == false);

    cout << "Teste 4 - getTempoOcupacao: Esperado: 0, Obtido: " << v1.getTempoOcupacao() << endl;
    assert(v1.getTempoOcupacao() == 0);

    v1.ocupar(120);
    cout << "Teste 5 - ocupar(120): estaOcupada Esperado: 1, Obtido: " << v1.estaOcupada() << endl;
    assert(v1.estaOcupada() == true);

    cout << "Teste 6 - getTempoOcupacao após ocupar: Esperado: 120, Obtido: " << v1.getTempoOcupacao() << endl;
    assert(v1.getTempoOcupacao() == 120);

    cout << "Teste 7 - ehLongaDuracao: Esperado: 0, Obtido: " << v1.ehLongaDuracao() << endl;
    assert(v1.ehLongaDuracao() == false);

    v1.liberar();
    cout << "Teste 8 - liberar: estaOcupada Esperado: 0, Obtido: " << v1.estaOcupada() << endl;
    assert(v1.estaOcupada() == false);

    cout << "Teste 9 - getTempoOcupacao após liberar: Esperado: 0, Obtido: " << v1.getTempoOcupacao() << endl;
    assert(v1.getTempoOcupacao() == 0);

    Vaga v2("B2", 'M');
    v2.ocupar(200);
    cout << "Teste 10 - ehLongaDuracao com 200 min: Esperado: 1, Obtido: " << v2.ehLongaDuracao() << endl;
    assert(v2.ehLongaDuracao() == true);

    Vaga v3("C3", 'X');
    cout << "Teste 11 - tipo inválido ('X'): Esperado: C, Obtido: " << v3.getTipo() << endl;
    assert(v3.getTipo() == 'C');

    v3.ocupar(-50);
    cout << "Teste 12 - ocupar tempo inválido (-50): estaOcupada Esperado: 0, Obtido: " << v3.estaOcupada() << endl;
    assert(v3.estaOcupada() == false);

    v3.ocupar(60);
    v3.ocupar(30);
    cout << "Teste 13 - ocupar(60) depois ocupar(30) (já ocupada): Esperado: 60, Obtido: " << v3.getTempoOcupacao() << endl;
    assert(v3.getTempoOcupacao() == 60);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}