#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	map<string, int> mapa = {{"a", 1}, {"b", 2}, {"c", 3}};
	vector<string> chaves = {"b", "c", "d"};
    
	int removidas = removerElementosDoMapa(mapa, chaves);
    
	// Testes
	assert(removidas == 2); // 2 chaves foram removidas (b e c)
	assert(mapa.size() == 1); // Tamanho total do mapa deve ser 1
	assert(mapa.find("b") == mapa.end()); // Chave "b" não deve estar presente
	assert(mapa.find("c") == mapa.end()); // Chave "c" não deve estar presente
	assert(mapa.find("a") != mapa.end()); // Chave "a" deve estar presente
    
	cout << "Todos os testes passaram para o exercício 6.\n";
	return 0;
}

