#ifndef PROFESSORCOMPARATORTITULACAONOME_H
#define PROFESSORCOMPARATORTITULACAONOME_H

#include "ProfessorComparator.h"

class ProfessorComparatorTitulacaoNome : public ProfessorComparator
{
public:
    bool operator()(Professor& p1, Professor& p2) override {
        if (p1.getTitulacao() < p2.getTitulacao()){
            return true;
        }
        if (p1.getTitulacao() == p2.getTitulacao()){
            return (bool)(p1.getNome() < p2.getNome());
        }
        return false;
    }
};

#endif // PROFESSORCOMPARATORTITULACAONOME_H
