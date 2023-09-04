#ifndef CONJUNTO_H
#define CONJUNTO_H

#include "professor.h"

class Conjunto
{
private:
    Professor *professorSelectionSort;
    int tamanho_vetor;
public:
    Conjunto(Professor *arrayProfessor, int &tamanho_vetor);
    ~Conjunto();
    void selectionSort();
    Professor *getProfessorSelectionSort() const;
    int getTamanhoVetor() const;
};

#endif // CONJUNTO_H
