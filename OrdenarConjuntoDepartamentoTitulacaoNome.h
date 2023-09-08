#ifndef ORDENARCONJUNTODEPARTAMENTOTITULACAONOME_H_
#define ORDENARCONJUNTODEPARTAMENTOTITULACAONOME_H_

#include "conjunto.h"

class OrdenarConjuntoDepartamentoTitulacaoNome : public Conjunto{
public:
    bool metodoOrdenacao(Professor *p1, Professor *p2) override{
        if (p1->getDepartamento() < p2->getDepartamento()){
            return true;
        }
        if (p1->getDepartamento() == p2->getDepartamento()){
            if (p1->getTitulacao() < p2->getTitulacao()){
                return true;
            }
            if (p1->getTitulacao() == p2->getTitulacao()){
                return (bool)(p1->getNome() < p2->getNome());
            }
        }
        return false;
    }
};

#endif