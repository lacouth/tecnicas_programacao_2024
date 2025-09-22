#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;


int main() {
    // Cria o map de equipamentos vazio
    map<string, double> equipamentos;

    // Teste da função adicionarOuAtualizarTarifa
    adicionarOuAtualizarTarifa(equipamentos, "ArCondicionado", 1.5);
    adicionarOuAtualizarTarifa(equipamentos, "Geladeira", 0.8);
    adicionarOuAtualizarTarifa(equipamentos, "Iluminacao", 0.3);
    // Atualiza a tarifa do equipamento "Geladeira"
    adicionarOuAtualizarTarifa(equipamentos, "Geladeira", 1.0);

    map<string, double> esperado = {
        {"ArCondicionado", 1.5},
        {"Geladeira", 1.0},
        {"Iluminacao", 0.3}
    };
    assert(equipamentos == esperado);

    // Teste da função removerEquipamento
    removerEquipamento(equipamentos, "Iluminacao");
    esperado.erase("Iluminacao");
    assert(equipamentos == esperado);

    // Teste da função calcularCustoTotal
    // Para 10 horas: custo = (1.5 * 10) + (1.0 * 10) = 15.0 + 10.0 = 25.0
    double custoTotal = calcularCustoTotal(equipamentos, 10.0);
    assert(custoTotal == 25.0);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}