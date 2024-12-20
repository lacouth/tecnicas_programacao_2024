#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Presente {
    string nomeDestinatario;
    string descricao;
    float peso;
};

float calcularPesoTotal(Presente presentes[], int tamanho) {
   
}

int main() {
    Presente presentes[] = {
        {"Joao", "Carrinho", 1.5},
        {"Maria", "Boneca", 2.0},
        {"Pedro", "Bola", 1.2},
        {"Ana", "Patins", 3.5},
        {"Carlos", "Lego", 2.8}
    };

    // Teste 1: Verificar peso total com 5 presentes
    assert(abs(calcularPesoTotal(presentes, 5) - 11.0) < 0.0001);

    // Teste 2: Nenhum presente
    Presente semPresentes[] = {};
    assert(abs(calcularPesoTotal(semPresentes, 0)) < 0.0001);

    // Teste 3: Apenas um presente
    Presente unicoPresente[] = {{"Joana", "Boneca", 1.5}};
    assert(abs(calcularPesoTotal(unicoPresente, 1) - 1.5) < 0.0001);

    cout << "Todos os testes passaram!\n";
    return 0;
}
