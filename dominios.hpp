#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Senha {
    private:
        string senha;
        void validar(string);
    public:
        void setValor(string);
        string getValor();
};

inline string Senha::getValor() {
    return senha;
}

//Autor: 211038217

/// @brief Padrão para informação em forma de caracteres
/// @note Regras do formato:\n
/// 5 a 30 Caracteres.\n
/// Cada caractere é letra (A-Z,a-z),digito,sinal de pontuação(.,;?!) ou espaço em branco.\n
/// Não há espaços em branco em sequência.\n
/// Não há sinais de pontuação em sequência.\n
/// Não há acentuação.\n
/// Primeiro caractere é letra maiúscula.\n
/// Primeiro caractere após sinal de pontuação (exceto vírgula ou ponto-e-vírgula) é letra maiúscula.\n

class Texto {
    private:
        string texto;
        void validar (string);
    public:
        /// Armazena uma string caso o formato seja válido.\n
        /// Lança exceção caso o formato não sejá válido.
        ///@param string texto
        ///@throw invalid_argument
        void setTexto(string);
        /// Retorna uma string com o valor de texto
        /// @return string texto
        string getTexto();
};

inline string Texto::getTexto() {
    return texto;
}


class ChecaCaractere{
    public:
        static int caractere_ascii;
        static char sinais_de_pontuacao[5];
        static bool e_maiuscula_sem_acento(char);
        static bool e_minuscula_sem_acento(char);
        static bool e_pontuacao(char);
        static bool e_digito (char);
        static bool e_embranco (char);
        static bool caractere_especial_email (char);
};

// Autor: 211068790

/// Padrão para representação de código
/// Regras de formato:
/// O código fornecido é válido se obedecer o formato LLDD,
/// em que L é letra maiúscula (A - Z) e D é dígito (0 – 9).

class Codigo {
 private:
    string codigo;
    void validar(string);

 public:
///
/// Retorna o valor da variável codigo
///
/// @return código
///
    string getValor() const;
///
/// Armazena código caso seja válido
/// Lança exceção caso código informado seja inválido
///
/// @param codigo
/// @throw invalid_argument
///
    void setValor(string);
};

inline string Codigo::getValor() const {
  return codigo;
}

/// Padrão para representação de coluna
/// Regras de formato:
/// O código fornecido é válido se for um dos seguintes nomes:
/// "SOLICITADO", "EM EXECUCAO" ou "CONCLUIDO".

class Coluna {
 private:
    string coluna;
    void validar(string);

 public:
///
/// Retorna código referente à variável coluna
///
/// @return coluna
///
    string getValor() const;
///
/// Armazena código caso seja válido
/// Lança exceção caso código informado seja inválido
///
/// @param coluna
/// @throw invalid_argument
///
    void setValor(string);
};
inline string Coluna::getValor() const {
  return coluna;
}

/// Padrão para representação de limite
/// Regras de formato:
/// O código fornecido é válido se representar um dos seguintes valores:
/// 5, 10, 15 ou 20.


class Limite {
 private:
    static const int LIMITE = 5;
    int limite;
    void validar(int);

 public:
/// Retorna o valor da variável limite
///
/// @return limite
///
    int getValor() const;
///
/// Armazena código caso seja válido
/// Lança exceção caso código informado seja inválido
///
/// @param limite
/// @throw invalid_argument
///
    void setValor(int);
};

inline int Limite::getValor() const {
  return limite;
}


class Email {
    private:
        string email;
        void validar (string);
        static const int LIMITEMIN = 2;
        static const int LIMITEMAXNOME = 10;
        static const int LIMITEMAXDOM = 20;
    public:
        void setEmail(string);
        string getEmail();
};

inline string Email::getEmail(){
    return email;
}

#endif // DOMINIOS_H_INCLUDED
