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
    void selectionSort(bool (*compare)(Professor p1, Professor p2));
    bool compareMatricula(Professor p1, Professor p2);
    bool compareNome(Professor p1, Professor p2);
    bool compareDepartamento(Professor p1, Professor p2);
    bool compareTitulacao(Professor p1, Professor p2);
    bool compareTipoContrato(Professor p1, Professor p2);
    Professor *getProfessorSelectionSort() const;
    int getTamanhoVetor() const;
};

#endif // CONJUNTO_H
