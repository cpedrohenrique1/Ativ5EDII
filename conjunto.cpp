#include "conjunto.h"

Professor *Conjunto::SelectionSort(Professor *array, int &tamanho_vetor)
{
    if (!array || tamanho_vetor == 0)
    {
        throw QString("Array de professores nao criado");
    }

    try{
        Professor *professorSelectionSort = new Professor[tamanho_vetor];
        for (int i = 0; i < tamanho_vetor; ++i)
        {
            professorSelectionSort[i] = array[i];
        }

        for (int indice = 0; indice < tamanho_vetor - 1; ++indice){
            int min_idc = indice;
            for (int i = indice + 1; i < tamanho_vetor; ++i){
                if (metodoOrdenacao(professorSelectionSort[i], professorSelectionSort[min_idc])){
                    min_idc = i;
                }
            }
            Professor temp = professorSelectionSort[indice];
            professorSelectionSort[indice] = professorSelectionSort[min_idc];
            professorSelectionSort[min_idc] = temp;
        }
        return professorSelectionSort;
    }catch(std::bad_alloc &e){
        throw QString("Nao foi possivel alocar memoria para organizar o array de professores");
    }
    return 0;
}
