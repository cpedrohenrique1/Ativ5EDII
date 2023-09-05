#ifndef PROFESSORCOMPARATORDEPARTAMENTO_H
#define PROFESSORCOMPARATORDEPARTAMENTO_H

#include "ProfessorComparator.h"

class ProfessorComparatorDepartamentoTitulacaoNome : public ProfessorComparator
{
public:
    bool operator()(Professor& p1, Professor& p2) override {
        if (p1.getDepartamento() < p2.getDepartamento()){
            return true;
        }
        if (p1.getDepartamento() == p2.getDepartamento()){
            if (p1.getTitulacao() < p2.getTitulacao()){
                return true;
            }
            if (p1.getTitulacao() == p2.getTitulacao()){
                return (bool)(p1.getNome() < p2.getNome());
            }
        }
        return false;
    }
};

#endif // PROFESSORCOMPARATORDEPARTAMENTO_H
