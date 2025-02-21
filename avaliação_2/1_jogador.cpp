#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;
 


int main(){
    Jogador a("Alice", 40);
    assert(a.getNome() == "Alice" && fabs(a.getPontuacao() - 40) < 1e-6);
    
    Jogador b("Bob", -10);
    assert(b.getNome() == "Bob" && fabs(b.getPontuacao() - 0) < 1e-6);
    
    Jogador c("Carol", 150);
    assert(c.getNome() == "Carol" && fabs(c.getPontuacao() - 100) < 1e-6);
    
    a.adicionarPontos(30); // 40 + 30 = 70
    assert(fabs(a.getPontuacao() - 70) < 1e-6);
    
    a.adicionarPontos(-20); // Valor negativo, não altera a pontuação
    assert(fabs(a.getPontuacao() - 70) < 1e-6);
    
    a.adicionarPontos(50); // 70 + 50 = 120, ajustado para 100
    assert(fabs(a.getPontuacao() - 100) < 1e-6);
    
    bool bonusAplicado = a.aplicarBonus();
    assert(bonusAplicado && fabs(a.getPontuacao() - 100) < 1e-6);
    
    bonusAplicado = b.aplicarBonus();
    assert(!bonusAplicado && fabs(b.getPontuacao() - 0) < 1e-6);
    
    bonusAplicado = c.aplicarBonus();
    assert(bonusAplicado && fabs(c.getPontuacao() - 100) < 1e-6);
    
    Jogador d("Daniel", 60);
    bonusAplicado = d.aplicarBonus(); // 60 * 1.1 = 66
    assert(bonusAplicado && fabs(d.getPontuacao() - 66) < 1e-6);
    
    d.reiniciarPontuacao();
    assert(fabs(d.getPontuacao() - 0) < 1e-6);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}