#include "dominios.hpp"
#include <vector>

//////M�todos da classe Senha///////

void Senha::validar(string senha) {
    char minusculas[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char maiusculas[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char numeros[10]={'0','1','2','3','4','5','6','7','8','9'};
    char especiais[5]={'.',',',';','?','!'};
    bool temMinuscula = false;
    bool temMaiuscula = false;
    bool temNumero = false;
    bool temEspecial = false;

    if (senha.length()!=5) {
        throw invalid_argument("Valor invalido");
    }
    // Verifica��o de Caracteres Repetidos.
    int CurrPos = 0;
    int incremento;
    int PosComparada;
    while(CurrPos<4) {
        incremento = 1;
        PosComparada = CurrPos + incremento;
        while (PosComparada<=4) {
            if(senha[CurrPos] == senha[PosComparada]){
                throw invalid_argument("Valor invalido");
            }
            incremento++;
        }
        CurrPos++;
    }

    for(char c1 : senha) {
        for (char c2 : minusculas) {
            if (c1 == c2) {
                temMinuscula = true;
                break;
            }
        }
        for (char c2 : maiusculas) {
            if (c1 == c2) {
                temMaiuscula = true;
                break;
            }
        }
        for (char c2 : numeros) {
            if (c1 == c2) {
                temNumero = true;
            break;
            }
        }
        for (char c2 : minusculas) {
            if (c1 == c2) {
                temEspecial = true;
                break;
            }
        }
    }

    if (!(temMaiuscula && temMinuscula && temNumero && temEspecial)) {
        throw invalid_argument("Valor invalido");
    }
}

void Senha::setValor(string senha) {
    validar(senha);
    this ->senha = senha;
}



// M�todos da Classe ChecaCaractere //


int ChecaCaractere::caractere_ascii = 0;
char ChecaCaractere::sinais_de_pontuacao[5] = {';', ',', '.', '!', '?'};

bool ChecaCaractere::e_maiuscula_sem_acento(char caractere) {
    caractere_ascii = int(caractere);
    if (caractere_ascii < 65 || caractere_ascii > 90) {
        return false;
    }
    return true;
}

bool ChecaCaractere::e_minuscula_sem_acento(char caractere) {
    caractere_ascii = int(caractere);
    if (caractere_ascii < 97 || caractere_ascii > 122){
        return false;
    }
    return true;
}

bool ChecaCaractere::e_pontuacao(char caractere) {
    for (char sinal : sinais_de_pontuacao) {
        if (caractere == sinal) {
            return true;
        }
    }
    return false;
}

bool ChecaCaractere::e_digito(char caractere) {
    caractere_ascii = int(caractere);
    if (caractere_ascii < 48 || caractere_ascii > 57) {
        return false;
    }
        return true;
}

bool ChecaCaractere::e_embranco(char caractere) {
    if (caractere == ' ') {
        return true;
    }
    return false;
}

///////////  M�todos da Classe Texto  ///////////

void Texto::validar(string texto) {
    if (texto.length() < 5 || texto.length() > 30) {
        throw invalid_argument("Tamanho inv�lido");
    }

    if (!(ChecaCaractere::e_maiuscula_sem_acento(texto[0]))) {
        throw invalid_argument("Primeira Letra Min�scula");
    }

    for (int currPos = 1; currPos < texto.length(); currPos++) {
        char Char_Atual = texto[currPos];
        bool FormatoValido = false;

        if (ChecaCaractere::e_maiuscula_sem_acento(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_minuscula_sem_acento(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_digito(Char_Atual)) {
            FormatoValido = true;

        } else if (ChecaCaractere::e_pontuacao(Char_Atual)) {
            FormatoValido = true;
            // Verifica��o de espa�os em sequ�ncia.
            if (currPos < texto.length() - 1) {  // N�o faz sentido checar o �ltimo caractere.
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_pontuacao(ProximoCaractere)) {
                    throw invalid_argument("Pontua��o em Seguida");
                }
                if (Char_Atual != ',' && Char_Atual != ';' && !ChecaCaractere::e_maiuscula_sem_acento(ProximoCaractere)) {
                    throw invalid_argument("Combina��o inv�lida");
                }
            }

        } else if (ChecaCaractere::e_embranco(Char_Atual)) {
            FormatoValido = true;
            if (currPos < texto.length() - 1) {
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_embranco(ProximoCaractere)) {
                    throw invalid_argument("Espa�os Em sequ�ncia");
                }
            }
        }
        if (!FormatoValido) {
            throw invalid_argument("Formato de Caractere inv�lido");
        }
    }
}

void Texto::setTexto(string texto) {
    validar(texto);
    this->texto = texto;
}


