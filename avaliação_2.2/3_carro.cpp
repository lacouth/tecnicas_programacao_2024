#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;


int main() {
    // Teste 1: Validações do construtor da classe base
    Veiculo v1("", 1800, -100.0);
    assert(v1.getModelo() == "Modelo Não Especificado");
    assert(v1.getAno() == 1886);
    assert(fabs(v1.getValorDiaria() - 0.0) < 1e-6);
    assert(v1.isDisponivel() == true);

    // Teste 2: Aluguel com dias inválidos
    Veiculo v2("Fusca", 1970, 50.0);
    assert(v2.alugar(0) == false); // Dias zero
    assert(v2.alugar(-5) == false); // Dias negativo
    assert(v2.isDisponivel() == true); // Continua disponível

    // Teste 3: Aluguel bem-sucedido e cálculo de custo
    assert(v2.alugar(3) == true);
    assert(v2.isDisponivel() == false);
    assert(fabs(v2.calcularCusto(3) - 150.0) < 1e-6); // 3 dias × 50

    // Teste 4: Devolução do veículo
    v2.devolver();
    assert(v2.isDisponivel() == true);

    // Teste 5: Herança e construtor de CarroLuxo
    CarroLuxo cl1("Mercedes", 2022, 500.0);
    assert(cl1.getModelo() == "Mercedes");
    assert(cl1.getMotoristaIncluso() == false);

    // Teste 6: Aluguel de CarroLuxo com motorista
    assert(cl1.alugar(3, true) == true);
    assert(cl1.isDisponivel() == false);
    assert(cl1.getMotoristaIncluso() == true);

    // Teste 7: Cálculo de custo com motorista
    assert(fabs(cl1.calcularCusto(3) - (500*3 + 200*3)) < 1e-6); // 2100 total

    // Teste 8: Devolução reseta estado
    cl1.devolver();
    assert(cl1.isDisponivel() == true);
    assert(cl1.getMotoristaIncluso() == false); // Motorista resetado

    // Teste 9: Aluguel sem motorista
    CarroLuxo cl2("BMW", 2023, 600.0);
    assert(cl2.alugar(2, false) == true);
    assert(fabs(cl2.calcularCusto(2) - 1200.0) < 1e-6); // Sem adicional

    // Teste 10: Tentativa de alugar veículo já alugado
    assert(cl2.alugar(1, true) == false); // Já indisponível

    // Teste 11: Validação de ano mínimo em CarroLuxo
    CarroLuxo cl3("Audi", 1500, 700.0); // Ano ajustado para 1886
    assert(cl3.getAno() == 1886);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}