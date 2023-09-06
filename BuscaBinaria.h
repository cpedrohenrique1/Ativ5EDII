#ifndef BUSCABINARIA_H
#define BUSCABINARIA_H

#include "professor.h"
#include "conjunto.h"

class BuscaBinaria
{
public:
    virtual int metodoOrdenacao(Professor p1, QString entrada) = 0;
    
    Professor *ElementoBuscado(Conjunto &conj, QString entrada)
    {
        if (!conj.getProfessorSelectionSort() || conj.getTamanhoVetor() == 0)
        {
            return 0;
        }
        int inicio = 0;
        int fim = conj.getTamanhoVetor() - 1;
        while (inicio <= fim)
        {
            int meio = (inicio + fim) / 2;
            if (metodoOrdenacao(conj.getProfessorSelectionSort()[meio], entrada) == 0)
            {
                Professor *elemento = new Professor;
                *elemento = conj.getProfessorSelectionSort()[meio];
                return elemento;
            }
            if (metodoOrdenacao(conj.getProfessorSelectionSort()[meio], entrada) < 0)
            {
                inicio = meio + 1;
            }
            else
            {
                fim = meio - 1;
            }
        }
        return 0;
    }
};

#endif // BUSCABINARIA_H
