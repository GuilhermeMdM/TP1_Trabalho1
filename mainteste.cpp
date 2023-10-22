#include "testes.hpp"

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
    
    TULimite testeLimite;
    switch(testeLimite.run()) {
    case TULimite::SUCESSO: cout << "SUCESSO - LIMITE" << endl;
                            break;
    case TULimite::FALHA  : cout << "FALHA   - LIMITE" << endl;
                            break;
    }

    TUColuna testeColuna;
    switch(testeColuna.run()) {
    case TUColuna::SUCESSO: cout << "SUCESSO - COLUNA" << endl;
                            break;
    case TUColuna::FALHA  : cout << "FALHA   - COLUNA" << endl;
                            break;
    }

    TUCodigo testeCodigo;
    switch(testeCodigo.run()) {
    case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                            break;
    case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                            break;
    }

    cout << endl << "TESTE DE ENTIDADES" << endl;

    TUQuadro testeQuadro;

    switch(testeQuadro.run()){
        case TUQuadro::SUCESSO: cout << "SUCESSO - QUADRO" << endl;
                                break;
        case TUQuadro::FALHA  : cout << "FALHA   - QUADRO" << endl;
                                break;
    }

    TUCartao testeCartao;

    switch(testeCartao.run()){
        case TUCartao::SUCESSO: cout << "SUCESSO - CARTAO" << endl;
                                break;
        case TUCartao::FALHA  : cout << "FALHA   - CARTAO" << endl;
                                break;
    }
    
    TUConta testeConta;

    switch(testeConta.run()){
        case TUConta::SUCESSO: cout << "SUCESSO - CONTA" << endl;
                                break;
        case TUConta::FALHA  : cout << "FALHA   - CONTA" << endl;
                                break;
    }

    return 0;
}
