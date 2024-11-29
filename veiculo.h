#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>

//aqui eu fiz a declaração da classe
class Roda {
public:
    Roda();
    ~Roda();
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
#endif