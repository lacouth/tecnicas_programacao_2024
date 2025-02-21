#include <iostream>
#include <cassert>
#include <string>
using namespace std;



int main(){
    // Testes para a classe Bicicleta
    Bicicleta bike("Caloi", 2020, 25.0);
    // Validação dos atributos:
    assert(bike.getModelo() == "Caloi");
    assert(bike.getAno() == 2020);
    assert(bike.getValorDiaria() == 25.0);
    assert(bike.isDisponivel() == true);
    
    // Teste de aluguel:
    bool alugou = bike.alugar(3);
    assert(alugou == true);
    assert(bike.isDisponivel() == false);
    double custo = bike.calcularCustoAluguel(3);
    assert(custo == 75.0); // 3 * 25.0
    bike.devolver();
    assert(bike.isDisponivel() == true);
    
    // Teste de validação de atributos:
    Bicicleta bike2("", 1890, -10.0);
    assert(bike2.getModelo() == "Modelo Desconhecido");
    assert(bike2.getAno() == 1900);
    assert(bike2.getValorDiaria() == 0);
    
    // Testes para a classe BicicletaEletrica
    BicicletaEletrica ebike("Specialized eBike", 2021, 40.0, 30);
    alugou = ebike.alugar(2, 25);
    assert(alugou == true);
    assert(ebike.isDisponivel() == false);
    custo = ebike.calcularCustoAluguel(2);
    assert(custo == 80.0); // 2 * 40.0
    ebike.devolver();
    // Tenta alugar com distância acima da autonomia (35 km > 30 km)
    alugou = ebike.alugar(2, 35);
    assert(alugou == false);
    assert(ebike.isDisponivel() == true);
    
    // Teste de validação de autonomia negativa:
    BicicletaEletrica ebike2("eBikeX", 2021, 50.0, -20);
    assert(ebike2.getAutonomia() == 0);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
