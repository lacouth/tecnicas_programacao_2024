#include <iostream>
#include <cassert>
#include <string>
using namespace std;


int main() {
    // Testes para ChamadoHardware
    ChamadoHardware ch1(1, "problema na impressora com falta de papel");
    ChamadoHardware ch2(2, "teclado nao funciona");

    // Teste 1: ChamadoHardware com "impressora" e "papel"
    assert(ch1.processar() == "Verificar papel preso na impressora");
    cout << "Teste 1: ChamadoHardware com impressora e papel - processamento correto." << endl;

    // Teste 2: ChamadoHardware sem as palavras chave
    assert(ch2.processar() == "Encaminhar para suporte de hardware");
    cout << "Teste 2: ChamadoHardware sem as palavras chave - encaminhamento correto." << endl;

    // Testes para ChamadoSoftware
    ChamadoSoftware cs1(3, "mensagem de erro durante a instalacao");
    ChamadoSoftware cs2(4, "o aplicativo trava ao abrir");

    // Teste 3: ChamadoSoftware com "erro" e "instalacao"
    assert(cs1.processar() == "Realizar reinstalacao do software");
    cout << "Teste 3: ChamadoSoftware com erro e instalacao - processamento correto." << endl;

    // Teste 4: ChamadoSoftware sem as palavras chave
    assert(cs2.processar() == "Encaminhar para suporte de software");
    cout << "Teste 4: ChamadoSoftware sem as palavras chave - encaminhamento correto." << endl;

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
