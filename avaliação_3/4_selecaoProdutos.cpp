#include <iostream>
#include <map>
#include <string>
#include <cassert>

using namespace std;


int main() {
    {
        map<string, double> produtos = {
            {"arroz", 10.0},
            {"azeite", 15.0},
            {"feijao", 7.5},
            {"macarrao", 5.0}
        };
        map<string, double> esperado = {
            {"arroz", 10.0},
            {"feijao", 7.5}
        };
        assert(selecionaProdutos(produtos, 20.0) == esperado);
    }
    {
        map<string, double> produtos = {
            {"leite", 4.0},
            {"pao", 3.0},
            {"queijo", 8.0}
        };
        map<string, double> esperado = {
            {"leite", 4.0},
            {"pao", 3.0},
            {"queijo", 8.0}
        };
        assert(selecionaProdutos(produtos, 15.0) == esperado);
    }
    {
        map<string, double> produtos = {
            {"x", 11.0}
        };
        map<string, double> esperado = {};
        assert(selecionaProdutos(produtos, 10.0) == esperado);
    }
    {
        map<string, double> produtos = {};
        map<string, double> esperado = {};
        assert(selecionaProdutos(produtos, 10.0) == esperado);
    }
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
