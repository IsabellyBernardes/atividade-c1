#include "veiculo.h"

Roda::Roda() {
  std::cout << "Objeto Roda construído" << std::endl;
}
Roda::~Roda() {
  std::cout << "Objeto Roda destruído" << std::endl;
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
