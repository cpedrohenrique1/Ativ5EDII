#ifndef BUSCABINARIA_H
#define BUSCABINARIA_H

#include "professor.h"
#include "conjunto.h"

class BuscaBinaria
{
    private:
        Conjunto *conj;
public:
    BuscaBinaria(Professor *vetor, int tamanho_vetor):
    {
        if (!vetor || tamanho_vetor == 0){
            throw QString("Vetor de professor nao criado");
        }
        try
        {
            conj = new Conjunto(vetor, tamanho_vetor);
        }
        catch(std::bad_alloc& e)
        {
            throw QString("Nao foi possivel alocar memoria para buscar");
        }
    }
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
