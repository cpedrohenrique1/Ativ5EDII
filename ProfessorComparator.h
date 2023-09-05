#ifndef PROFESSORCOMPARATOR_H
#define PROFESSORCOMPARATOR_H
#include "professor.h"

class ProfessorComparator
{
public:
    virtual bool operator()(Professor& p1, Professor& p2) = 0;
};

#endif // PROFESSORCOMPARATOR_H
