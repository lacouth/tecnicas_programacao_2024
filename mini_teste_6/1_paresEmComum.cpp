#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;


int main() {
    assert((paresEmComum({2, 4, 4, 5, 7}, {4, 4, 6, 8, 2}) == vector<int>{2, 4}));
    assert((paresEmComum({1, 3, 5}, {2, 4, 6}) == vector<int>{}));
    assert((paresEmComum({10, 10, 12, 14}, {14, 10, 16, 10}) == vector<int>{10, 14}));
    assert((paresEmComum({}, {2, 4}) == vector<int>{}));

    cout << "Todos os testes passaram!" << endl;
    return 0;
}