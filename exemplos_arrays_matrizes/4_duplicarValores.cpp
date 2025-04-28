#include <iostream>
#include <cassert>

using namespace std;



int main() {
    // Teste 1
    int array1[] = {1, 2, 3, 4, 5};
    duplicarValores(array1, 5);
    assert(array1[0] == 2 && array1[1] == 4 && array1[2] == 6 && array1[3] == 8 && array1[4] == 10);

    // Teste 2
    int array2[] = {0, -1, 2};
    duplicarValores(array2, 3);
    assert(array2[0] == 0 && array2[1] == -2 && array2[2] == 4);

    // Teste 3 - Array vazio (não deve falhar)
    int array3[] = {};
    duplicarValores(array3, 0);  // não há elementos para modificar
    // Nenhum assert necessário, apenas verificar que não há erros de execução.

    cout << "Todos os testes passaram com sucesso!" << endl;

    return 0;
}
