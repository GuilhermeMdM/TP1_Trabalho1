#include "dominios.hpp"


void Senha::validar(string senha){
char minusculas[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char maiusculas[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char numeros[10]={'0','1','2','3','4','5','6','7','8','9'};
char especiais[5]={'.',',',';','?','!'};
bool temMinuscula = false;
bool temMaiuscula = false;
bool temNumero = false;
bool temEspecial = false;
int j = 0;
int i = 1;
if (senha.length()!=5){
throw invalid_argument("Valor invalido");
};
while(j<4){
    i = 1;
        while (i+j<=4){
            if(senha[j] == senha[j+i]){
                throw invalid_argument("Valor invalido");
            };
            i++;
    j++;
        };
};

for(char c1 : senha){
    for (char c2 : minusculas){
        if (c1 == c2){
            temMinuscula = true;
            break;
        };
    };
    for (char c2 : maiusculas){
        if (c1 == c2){
            temMaiuscula = true;
            break;
        };
    };
    for (char c2 : numeros){
        if (c1 == c2){
            temNumero = true;
            break;
        };
    };
    for (char c2 : minusculas){
        if (c1 == c2){
            temEspecial = true;
            break;
        };
    };
};
if (!(temMaiuscula && temMinuscula && temNumero && temEspecial)){
    throw invalid_argument("Valor invalido");
};

};

void Senha::setValor(string senha){
    validar(senha);
    this ->senha = senha;
};

inline string Senha::getValor(){
    return senha;
};
