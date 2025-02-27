#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;



int main() {
    ContaBancaria a("Alice", 4000);
    assert(a.getNomeTitular() == "Alice" && fabs(a.getSaldo() - 4000) < 1e-6);
    
    ContaBancaria b("Bob", -100);
    assert(b.getNomeTitular() == "Bob" && fabs(b.getSaldo() - 0) < 1e-6);
    
    ContaBancaria c("Carol", 15000);
    assert(c.getNomeTitular() == "Carol" && fabs(c.getSaldo() - 10000) < 1e-6);
    
    a.depositar(3000); // 4000 + 3000 = 7000
    assert(fabs(a.getSaldo() - 7000) < 1e-6);
    
    a.depositar(-2000); // Valor negativo, não altera o saldo
    assert(fabs(a.getSaldo() - 7000) < 1e-6);
    
    a.depositar(4000); // 7000 + 4000 = 11000 → ajustado para 10000
    assert(fabs(a.getSaldo() - 10000) < 1e-6);
    
    bool rendimentoAplicado = a.aplicarRendimento();
    assert(rendimentoAplicado && fabs(a.getSaldo() - 10000) < 1e-6);
    
    rendimentoAplicado = b.aplicarRendimento();
    assert(!rendimentoAplicado && fabs(b.getSaldo() - 0) < 1e-6);
    
    rendimentoAplicado = c.aplicarRendimento();
    assert(rendimentoAplicado && fabs(c.getSaldo() - 10000) < 1e-6);
    
    ContaBancaria d("Daniel", 6000);
    rendimentoAplicado = d.aplicarRendimento(); // 6000 * 1.1 = 6600
    assert(rendimentoAplicado && fabs(d.getSaldo() - 6600) < 1e-6);
    
    ContaBancaria e("Eva", 9500);
    rendimentoAplicado = e.aplicarRendimento(); // 9500 + 950 = 10450 → ajustado para 10000
    assert(rendimentoAplicado && fabs(e.getSaldo() - 10000) < 1e-6);
    
    e.zerarSaldo();
    assert(fabs(e.getSaldo() - 0) < 1e-6);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}