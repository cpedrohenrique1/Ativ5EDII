#ifndef PROFESSORCOMPARATORTIPOCONTRATONOME_H
#define PROFESSORCOMPARATORTIPOCONTRATONOME_H

#include "ProfessorComparator.h"

class ProfessorComparatorTipoContratoNome : public ProfessorComparator
{
public:
    bool operator()(Professor& p1, Professor& p2) override {
        if (p1.getTipo_de_contrato() < p2.getTipo_de_contrato()){
            return true;
        }
        if (p1.getTipo_de_contrato() == p2.getTipo_de_contrato()){
            return (bool)(p1.getNome() < p2.getNome());
        }
        return false;
    }
};

#endif // PROFESSORCOMPARATORTIPOCONTRATONOME_H
