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

    TUEmail testeEmail;
    switch(testeEmail.run()) {
    case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                            break;
    case TUEmail::FALHA  : cout << "FALHA   - EMAIL" << endl;
                            break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()) {
    case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                            break;
    case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                            break;
    }
    
    return 0;
}
