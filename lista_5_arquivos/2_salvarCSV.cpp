/*

Crie uma função chamada salvarCSV que receba um nome de arquivo (string), um array de strings representando os cabeçalhos e um array bidimensional de strings representando os dados. A função deve salvar os dados no formato .csv, onde os valores são separados por vírgulas.

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    const string nomeArquivo = "dados.csv";

    string cabecalhos[3] = {"Nome", "Idade", "Cidade"};
    string dados[3][3] = {
        {"Joao", "25", "Sao Paulo"},
        {"Maria", "30", "Rio de Janeiro"},
        {"Pedro", "22", "Belo Horizonte"}
    };

    salvarCSV(nomeArquivo, cabecalhos, 3, dados, 3);

    ifstream arquivo(nomeArquivo);
    assert(arquivo.is_open());

    string linha;

    // Verificar cabeçalhos
    getline(arquivo, linha);
    assert(linha == "Nome,Idade,Cidade");

    // Verificar primeira linha de dados
    getline(arquivo, linha);
    assert(linha == "Joao,25,Sao Paulo");

    arquivo.close();

    cout << "Teste do arquivo CSV passou!" << endl;
    return 0;
}
