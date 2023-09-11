#ifndef BUSCANOME_H
#define BUSCANOME_H

#include "busca.h"

class BuscaNome : public Busca {
public:
    int metodoOrdenacao(const Professor& p, QString& entrada) override{
        if (p.getNome() > entrada){
            return 1;
        }
        if(p.getNome() < entrada){
            return -1;
        }
        return 0;
    }
};

#endif // BUSCANOME_H
