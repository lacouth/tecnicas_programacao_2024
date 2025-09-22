#include <iostream>
#include <string>

using namespace std;

// --- COLOQUE SUA FUNÇÃO AQUI ---


int main() {
   cout << "\n--- Testando removerCaractere ---" << endl;

    // Teste 1: Remover um caractere que existe no meio da string
    string resultado1 = removerCaractere("programacao", 'a');
    if (resultado1 == "progrmco") {
        cout << "Teste 1 (remover 'a' de programacao): PASSOU" << endl;
    } else {
        cout << "Teste 1: FALHOU. Esperado: progrmco, Recebido: " << resultado1 << endl;
    }

    // Teste 2: Remover um caractere que não existe na string
    string resultado2 = removerCaractere("C++ e legal", 'z');
    if (resultado2 == "C++ e legal") {
        cout << "Teste 2 (remover 'z' de C++ e legal): PASSOU" << endl;
    } else {
        cout << "Teste 2: FALHOU. Esperado: C++ e legal, Recebido: " << resultado2 << endl;
    }

    // Teste 3: String original vazia
    string resultado3 = removerCaractere("", 'a');
    if (resultado3 == "") {
        cout << "Teste 3 (string vazia): PASSOU" << endl;
    } else {
        cout << "Teste 3: FALHOU. Esperado: \"\", Recebido: " << resultado3 << endl;
    }

    // Teste 4: Remover um caractere que é o único na string
    string resultado4 = removerCaractere("bbbb", 'b');
    if (resultado4 == "") {
        cout << "Teste 4 (remover 'b' de bbbb): PASSOU" << endl;
    } else {
        cout << "Teste 4: FALHOU. Esperado: \"\", Recebido: " << resultado4 << endl;
    }

    // Teste 5: Remover um espaço
    string resultado5 = removerCaractere("removendo o espaco", ' ');
    if (resultado5 == "removendooespaco") {
        cout << "Teste 5 (remover espaco): PASSOU" << endl;
    } else {
        cout << "Teste 5: FALHOU. Esperado: removendooespaco, Recebido: " << resultado5 << endl;
    }
    return 0;
}