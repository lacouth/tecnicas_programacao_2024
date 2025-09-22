#include <iostream>
#include <map>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;



int main() {
    map<string, double> equipamentos;
    double percentual, esperadoTotal, obtidoTotal;
    
   
    equipamentos = { {"lampada", 0.5}, {"ar-condicionado", 2.0}, {"geladeira", 1.5} };
    percentual = 10.0;
    esperadoTotal = 4.40;
    obtidoTotal = atualizarTarifasPorInflacao(equipamentos, percentual);
    cout << "Teste 1:" 
         << "\nPercentual: " << percentual << "%" 
         << "\nCusto total esperado (1h): " << esperadoTotal
         << "\nCusto total obtido (1h): " << obtidoTotal << "\n\n";
    assert(fabs(obtidoTotal - esperadoTotal) < 1e-9);
    
    
    equipamentos = { {"tv", 1.0}, {"computador", 3.0} };
    percentual = 0.0;
    esperadoTotal = 4.0;
    obtidoTotal = atualizarTarifasPorInflacao(equipamentos, percentual);
    cout << "Teste 2:" 
         << "\nPercentual: " << percentual << "%" 
         << "\nCusto total esperado (1h): " << esperadoTotal
         << "\nCusto total obtido (1h): " << obtidoTotal << "\n\n";
    assert(fabs(obtidoTotal - esperadoTotal) < 1e-9);
    
    
    equipamentos = {};
    percentual = 5.0;
    esperadoTotal = 0.0;
    obtidoTotal = atualizarTarifasPorInflacao(equipamentos, percentual);
    cout << "Teste 3:" 
         << "\nPercentual: " << percentual << "%" 
         << "\nCusto total esperado (1h): " << esperadoTotal
         << "\nCusto total obtido (1h): " << obtidoTotal << "\n\n";
    assert(fabs(obtidoTotal - esperadoTotal) < 1e-9);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}