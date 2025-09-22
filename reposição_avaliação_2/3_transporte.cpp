#include <iostream>
#include <string>
#include <cassert>
using namespace std;



int main() {
    Transporte t1("Lancha Rápida", 2015, 250);
    cout << "Teste 1 - Nome: Esperado: Lancha Rápida, Obtido: " << t1.getNome() << endl;
    assert(t1.getNome() == "Lancha Rápida");

    Transporte t2("", 1900, -50);
    cout << "Teste 2 - Nome inválido: Esperado: Transporte Desconhecido, Obtido: " << t2.getNome() << endl;
    assert(t2.getNome() == "Transporte Desconhecido");
    cout << "Teste 3 - Ano mínimo: Esperado: 1950, Obtido: " << t2.getAno() << endl;
    assert(t2.getAno() == 1950);
    cout << "Teste 4 - Valor negativo: Esperado: 0, Obtido: " << t2.getValorDiaria() << endl;
    assert(t2.getValorDiaria() == 0);

    bool alugou = t1.alugar(3);
    cout << "Teste 5 - Aluguel válido: Esperado: 1, Obtido: " << alugou << endl;
    assert(alugou == true);
    cout << "Teste 6 - Disponível após aluguel: Esperado: 0, Obtido: " << t1.isDisponivel() << endl;
    assert(t1.isDisponivel() == false);

    double custo = t1.calcularCustoAluguel(3);
    cout << "Teste 7 - Custo do aluguel (3 dias): Esperado: 750, Obtido: " << custo << endl;
    assert(custo == 750);

    t1.devolver();
    cout << "Teste 8 - Disponível após devolução: Esperado: 1, Obtido: " << t1.isDisponivel() << endl;
    assert(t1.isDisponivel() == true);

    TransporteMaritimo tm1("Iate Azul", 2020, 400, 8);
    bool alugou2 = tm1.alugar(2, 5);
    cout << "Teste 9 - Aluguel marítimo válido (5 pessoas): Esperado: 1, Obtido: " << alugou2 << endl;
    assert(alugou2 == true);

    TransporteMaritimo tm2("Barco Solar", 2018, 300, -10);
    cout << "Teste 10 - Capacidade negativa tratada como 0: Esperado: 0, Obtido: " << tm2.getCapacidade() << endl;
    assert(tm2.getCapacidade() == 0);

    bool alugou3 = tm2.alugar(1, 1);
    cout << "Teste 11 - Aluguel inválido por excesso de pessoas: Esperado: 0, Obtido: " << alugou3 << endl;
    assert(alugou3 == false);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
