#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	set<int> conjunto = {1, 2, 3};
	vector<int> elementos = {3, 4, 5, 6};
    
	int adicionados = inserirElementosNoConjunto(conjunto, elementos);
    
	// Testes
	assert(adicionados == 3); // 3 elementos novos foram adicionados
	assert(conjunto.size() == 6); // Tamanho total do conjunto deve ser 6
    
	cout << "Todos os testes passaram para o exercício 1.\n";
	return 0;
}