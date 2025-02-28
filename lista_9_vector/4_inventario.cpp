#include <iostream>
#include <cassert>

using namespace std;

int main() {
	vector<int> resistores = {50, 10, 30, 5, 60};
    
	adicionarResistor(resistores, 70);
	assert((resistores == vector<int>{50, 10, 30, 5, 60, 70}));
    
	removerResistoresDanificados(resistores, 20);
	assert((resistores == vector<int>{50, 30, 60, 70}));

	cout << "Exercício 4: Todos os testes passaram!" << endl;
	return 0;
}