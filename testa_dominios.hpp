#ifndef TESTEDOMINIO_H_INCLUDED
#define TESTEDOMINIO_H_INCLUDED

#include "dominios.hpp"

class TUTexto {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Texto *texto;                           // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // M�todo para executar teste.
};


#endif // TESTEDOMINIO_H_INCLUDED
