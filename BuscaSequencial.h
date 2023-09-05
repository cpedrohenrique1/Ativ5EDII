#ifndef BUSCASEQUENCIAL_H
#define BUSCASEQUENCIAL_H
#include "professor.h"

class BuscaSequencial{
public:
    virtual bool igual(const Professor p, QString entrada) = 0;
    virtual bool maiorque(const Professor p, QString entrada) = 0;
};


#endif // BUSCASEQUENCIAL_H
