#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	set<int> conjunto = {1, 2, 3, 4, 5};
	vector<int> elementos = {2, 4, 6};
    
	int removidos = removerElementosDoConjunto(conjunto, elementos);
    
	// Testes
	assert(removidos == 2); // 2 elementos foram removidos (2 e 4)
	assert(conjunto.size() == 3); // Tamanho total do conjunto deve ser 3
	assert(conjunto.find(2) == conjunto.end()); // Elemento 2 não deve estar presente
	assert(conjunto.find(4) == conjunto.end()); // Elemento 4 não deve estar presente
    
	cout << "Todos os testes passaram para o exercício 5.\n";
	return 0;
}

