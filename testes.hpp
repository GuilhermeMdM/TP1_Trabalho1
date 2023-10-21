#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

#include "dominios.hpp"

// Classe para texte unitário da Classe Texto
class TUTexto {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Texto *texto;                           // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

// Classe para teste unitário da classe Codigo
class TUCodigo {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

// Classe para teste unitário da classe Limite
class TULimite {
private:
    const static int VALOR_VALIDO;
    const static int VALOR_INVALIDO;
    Limite *limite;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

// Classe para teste unitário da classe Coluna
class TUColuna {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Coluna *coluna;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

// Classe para teste unitário da classe Email
class TUEmail {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Email *email;                           // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

// Classe para teste unitário da Classe Senha
class TUSenha {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;                           // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();                              // Método para executar teste.
};

#endif // TESTE_H_INCLUDED
