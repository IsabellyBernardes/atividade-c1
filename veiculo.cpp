#include "veiculo.h"

//esse :: é usado para definir o construtor
Roda::Roda() {
  std::cout << "Objeto Roda construido" << std::endl;
}
//acho que na mesma ideia de cima, so que para um destrutor agora
//realmente a mesma ideia, rodou
Roda::~Roda() {
  std::cout << "Objeto Roda destruido" << std::endl;
}

Veiculo::Veiculo(const char* param) : nome(param), num_rodas(0), rodas(nullptr) {
  std::cout << "Novo objeto construido: " << nome << std::endl;
}

Veiculo::~Veiculo() {
  delete[] rodas;
  std::cout << "Objeto destruido: " << nome << std::endl;
}

void Veiculo::setNumRodas(int rodas) {
  num_rodas = rodas;
}

int Veiculo::getNumRodas() const {
  return num_rodas;
}
