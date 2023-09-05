#ifndef PROFESSORCOMPARATORNOME_H
#define PROFESSORCOMPARATORNOME_H
#include "ProfessorComparator.h"

class ProfessorComparatorNome : public ProfessorComparator
{
    public:
        bool operator()(Professor &p1, Professor &p2) override {
            return p1.getNome() < p2.getNome();
        }
};

#endif // PROFESSORCOMPARATORNOME_H
