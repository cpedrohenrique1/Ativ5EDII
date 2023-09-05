#ifndef PROFESSORCOMPARATORMATRICULA_H
#define PROFESSORCOMPARATORMATRICULA_H
#include "ProfessorComparator.h"

class ProfessorComparatorMatricula : public ProfessorComparator
{
public:
    bool operator()(Professor& p1, Professor& p2) override {
        return p1.getMatricula() < p2.getMatricula();
    }
};

#endif // PROFESSORCOMPARATORMATRICULA_H
