#ifndef ORDENARCONJUNTODEPARTAMENTOTIPOCONTRATONOME_H_
#define ORDENARCONJUNTODEPARTAMENTOTIPOCONTRATONOME_H_

#include "conjunto.h"

class OrdenarConjuntoDepartamentoTipoContratoNome: public Conjunto{
public:
    bool metodoOrdenacao(Professor p1, Professor p2) override{
        if (p1.getDepartamento() < p2.getDepartamento()){
            return true;
        }
        if (p1.getDepartamento() == p2.getDepartamento()){
            if (p1.getTipo_de_contrato() < p2.getTipo_de_contrato()){
                return true;
            }
            if (p1.getTipo_de_contrato() == p2.getTipo_de_contrato()){
                return (bool)(p1.getNome() < p2.getNome());
            }
        }
        return false;
    }
};

#endif