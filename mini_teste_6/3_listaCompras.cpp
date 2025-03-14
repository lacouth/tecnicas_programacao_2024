#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
    map<string, double> mapaPrecos = {
        {"mamao", 2.19},
        {"cebola", 3.10},
        {"tomate", 2.80},
        {"uva", 2.73},
        {"morango", 6.70},
        {"repolho", 1.12},
        {"brocolis", 1.71}
    };

    cout << fixed << setprecision(2);

    double resultado;

    resultado = calcularGastos(mapaPrecos, {"mamao", "2", "tomate", "1", "uva", "3"});
    if (fabs(resultado - 15.37) >= 1e-6) {
        cout << "Teste 1 falhou! Resultado obtido: " << resultado << ", esperado: 15.37" << endl;
        return 1;
    }

    resultado = calcularGastos(mapaPrecos, {"brocolis", "2", "tomate", "1", "cebola", "1", "morango", "1"});
    if (fabs(resultado - 16.02) >= 1e-6) {
        cout << "Teste 2 falhou! Resultado obtido: " << resultado << ", esperado: 16.02" << endl;
        return 1;
    }

    resultado = calcularGastos(mapaPrecos, {"repolho", "5"});
    if (fabs(resultado - 5.60) >= 1e-6) {
        cout << "Teste 3 falhou! Resultado obtido: " << resultado << ", esperado: 5.60" << endl;
        return 1;
    }

    resultado = calcularGastos(mapaPrecos, {"morango", "3", "brocolis", "1"});
    if (fabs(resultado - 21.81) >= 1e-6) {
        cout << "Teste 4 falhou! Resultado obtido: " << resultado << ", esperado: 21.81" << endl;
        return 1;
    }

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
