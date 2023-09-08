#ifndef CONJUNTO_H
#define CONJUNTO_H

#include "professor.h"

class Conjunto
{
public:
    virtual bool metodoOrdenacao(Professor *p1, Professor *p2) = 0;
    Professor *SelectionSort(Professor *array, int &tamanho_vetor);
};

#endif // CONJUNTO_H
