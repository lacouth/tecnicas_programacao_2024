#include <iostream>
#include <cassert>

using namespace std;

int main() {
	vector<int> notas = {70, 85, 90, 60, 75};
    
	assert(calcularMediaNotas(notas) == 76.0);
    
	classificarNotas(notas);
	assert((notas == vector<int>{90, 85, 75, 70, 60}));

	cout << "Exercício 5: Todos os testes passaram!" << endl;
	return 0;
}

