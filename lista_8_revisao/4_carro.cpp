#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;

int main() {
    // Teste 1: Criação
    CarroControleRemoto carro1("Lightning", 80, 60);
    assert(carro1.getNome() == "Lightning");
    assert(fabs(carro1.getVelocidade() - 80) < 1e-6);
    assert(fabs(carro1.getBateria() - 60) < 1e-6);
    
    CarroControleRemoto carroNegativo("Oldie", -30, -20);
    assert(fabs(carroNegativo.getVelocidade() - 0) < 1e-6);
    assert(fabs(carroNegativo.getBateria() - 0) < 1e-6);
    
    CarroControleRemoto carroFull("Rocket", 100, 150);
    assert(fabs(carroFull.getBateria() - 100) < 1e-6);
    
    // Teste 2: Aceleração
    // Acelerar carro1 em 20 km/h: consome 20*0.5 = 10 unidades de bateria.
    carro1.acelerar(20);
    assert(fabs(carro1.getVelocidade() - 100) < 1e-6);
    assert(fabs(carro1.getBateria() - 50) < 1e-6);
    
    // Tenta acelerar com incremento que exige mais bateria do que disponível.
    carro1.acelerar(200); // Necessitaria de 100 unidades, mas há apenas 50.
    assert(fabs(carro1.getVelocidade() - 100) < 1e-6);
    assert(fabs(carro1.getBateria() - 50) < 1e-6);
    
    // Teste 3: Frenagem
    carro1.frear(30); // 100 - 30 = 70 km/h.
    assert(fabs(carro1.getVelocidade() - 70) < 1e-6);
    carro1.frear(100); // Não pode ficar negativa; deve ser 0.
    assert(fabs(carro1.getVelocidade() - 0) < 1e-6);
    
    // Teste 4: Recarregar
    carro1.recarregar(30); // Bateria: 50 + 30 = 80.
    assert(fabs(carro1.getBateria() - 80) < 1e-6);
    carro1.recarregar(30); // 80 + 30 = 110, mas ajusta para 100.
    assert(fabs(carro1.getBateria() - 100) < 1e-6);
    carro1.recarregar(-10); // Valor negativo, ignora.
    assert(fabs(carro1.getBateria() - 100) < 1e-6);
    
    // Teste 5: Turbo
    // Resetando carro1 para 80 km/h e 60 unidades de bateria.
    carro1 = CarroControleRemoto("Lightning", 80, 60);
    carro1.aplicarTurbo(); // Velocidade: 80+50=130, Bateria: 60-15=45.
    assert(fabs(carro1.getVelocidade() - 130) < 1e-6);
    assert(fabs(carro1.getBateria() - 45) < 1e-6);
    
    // Tenta aplicar turbo sem bateria suficiente:
    CarroControleRemoto carro2("Mini", 50, 10);
    carro2.aplicarTurbo(); // Não deve aplicar, pois 10 < 15.
    assert(fabs(carro2.getVelocidade() - 50) < 1e-6);
    assert(fabs(carro2.getBateria() - 10) < 1e-6);
    
    // Teste 6: Calcular Distância
    // Com velocidade 130 km/h e tempo 2 horas => 260 km.
    double distancia = carro1.calcularDistancia(2);
    assert(fabs(distancia - 260) < 1e-6);
    // Tempo negativo retorna 0.
    distancia = carro1.calcularDistancia(-1);
    assert(fabs(distancia - 0) < 1e-6);
    
    // Teste 7: podeAcelerar
    // Para carro1, bateria é 45. Para acelerar 20 km/h, consumo = 10 unidades.
    assert(carro1.podeAcelerar(20) == true);
    // Tenta acelerar 100 km/h, consumo = 50, mas só há 45.
    assert(carro1.podeAcelerar(100) == false);
    
    cout << "Todos os testes passaram!" << endl;
    return 0;
}
