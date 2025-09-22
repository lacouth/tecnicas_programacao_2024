#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int contarPalavrasComA(string lista[], int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i][0] == 'A' || lista[i][0] == 'a') {
            contador++;
        }
    }
    return contador;
}

int main() {
    // Teste 1: duas palavras começam com A/a
    string lista1[] = {"Abacaxi", "Banana", "amora", "Caju"};
    assert(contarPalavrasComA(lista1, 4) == 2);

    // Teste 2: nenhuma palavra começa com A/a
    string lista2[] = {"pera", "uva", "melancia"};
    assert(contarPalavrasComA(lista2, 3) == 0);

    // Teste 3: todas começam com A/a
    string lista3[] = {"Abelha", "Arvore", "amor"};
    assert(contarPalavrasComA(lista3, 3) == 3);

    // Teste 4: inclui string vazia (não conta)
    string lista4[] = {"", "Avenida", "aeroporto"};
    assert(contarPalavrasComA(lista4, 3) == 2);

    // Teste 5: lista vazia
    string lista5[1];
    assert(contarPalavrasComA(lista5, 0) == 0);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
