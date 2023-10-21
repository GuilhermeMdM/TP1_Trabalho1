#include "testes.hpp"

///// Métodos de TUTexto /////

const string TUTexto::VALOR_VALIDO   = "Teste valido 1!Ok ";
const string TUTexto::VALOR_INVALIDO = "diosanio9  jdsidadw!*";

void TUTexto::setUp() {
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso() {
    try {
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// Métodos de TUEmail /////

const string TUEmail::VALOR_VALIDO   = "trabalho1@dominioemail.com";
const string TUEmail::VALOR_INVALIDO = "invalido.@email.com";

void TUEmail::setUp() {
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso() {
    try {
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// Métodos de TUSenha /////

const string TUSenha::VALOR_VALIDO   = "Aa1.p";
const string TUSenha::VALOR_INVALIDO = "B3a1j";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// Métodos de TULimite /////

const string TULimite::VALOR_VALIDO   = "5";
const string TULimite::VALOR_INVALIDO = "6";

void TULimite::setUp() {
    limite = new Limite();
    estado = SUCESSO;
}

void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso() {
    try {
        limite->setValor(VALOR_VALIDO);
        if (limite->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TULimite::testarCenarioFalha(){
    try{
        limite->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (limite->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TULimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// Métodos de TUColuna /////

const string TUColuna::VALOR_VALIDO   = "SOLICITADO";
const string TUColuna::VALOR_INVALIDO = "EMEXECUCAO";

void TUColuna::setUp() {
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso() {
    try {
        coluna->setValor(VALOR_VALIDO);
        if (coluna->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUColuna::testarCenarioFalha(){
    try{
        coluna->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (coluna->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// Métodos de TUCodigo /////

const string TUCodigo::VALOR_VALIDO   = "AB01";
const string TUCodigo::VALOR_INVALIDO = "AAA1";

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///// ENTIDADES /////

///// Metodos de TUQuadro /////

const string TUQuadro::VALOR_VALIDO_CODIGO = "AB01";
const string TUQuadro::VALOR_VALIDO_NOME = "Pedro";
const string TUQuadro::VALOR_VALIDO_DESCRICAO = "Teste de descricao do kanban";
const string TUQuadro::VALOR_VALIDO_LIMITE = "5";

void TUQuadro::setUp(){
    quadro = new Quadro();
    estado = SUCESSO;
}

void TUQuadro::tearDown(){
    delete quadro;
}

void TUQuadro::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    quadro->setCodigo(codigo);
    if(quadro->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Texto nome;
    nome.setValor(VALOR_VALIDO_NOME);
    quadro->setNome(nome);
    if(quadro->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Texto descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    quadro->setDescricao(descricao);
    if(quadro->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Limite limite;
    limite.setValor(VALOR_VALIDO_LIMITE);
    quadro->setLimite(limite);
    if(quadro->getLimite().getValor() != VALOR_VALIDO_LIMITE)
        estado = FALHA;
}

int TUQuadro::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

///// Metodos de TUCartao /////

const string TUCartao::VALOR_VALIDO_CODIGO = "LV99";
const string TUCartao::VALOR_VALIDO_NOME = "Mariana";
const string TUCartao::VALOR_VALIDO_DESCRICAO = "Execucao de metodos";
const string TUCartao::VALOR_VALIDO_COLUNA = "EM EXECUCAO";

void TUCartao::setUp(){
    cartao = new Cartao();
    estado = SUCESSO;
}

void TUCartao::tearDown(){
    delete cartao;
}

void TUCartao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    cartao->setCodigo(codigo);
    if(cartao->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Texto nome;
    nome.setValor(VALOR_VALIDO_NOME);
    cartao->setNome(nome);
    if(cartao->getNome().getValor() != VALOR_VALIDO_NOME)
        estado = FALHA;

    Texto descricao;
    descricao.setValor(VALOR_VALIDO_DESCRICAO);
    cartao->setDescricao(descricao);
    if(cartao->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO)
        estado = FALHA;

    Coluna coluna;
    coluna.setValor(VALOR_VALIDO_COLUNA);
    cartao->setColuna(coluna);
    if(cartao->getColuna().getValor() != VALOR_VALIDO_COLUNA)
        estado = FALHA;
}

int TUCartao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
