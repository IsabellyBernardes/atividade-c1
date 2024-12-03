#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
using namespace std;

class Roda {
public:
    Roda() {
        cout << "Roda construida" << endl;
    }

    ~Roda() {
        cout << "Roda destruida" << endl;
    }
};

class Veiculo {
private:
    string nome;
    int num_rodas;
    Roda *rodas;

public:
    Veiculo() : nome("default"), num_rodas(0), rodas(nullptr) {
    }
    //ambos garantem que o objeto Veiculo é inicializado corretamente
    //seja com valores padroes ou valores fornecidos pelo usuario
    Veiculo(const string &nome) : nome(nome), num_rodas(0), rodas(nullptr) {
    }

    ~Veiculo() {
        delete[] rodas;
    }

    void setNumRodas(const int &num_rodas);

    int getNumRodas() const;
};

void Veiculo::setNumRodas(const int &num_rodas) {
    this->num_rodas = num_rodas;
    cout << "Numero de rodas do objeto " << nome << " : " << num_rodas << endl;
    this->rodas = new Roda[num_rodas];


    //this->num_rodas = num_rodas;
    //cout << "Numero de rodas: " << num_rodas << endl;
}

int Veiculo::getNumRodas() const {
    return num_rodas;
}


#endif //VEICULO_H
