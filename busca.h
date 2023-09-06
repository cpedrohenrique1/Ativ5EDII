#ifndef BUSCA_H
#define BUSCA_H

#include "professor.h"
#include "conjunto.h"

class Busca
{
private:
    Conjunto *conjunto;
public:
    Busca(Conjunto &conj){
        conjunto = &conj;
    }
    ~Busca(){
        delete conjunto;
    }
    Conjunto *getConjunto();
    virtual int metodoOrdenacao(const Professor p, QString entrada) = 0;
    int BuscaSequencial(QString entrada);
    int BuscaBinaria(QString entrada);
};

#endif // BUSCA_H
