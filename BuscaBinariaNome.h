#ifndef BUSCABINARIANOME_H
#define BUSCABINARIANOME_H

#include "busca.h"

class BuscaBinariaNome : public Busca {
public:
    int metodoOrdenacao(const Professor p, QString entrada) override{
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

#endif // BUSCABINARIANOME_H
