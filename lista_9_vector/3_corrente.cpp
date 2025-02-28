#include <iostream>
#include <cassert>

using namespace std;

int main() {
	vector<int> correntes = {5, 20, 15, 30, 10};
    
	assert(encontrarMaximo(correntes) == 30);
	assert(encontrarMinimo(correntes) == 5);

	cout << "Exercício 3: Todos os testes passaram!" << endl;
	return 0;
}