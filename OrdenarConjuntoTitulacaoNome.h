#ifndef ORDENARCONJUNTOTITULACAONOME_H_
#define ORDENARCONJUNTOTITULACAONOME_H_

#include "conjunto.h"

class OrdenarConjuntoTitulacaoNome : public Conjunto{
public:
    bool metodoOrdenacao(Professor* p1, Professor* p2) override{
        if (p1->getTitulacao() < p2->getTitulacao()){
            return true;
        }
        if (p1->getTitulacao() == p2->getTitulacao()){
            return (bool)(p1->getNome() < p2->getNome());
        }
        return false;
    }
};

#endif