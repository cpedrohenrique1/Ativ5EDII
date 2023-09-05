#ifndef BUSCASEQUENCIALNOME_H
#define BUSCASEQUENCIALNOME_H

#include "BuscaSequencial.h"

class BuscaSequencialNome : public BuscaSequencial{
public:
    bool igual(const Professor p, QString entrada) override{
        return p.getNome() == entrada;
    }
    bool maiorque(const Professor p, QString entrada) override{
        return p.getNome() > entrada;
    }
};

#endif // BUSCASEQUENCIALNOME_H
