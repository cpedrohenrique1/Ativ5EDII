#include "conjunto.h"

Conjunto::Conjunto(Professor *arrayProfessor, int tamanho_vetor):
    professorSelectionSort(0)
{
    if (!arrayProfessor || tamanho_vetor == 0){
        throw QString("Array não alocado");
    }
    
    try
    {
        professorSelectionSort = new Professor[tamanho_vetor];
        for (int i = 0; i < tamanho_vetor; ++i){
            professorSelectionSort[i] = arrayProfessor[i];
        }
    }
    catch(std::bad_alloc)
    {
        throw QString("Erro ao alocar memoria");
    }
}
