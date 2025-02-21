#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
using namespace std;



int main(){
    // Teste 1: Criação da tarefa com valores válidos.
    Tarefa t1("Estudar OO", 2, 5);
    assert(t1.getDescricao() == "Estudar OO");
    assert(t1.getPrioridade() == 2);
    assert(t1.getPrazo() == 5);
    assert(t1.isConcluida() == false);
    
    // Teste 2: Criação com prioridade inválida e prazo negativo.
    Tarefa t2("Fazer exercícios", 7, -3);
    // Prioridade inválida deve ser ajustada para 3 e prazo negativo para 0.
    assert(t2.getPrioridade() == 3);
    assert(t2.getPrazo() == 0);
    
    // Teste 3: Alterar a descrição.
    t1.alterarDescricao("Revisar conceitos de OO");
    assert(t1.getDescricao() == "Revisar conceitos de OO");
    t1.alterarDescricao(""); // Não deve alterar, pois é string vazia.
    assert(t1.getDescricao() == "Revisar conceitos de OO");
    
    // Teste 4: Método priorizar().
    // Caso 4a: Prazo menor ou igual a 3 => prioridade deve ser 1.
    Tarefa t3("Entregar projeto", 4, 2); // prazo 2 <= 3, prioridade deve virar 1.
    t3.priorizar();
    assert(t3.getPrioridade() == 1);
    
    // Caso 4b: Prazo entre 4 e 7 e prioridade > 2 => prioridade deve ser ajustada para 2.
    Tarefa t4("Limpar área de trabalho", 4, 6); // prazo 6, prioridade 4 > 2 => vira 2.
    t4.priorizar();
    assert(t4.getPrioridade() == 2);
    
    // Caso 4c: Prazo maior que 7, não deve alterar a prioridade.
    Tarefa t5("Organizar arquivos", 2, 8);
    t5.priorizar();
    assert(t5.getPrioridade() == 2);
    
    // Teste 5: Método postergar().
    // t1 possui prazo inicialmente 5. Postergar em 3 dias: novo prazo deve ser 8.
    t1.postergar(3);
    assert(t1.getPrazo() == 8);
    // Se a tarefa estiver concluída, postergar não deve alterar o prazo.
    t1.marcarComoConcluida();
    int prazoAntes = t1.getPrazo();
    t1.postergar(5);
    assert(t1.getPrazo() == prazoAntes);
    
    // Teste 6: Marcar como concluída.
    t2.marcarComoConcluida();
    assert(t2.isConcluida() == true);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
