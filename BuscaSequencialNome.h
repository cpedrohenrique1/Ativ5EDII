#ifndef BUSCASEQUENCIALNOME_H
#define BUSCASEQUENCIALNOME_H

#include "BuscaSequencial.h"

class BuscaSequencialNome : public BuscaSequencial{
public:
    int metodoComparacao(const Professor p, QString entrada) override {
        if (p.getNome() == entrada){
            return 0;
        }
        else if(p.getNome() > entrada){
            return 1;
        }else{
            return -1;
        }
    }
};

#endif // BUSCASEQUENCIALNOME_H
