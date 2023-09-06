#ifndef PROFESSORCOMPARATORDEPARTAMENTONOME_H
#define PROFESSORCOMPARATORDEPARTAMENTONOME_H

#include "ProfessorComparator.h"

class ProfessorComparatorDepartamentoNome : public ProfessorComparator
{
public:
    bool operator()(Professor& p1, Professor& p2) override {
        if (p1.getDepartamento() < p2.getDepartamento()){
            return true;
        }
        if (p1.getDepartamento() == p2.getDepartamento()){
            return (bool)(p1.getNome() < p2.getNome());
        }
        return false;
    }
};

#endif // PROFESSORCOMPARATORDEPARTAMENTO_H
