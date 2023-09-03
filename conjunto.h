#ifndef CONJUNTO_H
#define CONJUNTO_H

#include "professor.h"

class Conjunto
{
private:
    Professor *professorSelectionSort;
public:
    Conjunto(Professor *arrayProfessor, int tamanho_vetor);
    void selectionSort();
};

#endif // CONJUNTO_H
