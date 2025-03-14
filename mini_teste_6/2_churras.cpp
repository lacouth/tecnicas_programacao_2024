#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int main() {
    vector<Carne> carnes1 = {{"picanha", 15}, {"coracao", 14}, {"maminha", 37}};
    assert((ordemCarnes(carnes1) == vector<string>{"coracao", "picanha", "maminha"}));

    vector<Carne> carnes2 = {{"alcatra", 17}, {"linguica", 13}, {"asinha", 5}, {"pernil", 23}};
    assert((ordemCarnes(carnes2) == vector<string>{"asinha", "linguica", "alcatra", "pernil"}));

    vector<Carne> carnes3 = {{"fraldinha", 10}};
    assert((ordemCarnes(carnes3) == vector<string>{"fraldinha"}));

    vector<Carne> carnes4 = {};
    assert((ordemCarnes(carnes4) == vector<string>{}));

    cout << "Todos os testes passaram!" << endl;
    return 0;
}