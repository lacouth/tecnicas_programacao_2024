#include <iostream>
#include <cassert>

using namespace std;

int main() {
	vector<int> tensoes = {250, 15, 230, 8, 120};
    
	classificarDados(tensoes);
	assert((tensoes == vector<int>{8, 15, 120, 230, 250}));
    
	filtrarDados(tensoes, 10, 240);
	assert((tensoes == vector<int>{15, 120, 230}));

	cout << "Exercício 2: Todos os testes passaram!" << endl;
	return 0;
}