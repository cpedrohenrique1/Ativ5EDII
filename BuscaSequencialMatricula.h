#ifndef BUSCASEQUENCIALMATRICULA_H
#define BUSCASEQUENCIALMATRICULA_H

#include "BuscaSequencial.h"

class BuscaSequencialMatricula : public BuscaSequencial{
public:
    bool igual(const Professor p, QString entrada) override{
        return p.getMatricula() == entrada;
    }
    bool maiorque(const Professor p, QString entrada) override{
        return p.getMatricula() > entrada;
    }
};

#endif // BUSCASEQUENCIALMATRICULA_H
