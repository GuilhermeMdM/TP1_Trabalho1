#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.hpp"
#include <string>

using namespace std;

class Quadro {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Limite limite;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo()const;
        void setNome(const Texto&);
        Texto getNome() const;
        void setDescricao(const Texto&);
        Texto getDescricao() const;
        void setLimite(const Limite&);
        Limite getLimite() const;
};

inline void Quadro::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Quadro::getCodigo() const {
    return codigo;
}

inline void Quadro::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Quadro::getNome() const {
    return nome;
}

inline void Quadro::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Quadro::getDescricao() const {
    return descricao;
}

inline void Quadro::setLimite(const Limite& limite){
    this->limite = limite;
}

inline Limite Quadro::getLimite() const {
    return limite;
}

class Cartao {
    private:
        Codigo codigo;
        Texto nome;
        Texto descricao;
        Coluna coluna;
    public:
        void setCodigo(const Codigo&);
        Codigo getCodigo()const;
        void setNome(const Texto&);
        Texto getNome() const;
        void setDescricao(const Texto&);
        Texto getDescricao() const;
        void setColuna(const Coluna&);
        Coluna getColuna() const;
};

inline void Cartao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline Codigo Cartao::getCodigo() const {
    return codigo;
}

inline void Cartao::setNome(const Texto& nome){
    this->nome = nome;
}

inline Texto Cartao::getNome() const {
    return nome;
}

inline void Cartao::setDescricao(const Texto& descricao){
    this->descricao = descricao;
}

inline Texto Cartao::getDescricao() const {
    return descricao;
}

inline void Cartao::setColuna(const Coluna& coluna){
    this->coluna = coluna;
}

inline Coluna Cartao::getColuna() const {
    return coluna;
}

#endif // ENTIDADES_H_INCLUDED
