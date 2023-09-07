#ifndef ORDENARCONJUNTONOME_H_
#define ORDENARCONJUNTONOME_H_

#include "conjunto.h"

class OrdenarConjuntoNome : public Conjunto{
public:
    bool metodoOrdenacao(Professor p1, Professor p2) override{
        return p1.getNome() < p2.getNome();
    }
};

#endif