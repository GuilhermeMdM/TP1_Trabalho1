#include "testa_dominios.hpp"

#include <iostream>

int main(){
    cout << "TESTE DE DOMINIOS" << endl;
    TUTexto testeTexto;
    switch(testeTexto.run()) {
    case TUTexto::SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                            break;
    case TUTexto::FALHA  : cout << "FALHA   - CODIGO" << endl;
                            break;
    }
}
