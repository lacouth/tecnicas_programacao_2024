#include <iostream>
#include <set>
#include <string>
#include <cassert>

using namespace std;



int main() {
    set<string> placas;
    bool resultado;

    resultado = verificarPlacaNova(placas, "ABC-1234");
    cout << "Teste 1 - Nova placa 'ABC-1234': Esperado: 1, Obtido: " << resultado << endl;
    assert(resultado == true);

    resultado = verificarPlacaNova(placas, "XYZ-9876");
    cout << "Teste 2 - Nova placa 'XYZ-9876': Esperado: 1, Obtido: " << resultado << endl;
    assert(resultado == true);

    resultado = verificarPlacaNova(placas, "ABC-1234");
    cout << "Teste 3 - Repetida 'ABC-1234': Esperado: 0, Obtido: " << resultado << endl;
    assert(resultado == false);

    resultado = verificarPlacaNova(placas, "LMN-4567");
    cout << "Teste 4 - Nova placa 'LMN-4567': Esperado: 1, Obtido: " << resultado << endl;
    assert(resultado == true);

    resultado = verificarPlacaNova(placas, "XYZ-9876");
    cout << "Teste 5 - Repetida 'XYZ-9876': Esperado: 0, Obtido: " << resultado << endl;
    assert(resultado == false);

    cout << "Todos os testes passaram com sucesso!" << endl;
    return 0;
}
