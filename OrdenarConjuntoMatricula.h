#ifndef ORDENARCONJUNTOMATRICULA_H_
#define ORDENARCONJUNTOMATRICULA_H_

#include "conjunto.h"

class OrdenarConjuntoMatricula : public Conjunto{
public:
    bool metodoOrdenacao(Professor p1, Professor p2) override{
        return p1.getMatricula() < p2.getMatricula();
    }
};

#endif