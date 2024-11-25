#include <iostream>
#include <string>

using namespace std;

const int MAX_ALUNOS = 100;

struct Aluno {
    string nome;
    string matricula;
    float nota;
};

// Variáveis globais
Aluno alunos[MAX_ALUNOS]; // Array global de alunos
int totalAlunos = 0;      // Contador global de alunos

// Funções
void cadastrarAluno(string& nome, string& matricula, float nota);
void listarAlunos();
int buscarAlunoPorMatricula(string& matricula);
void editarNota(int indice, float novaNota);

int main() {
    int opcao;

    do {
        system("clear");
        cout << "\nMENU:\n";
        cout << "1. Cadastrar aluno\n";
        cout << "2. Listar todos os alunos\n";
        cout << "3. Buscar aluno por matricula\n";
        cout << "4. Editar nota de um aluno\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1: {
            string nome, matricula;
            float nota;
            cout << "Digite o nome do aluno: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Digite a matricula do aluno: ";
            getline(cin, matricula);
            cout << "Digite a nota final do aluno: ";
            cin >> nota;
            cadastrarAluno(nome, matricula, nota);
            break;
        }
        case 2:
            listarAlunos();
            break;
        case 3: {
            string matricula;
            cout << "Digite a matricula do aluno: ";
            cin.ignore();
            getline(cin, matricula);
            int indice = buscarAlunoPorMatricula(matricula);
            if (indice != -1) {
                cout << "Aluno encontrado: " << alunos[indice].nome
                     << " | Nota: " << alunos[indice].nota << endl;
            } else {
                cout << "Aluno com matricula " << matricula << " nao encontrado.\n";
            }
            break;
        }
        case 4: {
            string matricula;
            cout << "Digite a matricula do aluno: ";
            cin.ignore();
            getline(cin, matricula);
            int indice = buscarAlunoPorMatricula(matricula);
            if (indice != -1) {
                float novaNota;
                cout << "Digite a nova nota para o aluno " << alunos[indice].nome << ": ";
                cin >> novaNota;
                editarNota(indice, novaNota);
            } else {
                cout << "Aluno com matricula " << matricula << " nao encontrado.\n";
            }
            break;
        }
        case 5:
            cout << "Saindo do programa...\n";
            break;
        default:
            cout << "Opcao invalida!\n";
            break;
        }
    } while (opcao != 5);

    return 0;
}