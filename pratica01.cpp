#include "veiculo.h"
#include <iostream>
using namespace std;

int main() {

    Veiculo *obj1 = new Veiculo("v1");
    obj1->setNumRodas(4);

    delete obj1;

    //Veiculo *obj2 = new Veiculo("v2");
    //obj2->setNumRodas(2);
    //cout << "Numero de rodas no objeto 2: " << obj2->getNumRodas() << endl;
    //delete obj2;

return 0;
    //{
    //  Veiculo veiculo1("v1");
    //  {
    //    Veiculo veiculo2("v2");
    //    {
    //      Veiculo veiculo3("v3");
    //    }
    //  }
    //}
}

