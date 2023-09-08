#ifndef ORDENARCONJUNTODEPARTAMENTONOME_H_
#define ORDENARCONJUNTODEPARTAMENTONOME_H_

#include "conjunto.h"

class OrdenarConjuntoDepartamentoNome : public Conjunto{
public:
    bool metodoOrdenacao(Professor &p1, Professor &p2) override{
        if (p1.getDepartamento() < p2.getDepartamento()){
            return true;
        }
        if (p1.getDepartamento() == p2.getDepartamento()){
            return (bool)(p1.getNome() < p2.getNome());
        }
        return false;
    }
};

#endif