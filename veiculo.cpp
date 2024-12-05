#include "veiculo.h"
#include <iostream>
using namespace std;

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
//por algum motivo, aqui não funciona os métodos

