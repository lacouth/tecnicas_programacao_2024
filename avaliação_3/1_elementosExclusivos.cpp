#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;


int main() {
    assert((elementosExclusivos({2, 4, 4, 5, 7}, {4, 4, 6, 8, 2}) == vector<int>{5, 6, 7, 8}));
    assert((elementosExclusivos({1, 3, 5}, {1, 3, 5}) == vector<int>{}));
    assert((elementosExclusivos({10, 10, 12, 14}, {14, 10, 16, 10}) == vector<int>{12, 16}));
    assert((elementosExclusivos({}, {2, 4}) == vector<int>{2, 4}));

    cout << "Todos os testes passaram!" << endl;
    return 0;
}
