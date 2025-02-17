#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

int main() {
    // Testes para ContaBancaria:
    ContaBancaria conta1(100);
    assert(fabs(conta1.getSaldo() - 100) < 1e-6);

    // Testa criação com saldo negativo: deve ser definido como 0.
    ContaBancaria contaNegativa(-50);
    assert(fabs(contaNegativa.getSaldo() - 0) < 1e-6);

    // Depósito e validação de valor negativo:
    conta1.depositar(50);
    assert(fabs(conta1.getSaldo() - 150) < 1e-6);
    conta1.depositar(-30);  // valor negativo, operação ignorada
    assert(fabs(conta1.getSaldo() - 150) < 1e-6);

    // Saque válido:
    bool sacou = conta1.sacar(70);
    assert(sacou == true);
    assert(fabs(conta1.getSaldo() - 80) < 1e-6);

    // Saque com valor negativo:
    sacou = conta1.sacar(-20);
    assert(sacou == false);
    assert(fabs(conta1.getSaldo() - 80) < 1e-6);

    // Saque com valor maior que o saldo:
    sacou = conta1.sacar(100);
    assert(sacou == false);
    assert(fabs(conta1.getSaldo() - 80) < 1e-6);

    // Testes para ContaPoupanca:
    ContaPoupanca poupanca1(200);
    poupanca1.renderJuros();  // 200 + 200*0.01 = 202
    assert(fabs(poupanca1.getSaldo() - 202) < 1e-6);

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
