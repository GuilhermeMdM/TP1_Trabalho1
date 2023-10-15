#ifndef TESTEDOMINIO_H_INCLUDED
#define TESTEDOMINIO_H_INCLUDED

#include "dominios.hpp"

// Classe para texte unit�rio da Classe Texto
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

// Classe para teste unit�rio da classe Codigo
class TUCodigo {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Codigo *codigo;                         // Refer�ncia para unidade em teste.
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

// Classe para teste unit�rio da classe Limite
class TULimite {
private:
    const static int VALOR_VALIDO;
    const static int VALOR_INVALIDO;
    Limite *limite;                         // Refer�ncia para unidade em teste.
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

// Classe para teste unit�rio da classe Coluna
class TUColuna {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Coluna *coluna;                         // Refer�ncia para unidade em teste.
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

// Classe para teste unit�rio da classe Email
class TUEmail {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Email *email;                           // Refer�ncia para unidade em teste.
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

// Classe para teste unit�rio da Classe Senha
class TUSenha {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;                           // Refer�ncia para unidade em teste.
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
