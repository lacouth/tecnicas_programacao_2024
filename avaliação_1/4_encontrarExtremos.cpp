#include <iostream>
#include <string>
#include <cassert>

using namespace std;

struct Duende {
    string nomeDuende;
    int brinquedosFabricados;
};

void encontrarExtremos(Duende duendes[], int tamanho, string* maior, string* menor) {
   
}

int main() {
    Duende duendes[] = {
        {"Duende A", 120},
        {"Duende B", 150},
        {"Duende C", 100},
        {"Duende D", 180},
        {"Duende E", 90}
    };

    string maior, menor;

    // Teste 1: Verificar maior e menor quantidade de brinquedos
    encontrarExtremos(duendes, 5, &maior, &menor);
    assert(maior == "Duende D");
    assert(menor == "Duende E");

    // Teste 2: Apenas um duende
    Duende unicoDuende[] = {{"Duende X", 75}};
    encontrarExtremos(unicoDuende, 1, &maior, &menor);
    assert(maior == "Duende X");
    assert(menor == "Duende X");

    // Teste 3: Nenhum duende
    Duende nenhumDuende[] = {};
    encontrarExtremos(nenhumDuende, 0, &maior, &menor);
    assert(maior == "Nenhum duende");
    assert(menor == "Nenhum duende");

    // Teste 4: Duendes com mesma quantidade de brinquedos
    Duende empateDuendes[] = {
        {"Duende Y", 100},
        {"Duende Z", 100}
    };
    encontrarExtremos(empateDuendes, 2, &maior, &menor);
    assert(maior == "Duende Y");
    assert(menor == "Duende Y");

    cout << "Todos os testes passaram!\n";
    return 0;
}