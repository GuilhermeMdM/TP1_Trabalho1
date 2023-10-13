#include "dominios.hpp"
#include <vector>

//////Métodos da classe Senha///////

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
    // Verificação de Caracteres Repetidos.
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



// Métodos da Classe ChecaCaractere //


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

///////////  Métodos da Classe Texto  ///////////

void Texto::validar(string texto) {
    if (texto.length() < 5 || texto.length() > 30) {
        throw invalid_argument("Tamanho inválido");
    }

    if (!(ChecaCaractere::e_maiuscula_sem_acento(texto[0]))) {
        throw invalid_argument("Primeira Letra Minúscula");
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
            // Verificação de espaços em sequência.
            if (currPos < texto.length() - 1) {  // Não faz sentido checar o último caractere.
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_pontuacao(ProximoCaractere)) {
                    throw invalid_argument("Pontuação em Seguida");
                }
                if (Char_Atual != ',' && Char_Atual != ';' && !ChecaCaractere::e_maiuscula_sem_acento(ProximoCaractere)) {
                    throw invalid_argument("Combinação inválida");
                }
            }

        } else if (ChecaCaractere::e_embranco(Char_Atual)) {
            FormatoValido = true;
            if (currPos < texto.length() - 1) {
                char ProximoCaractere = texto[currPos + 1];
                if (ChecaCaractere::e_embranco(ProximoCaractere)) {
                    throw invalid_argument("Espaços Em sequência");
                }
            }
        }
        if (!FormatoValido) {
            throw invalid_argument("Formato de Caractere inválido");
        }
    }
}

void Texto::setTexto(string texto) {
    validar(texto);
    this->texto = texto;
}

//////Métodos da classe Limite///////

void Limite::validar(int limite) {
    if (limite != LIMITE && limite != 2*LIMITE && limite != 3*LIMITE
                         && limite != 4*LIMITE) {
        throw invalid_argument("Limite inválido.");
    }
}

void Limite::setValor(int limite) {
    validar(limite);
    this->limite = limite;
}

//////Métodos da classe Coluna///////

void Coluna::validar(string coluna) {
    if (coluna != "SOLICITADO" && coluna != "EM EXECUCAO" &&
                                  coluna != "CONCLUIDO") {
        throw invalid_argument("Coluna inválida.");
    }
}

void Coluna::setValor(string coluna) {
    validar(coluna);
    this->coluna = coluna;
}

//////Métodos da classe Codigo///////

void Codigo::validar(string codigo) {
    if (codigo.length() != 4) {
        throw invalid_argument("Tamanho de código inválido.");
    } else if (!(ChecaCaractere::e_maiuscula_sem_acento(codigo[0])) ||
               !(ChecaCaractere::e_maiuscula_sem_acento(codigo[1])) ||
               !(ChecaCaractere::e_digito(codigo[2])) ||
               !(ChecaCaractere::e_digito(codigo[3]))) {
        throw invalid_argument("Formato de código inválido.");
    }
}

void Codigo::setValor(string codigo) {
    validar(codigo);
    this->codigo = codigo;
}


