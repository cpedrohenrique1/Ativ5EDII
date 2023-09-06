#ifndef BUSCASEQUENCIALMATRICULA_H
#define BUSCASEQUENCIALMATRICULA_H

#include "BuscaSequencial.h"

class BuscaSequencialMatricula : public BuscaSequencial{
public:
    int metodoComparacao(const Professor p, QString entrada) override {
        if (p.getMatricula() == entrada.toInt()){
            return 0;
        }
        else if(p.getMatricula() > entrada.toInt()){
            return 1;
        }else{
            return -1;
        }
    }
};

#endif // BUSCASEQUENCIALMATRICULA_H
