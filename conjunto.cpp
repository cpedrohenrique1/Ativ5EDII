#include "conjunto.h"

Conjunto::Conjunto(Professor *arrayProfessor, int tamanho_vetor):
    professorSelectionSort(0),
    tamanho_vetor(tamanho_vetor)
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

void Conjunto::selectionSort()
{
    // if (!professorSelectionSort){
    //     throw QString("Array nao criado");
    // }
    // for (int indice = 0; indice < tamanho_vetor - 1; indice++){
    //     int min_idc = indice;
    //     for (int i = indice + 1; i < tamanho_vetor; i++){
    //         if (professorSelectionSort[i] < professorSelectionSort[min_idc]){
    //             min_idc = i;
    //         }
    //     }
    //     int temp = professorSelectionSort[indice];
    //     professorSelectionSort[indice] = professorSelectionSort[min_idc];
    //     professorSelectionSort[min_idc] = temp;
    // }
}
