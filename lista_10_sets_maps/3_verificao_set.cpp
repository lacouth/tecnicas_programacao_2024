#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	set<int> conjunto1 = {1, 2, 3, 4};
	set<int> conjunto2 = {3, 4, 5, 6};
    
	set<int> resultado = diferencaDeConjuntos(conjunto1, conjunto2);
    
	// Testes
	assert(resultado.size() == 2);
	assert(resultado.find(1) != resultado.end()); // Elemento 1 deve estar no resultado
	assert(resultado.find(3) == resultado.end()); // Elemento 3 não deve estar no resultado
    
	cout << "Todos os testes passaram para o exercício 3.\n";
	return 0;
}

