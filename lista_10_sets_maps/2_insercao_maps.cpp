#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	map<string, int> mapa = {{"a", 1}, {"b", 2}};
	vector<pair<string, int>> elementos = {{"b", 3}, {"c", 4}, {"d", 5}};
    
	int novasChaves = inserirElementosNoMapa(mapa, elementos);
    
	// Testes
	assert(novasChaves == 2); // 2 novas chaves foram adicionadas
	assert(mapa["b"] == 3);   // Valor de "b" deve ser atualizado para 3
	assert(mapa.size() == 4); // Tamanho total do mapa deve ser 4
    
	cout << "Todos os testes passaram para o exercício 2.\n";
	return 0;
}

