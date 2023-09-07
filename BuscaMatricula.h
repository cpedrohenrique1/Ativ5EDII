#ifndef BUSCAMATRICULA_H
#define BUSCAMATRICULA_H

#include "busca.h"

class BuscaMatricula : public Busca {
public:
    int metodoOrdenacao(const Professor p, QString entrada) override{
        if (p.getMatricula() > entrada.toInt()){
            return 1;
        }
        else if(p.getMatricula() < entrada.toInt()){
            return -1;
        }else{
            return 0;
        }
    }
};

#endif // BUSCAMATRICULA_H
