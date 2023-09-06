#ifndef BUSCASEQUENCIAL_H
#define BUSCASEQUENCIAL_H
#include "professor.h"

class BuscaSequencial{
public:
    virtual int metodoComparacao(const Professor p, QString entrada) = 0;
};


#endif // BUSCASEQUENCIAL_H
