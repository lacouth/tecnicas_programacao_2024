#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int main() {
    Equipamento e1("Impressora 3D", 2015);
    Equipamento e2("Servidor", 2010);
    Equipamento e3("Notebook", 2022);

    cout << "Teste 1 - getNome: Esperado: Impressora 3D, Obtido: " << e1.getNome() << endl;
    assert(e1.getNome() == "Impressora 3D");

    cout << "Teste 2 - getAnoFabricacao: Esperado: 2015, Obtido: " << e1.getAnoFabricacao() << endl;
    assert(e1.getAnoFabricacao() == 2015);

    cout << "Teste 3 - calcularTempoUso (anoAtual=2025): Esperado: 10, Obtido: " << e1.calcularTempoUso(2025) << endl;
    assert(e1.calcularTempoUso(2025) == 10);

    cout << "Teste 4 - precisaSubstituicao (2025): Esperado: 1, Obtido: " << e1.precisaSubstituicao(2025) << endl;
    assert(e1.precisaSubstituicao(2025) == true);

    cout << "Teste 5 - precisaSubstituicao (Notebook 2025): Esperado: 0, Obtido: " << e3.precisaSubstituicao(2025) << endl;
    assert(e3.precisaSubstituicao(2025) == false);

    cout << "Teste 6 - calcularTempoUso (Servidor 2025): Esperado: 15, Obtido: " << e2.calcularTempoUso(2025) << endl;
    assert(e2.calcularTempoUso(2025) == 15);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
