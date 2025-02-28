#include <iostream>
#include <vector>
#include <cassert>  // Para assert

using namespace std;

int main() {
	vector<int> leituras = {10, 20, 30, 40, 50};
	assert(calcularMedia(leituras) == 30.0);
    
	vector<int> leiturasVazias = {};
	assert(calcularMedia(leiturasVazias) == 0.0);

	cout << "Exercício 1: Todos os testes passaram!" << endl;
	return 0;
}