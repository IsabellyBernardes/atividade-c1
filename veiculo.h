#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>


class Roda {
public:
    Roda();
    ~Roda();
};

class Veiculo {
private:
    std::string nome;
    int num_rodas;
    Roda* rodas;

public:
    Veiculo(const char* param);
    ~Veiculo();

    void setNumRodas(int rodas);
    int getNumRodas() const;
};
#endif