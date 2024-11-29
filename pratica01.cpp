//se eu quiser colocar para aparecer uma mensagem, é só abrir chaves e colocar o cout
//porque eu devo usar o std::cout ao inves de apenas cout?

#include "veiculo.h"


int main() {
    Veiculo veiculo1("v1");
    //esse set tá definindo um valor
    veiculo1.setNumRodas(4);
    std::cout << "Numero de rodas do veiculo1: " << veiculo1.getNumRodas() << std::endl;

    Veiculo* obj1 = new Veiculo("v2");
    //esse set tá definindo um valor
    obj1->setNumRodas(2);
    std::cout << "Numero de rodas de obj1: " << obj1->getNumRodas() << std::endl;
    delete obj1;

    return 0;



    //delete obj1; //estava ficando cinza antes porque não se usava o delete
    //delete obj2; //usar o delete é chamado de destruição explicita


}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.