#include "conjunto.h"

Professor *Conjunto::getProfessorSelectionSort() const
{
    return professorSelectionSort;
}

int Conjunto::getTamanhoVetor() const
{
    return tamanho_vetor;
}

Conjunto::Conjunto(Professor *arrayProfessor, int &tamanho_vetor) : 
professorSelectionSort(0),
tamanho_vetor(tamanho_vetor)
{
    if (!arrayProfessor || tamanho_vetor == 0)
    {
        throw QString("Array não alocado");
    }

    try
    {
        professorSelectionSort = new Professor[tamanho_vetor];
        for (int i = 0; i < tamanho_vetor; ++i)
        {
            professorSelectionSort[i] = arrayProfessor[i];
        }
    }
    catch (std::bad_alloc &e)
    {
        throw QString("Erro ao alocar memoria");
    }
}


Conjunto::~Conjunto()
{
    if (professorSelectionSort)
    {
        delete[] professorSelectionSort;
    }
}