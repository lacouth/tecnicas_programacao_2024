/*

Você está desenvolvendo um sistema para calcular as médias de alunos. Cada aluno possui:

    Nome (string)
    Notas (array de 3 floats)

    Crie uma struct Aluno para representar os alunos.
    Implemente a função calcularMedia que recebe um ponteiro para um array de structs Aluno, o tamanho do array e o nome de um aluno. 
    
    A função deve calcular e retornar a média do aluno com base nas notas.


*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    Aluno alunos[] = {
        {"Joao", {8.0, 9.0, 7.0}},
        {"Maria", {6.0, 7.5, 8.5}},
        {"Pedro", {5.0, 6.0, 5.5}}
    };

    // Teste 1: Calcular média de aluno existente
    assert(abs(calcularMedia(alunos, 3, "Joao") - 8.0) < 0.0001);

    // Teste 2: Calcular média de outro aluno existente
    assert(abs(calcularMedia(alunos, 3, "Maria") - 7.3333) < 0.0001);

    // Teste 3: Aluno inexistente
    assert(calcularMedia(alunos, 3, "Ana") == -1);

    cout << "Todos os testes passaram!\n";
    return 0;
}
