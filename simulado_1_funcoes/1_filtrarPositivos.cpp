#include <iostream>
#include <cassert>

using namespace std;

int filtrarPositivos(int numeros[], int n, int resultado[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (numeros[i] > 0) {
            resultado[count] = numeros[i];
            count++;
        }
    }
    return count;
}

int main() {
    int entrada1[]   = { -1, 0, 1, 2, -3 };
    int saida1[5];
    int tam1 = filtrarPositivos(entrada1, 5, saida1);
    // espera 2 positivos: {1,2}
    assert(tam1 == 2);
    assert(saida1[0] == 1 && saida1[1] == 2);

    int entrada2[]   = { 5, 4, 3 };
    int saida2[3];
    int tam2 = filtrarPositivos(entrada2, 3, saida2);
    // todos positivos
    assert(tam2 == 3);
    assert(saida2[0] == 5 && saida2[1] == 4 && saida2[2] == 3);

    int entrada3[]   = { -5, 0, -2 };
    int saida3[3];
    int tam3 = filtrarPositivos(entrada3, 3, saida3);
    // nenhum positivo
    assert(tam3 == 0);

    int entrada4[]   = {};
    int saida4[1];
    int tam4 = filtrarPositivos(entrada4, 0, saida4);
    // vetor vazio
    assert(tam4 == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}