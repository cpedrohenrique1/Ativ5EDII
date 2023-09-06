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
//    virtual int metodoOrdenacao
    // template <typename T>
    // void selectionSort(T compare){
    //     if (!professorSelectionSort || tamanho_vetor == 0)
    //     {
    //         throw QString("Array nao alocado");
    //     }
    //     for (int indice = 0; indice < tamanho_vetor - 1; ++indice)
    //     {
    //         int min_idc = indice;
    //         for (int i = indice + 1; i < tamanho_vetor; ++i)
    //         {
    //             if (compare(professorSelectionSort[i], professorSelectionSort[min_idc]))
    //             {
    //                 min_idc = i;
    //             }
    //         }
    //         Professor temp = professorSelectionSort[indice];
    //         professorSelectionSort[indice] = professorSelectionSort[min_idc];
    //         professorSelectionSort[min_idc] = temp;
    //     }
    // }
    Professor *getProfessorSelectionSort() const;
    int getTamanhoVetor() const;
};

#endif // CONJUNTO_H
