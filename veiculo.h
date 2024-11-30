#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

//aqui eu fiz a declaração da classe
class Roda {
public:
    Roda(const Veiculo& veiculo) : Veiculo(veiculo) {
        std::cout << "Objeto Roda do veiculo " << veiculo.getNome() << " construído." << std::endl;
    }

    ~Roda() {
        std::cout << "Objeto Roda destruído." << std::endl;
    }
};

class Veiculo {
    //por estar privado, deve usar set e get, como em Java
    //dentro de private se define os atributos da classe
private:
    std::string nome;
    int num_rodas;
    Roda* rodas;

public:
    //isso que é chamado de construtor parametrizado
    //(const char* param) esta passando uma string constante
    Veiculo(const char* param);
    ~Veiculo();

    void setNumRodas(int rodas);
    int getNumRodas() const;
};

Roda::~Roda() {
 
}

Veiculo::Veiculo(const char* param) : nome(param), num_rodas(0), rodas(nullptr) {
    std::cout << "Novo objeto construido: " << nome << std::endl;
}

Veiculo::~Veiculo() {
  if (rodas != nullptr) {
        delete[] rodas;  // Destruir o array de rodas se alocado
    }
  std::cout << "Objeto destruido: " << nome << std::endl;
}

void Veiculo::setNumRodas(int rodas) {
    
  this->num_rodas = rodas;
  this->rodas = new Roda[num_rodas];
  //Roda* rodas = new Roda[num_rodas];
}

int Veiculo::getNumRodas() const {
  return num_rodas;
}

#endif