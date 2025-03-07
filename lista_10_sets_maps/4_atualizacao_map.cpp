#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	map<string, int> estoque = {{"maçã", 10}, {"banana", 5}};
	vector<string> vendidos = {"maçã", "banana", "laranja"};
    
	atualizarEstoque(estoque, vendidos);
    
	// Testes
	assert(estoque["maçã"] == 9); 	// Quantidade de maçã deve ser 9
	assert(estoque["banana"] == 4);   // Quantidade de banana deve ser 4
	assert(estoque["laranja"] == 0);  // Laranja foi adicionada com quantidade 0
    
	cout << "Todos os testes passaram para o exercício 4.\n";
	return 0;
}