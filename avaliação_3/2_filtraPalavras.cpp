#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cassert>
#include <string>

using namespace std;

int main() {
    assert((filtraPalavrasPorTamanho({"casa", "carro", "sol", "lua", "flor", "casa", "arroz"}, 4) == vector<string>{"casa", "flor"}));
    assert((filtraPalavrasPorTamanho({"banana", "uva", "manga", "pera"}, 5) == vector<string>{"manga"}));
    assert((filtraPalavrasPorTamanho({}, 3) == vector<string>{}));
    assert((filtraPalavrasPorTamanho({"abc", "def", "ghi", "jkl", "abc"}, 3) == vector<string>{"abc", "def", "ghi", "jkl"}));
    assert((filtraPalavrasPorTamanho({"hello", "world", "test"}, 7) == vector<string>{}));

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
