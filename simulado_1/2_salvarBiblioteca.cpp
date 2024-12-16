/*

Você está criando um sistema para gerenciar uma biblioteca virtual. Cada livro possui:

    Título (string)
    Autor (string)
    Ano de Publicação (int)

    Crie uma struct Livro para representar os livros.
    
    Implemente a função salvarBiblioteca que recebe um ponteiro para um array de structs Livro, 
    o tamanho do array e o nome de um arquivo.
    
    A função deve salvar todos os livros no formato .csv. 
    
    A primeira linha do arquivo deve conter o cabeçalho "Titulo,Autor,Ano".

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    const string nomeArquivo = "biblioteca.csv";

    Livro livros[] = {
        {"Livro A", "Autor A", 2001},
        {"Livro B", "Autor B", 2005},
        {"Livro C", "Autor C", 2010}
    };

    salvarBiblioteca(livros, 3, nomeArquivo);

    // Verificar o conteúdo do arquivo
    ifstream arquivo(nomeArquivo);
    assert(arquivo.is_open());

    string linha;

    // Verificar cabeçalho
    getline(arquivo, linha);
    assert(linha == "Titulo,Autor,Ano");

    // Verificar primeira linha de dados
    getline(arquivo, linha);
    assert(linha == "Livro A,Autor A,2001");

    // Verificar segunda linha de dados
    getline(arquivo, linha);
    assert(linha == "Livro B,Autor B,2005");

    arquivo.close();

    cout << "Todos os testes passaram!\n";
    return 0;
}
