#ifndef BUSCANOME_H
#define BUSCANOME_H

#include "busca.h"

class BuscaNome : public Busca {
public:
    int metodoOrdenacao(const Professor p, QString entrada) override{
        // getConjunto().selectionSort;
        if (p.getNome() > entrada){
            return 1;
        }
        else if(p.getNome() < entrada){
            return -1;
        }else{
            return 0;
        }
    }
};

#endif // BUSCANOME_H
