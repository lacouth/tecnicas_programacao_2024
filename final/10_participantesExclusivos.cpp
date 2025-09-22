#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;


// Função auxiliar para comparar dois sets
bool compararSets(const set<string>& a, const set<string>& b) {
    return a == b;
}

// Função auxiliar para imprimir um set
void imprimirSet(const set<string>& s) {
    cout << "{ ";
    for (const string& nome : s) {
        cout << "\"" << nome << "\" ";
    }
    cout << "}";
}

int main() {
    vector<string> ia, robotica;
    set<string> esperado, obtido;

    // Teste 1: exemplo clássico
    ia = {"Ana", "Carlos", "Fernanda", "João"};
    robotica = {"Fernanda", "Lucas", "João", "Marina"};
    esperado = {"Ana", "Carlos", "Lucas", "Marina"};
    obtido = participantesExclusivos(ia, robotica);
    cout << "Teste 1 - Esperado: ";
    imprimirSet(esperado);
    cout << "\n         Obtido: ";
    imprimirSet(obtido);
    cout << "\n";
    assert(compararSets(obtido, esperado));

    // Teste 2: nenhum participante em comum
    ia = {"Ana", "Bruno"};
    robotica = {"Carlos", "Diana"};
    esperado = {"Ana", "Bruno", "Carlos", "Diana"};
    obtido = participantesExclusivos(ia, robotica);
    cout << "\nTeste 2 - Esperado: ";
    imprimirSet(esperado);
    cout << "\n          Obtido: ";
    imprimirSet(obtido);
    cout << "\n";
    assert(compararSets(obtido, esperado));

    // Teste 3: todos os participantes estão em ambos
    ia = {"Ana", "Carlos"};
    robotica = {"Carlos", "Ana"};
    esperado = {};
    obtido = participantesExclusivos(ia, robotica);
    cout << "\nTeste 3 - Esperado: ";
    imprimirSet(esperado);
    cout << "\n          Obtido: ";
    imprimirSet(obtido);
    cout << "\n";
    assert(compararSets(obtido, esperado));

    // Teste 4: um dos eventos vazio
    ia = {};
    robotica = {"Lia", "Leo"};
    esperado = {"Lia", "Leo"};
    obtido = participantesExclusivos(ia, robotica);
    cout << "\nTeste 4 - Esperado: ";
    imprimirSet(esperado);
    cout << "\n          Obtido: ";
    imprimirSet(obtido);
    cout << "\n";
    assert(compararSets(obtido, esperado));

    // Teste 5: ambos vazios
    ia = {};
    robotica = {};
    esperado = {};
    obtido = participantesExclusivos(ia, robotica);
    cout << "\nTeste 5 - Esperado: ";
    imprimirSet(esperado);
    cout << "\n          Obtido: ";
    imprimirSet(obtido);
    cout << "\n";
    assert(compararSets(obtido, esperado));

    cout << "\nTodos os testes passaram com sucesso!" << endl;
    return 0;
}