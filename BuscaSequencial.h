#ifndef BUSCASEQUENCIAL_H
#define BUSCASEQUENCIAL_H
#include "professor.h"
#include "conjunto.h"

class BuscaSequencial{
private:
    Conjunto conj;
public:
    BuscaSequencial(Conjunto& conj){
        this->conj = conj;
    }
    virtual int metodoComparacao(const Professor p, QString entrada) = 0;
};


#endif // BUSCASEQUENCIAL_H
