#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

struct Estudante {
    string nome;
    double nota;
};

int contarAcimaMedia(Estudante arr[], int n) {
    if (n == 0) return 0;
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += arr[i].nota;
    }
    double media = soma / n;

    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].nota > media) {
            contador++;
        }
    }
    return contador;
}

int main() {
    // Teste 1: três estudantes, dois acima da média (média = 7.0)
    Estudante turma1[] = {
        {"Ana",    6.0},
        {"Bruno",  8.0},
        {"Carla",  7.0}
    };
    assert(contarAcimaMedia(turma1, 3) == 1); // apenas Bruno (8.0 > 7.0)

    // Teste 2: quatro estudantes, dois acima da média (média = 6.5)
    Estudante turma2[] = {
        {"Pedro", 5.0},
        {"Maria", 7.0},
        {"Joao",  8.0},
        {"Lia",   6.0}
    };
    assert(contarAcimaMedia(turma2, 4) == 2); // Maria e Joao

    // Teste 3: todas notas iguais (nenhum acima da média)
    Estudante turma3[] = {
        {"X", 5.0},
        {"Y", 5.0},
        {"Z", 5.0}
    };
    assert(contarAcimaMedia(turma3, 3) == 0);

    // Teste 4: array vazio
    Estudante turma4[1];
    assert(contarAcimaMedia(turma4, 0) == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
