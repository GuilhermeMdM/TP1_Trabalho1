#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED


#include <iostream>
#include <stdexcept>

using namespace std;

class Senha {
    private:
        string senha;
        void validar(string);
    public:
        void setValor(string);
        string getValor();
};

class Texto {
    private:
        string texto;
        void validar (string);
    public:
        void setTexto(string);
        string getTexto();
};


class ChecaCaractere{
    public:

        static int caractere_ascii;
        static char sinais_de_pontuacao[5];

        static bool e_maiuscula_sem_acento(char);

        static bool e_minuscula_sem_acento(char);

        static bool e_pontuacao(char);

        static bool e_digito (char);

        static bool e_embranco (char);
};


#endif // DOMINIOS_H_INCLUDED
