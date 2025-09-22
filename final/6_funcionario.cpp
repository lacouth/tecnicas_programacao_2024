#include <iostream>
#include <cassert>
#include <string>

using namespace std;


int main() {
    Funcionario equipe1[] = {
        {"Ana", 30, 2500.0},
        {"Carlos", 45, 3200.0},
        {"Bruna", 28, 2100.0},
        {"Eduardo", 52, 4000.0},
        {"Fernanda", 40, 3000.0}
    };
    int tamanho1 = 5;

    // Teste 1: Mais velho
    string esperadoMaisVelho = "Eduardo";
    string obtidoMaisVelho = encontrarFuncionarioMaisVelho(equipe1, tamanho1);
    cout << "Teste 1 - Mais velho: Esperado = " << esperadoMaisVelho 
         << ", Obtido = " << obtidoMaisVelho << endl;
    assert(obtidoMaisVelho == esperadoMaisVelho);

    // Teste 2: Menor salário
    string esperadoMenorSalario = "Bruna";
    string obtidoMenorSalario = encontrarMenorSalario(equipe1, tamanho1);
    cout << "Teste 2 - Menor salário: Esperado = " << esperadoMenorSalario 
         << ", Obtido = " << obtidoMenorSalario << endl;
    assert(obtidoMenorSalario == esperadoMenorSalario);

    // Teste 3: Empate de idade (primeiro mais velho deve ser retornado)
    Funcionario equipe2[] = {
        {"Joao", 50, 3500.0},
        {"Lucas", 50, 3300.0},
        {"Paula", 45, 3100.0}
    };
    int tamanho2 = 3;
    esperadoMaisVelho = "Joao";
    obtidoMaisVelho = encontrarFuncionarioMaisVelho(equipe2, tamanho2);
    cout << "Teste 3 - Empate de idade: Esperado = " << esperadoMaisVelho 
         << ", Obtido = " << obtidoMaisVelho << endl;
    assert(obtidoMaisVelho == esperadoMaisVelho);

    // Teste 4: Empate de salário (primeiro com menor salário deve ser retornado)
    Funcionario equipe3[] = {
        {"Mariana", 29, 2500.0},
        {"Rafael", 34, 2500.0},
        {"Sofia", 31, 2700.0}
    };
    int tamanho3 = 3;
    esperadoMenorSalario = "Mariana";
    obtidoMenorSalario = encontrarMenorSalario(equipe3, tamanho3);
    cout << "Teste 4 - Empate de salário: Esperado = " << esperadoMenorSalario 
         << ", Obtido = " << obtidoMenorSalario << endl;
    assert(obtidoMenorSalario == esperadoMenorSalario);

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}