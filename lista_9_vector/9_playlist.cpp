#include <iostream>  
#include <vector>  
#include <algorithm>  
#include <cassert>  
using namespace std;  



int main() {  
    vector<Musica> playlist = {  
        {"Quanto Tempo", 200},  
        {"Calma", 180},  
        {"Velha Infância", 240},  
        {"Dança da Solidão", 220}  
    };  

    ordenarPorDuracao(playlist);  

    // Teste 1: Verificar ordem crescente de duração  
    assert(playlist[0].duracao == 180); // "Calma"  
    assert(playlist[1].duracao == 200); // "Quanto Tempo"  
    assert(playlist[2].duracao == 220); // "Dança da Solidão"  
    assert(playlist[3].duracao == 240); // "Velha Infância"  

    // Teste 2: Verificar nomes associados corretamente  
    assert(playlist[0].nome == "Calma");  
    assert(playlist[3].nome == "Velha Infância");  

    // Teste 3: Adicionar música com duração igual e verificar ordenação  
    playlist.push_back({"Memórias", 180});  
    ordenarPorDuracao(playlist);  
    assert(playlist[0].duracao == 180 && playlist[1].duracao == 180);  

    cout << "Todos os testes passaram!" << endl;  
    return 0;  
}  