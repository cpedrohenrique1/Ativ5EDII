#include "busca.h"

int Busca::BuscaSequencial(QString entrada){
    if (!conjunto->getProfessorSelectionSort() || conjunto->getTamanhoVetor() == 0 || !conjunto){
        throw QString("Array nao criado");
    }
    for (int i = 0; i < conjunto->getTamanhoVetor(); i++){
        if (metodoOrdenacao(conjunto->getProfessorSelectionSort()[i], entrada) == 0){
            return i;
        }
        if (metodoOrdenacao(conjunto->getProfessorSelectionSort()[i], entrada) > 0){
            return -1;
        }
    }
    return -1;
}

int Busca::BuscaBinaria(QString entrada){
    if (conjunto->getProfessorSelectionSort() || conjunto->getTamanhoVetor() == 0 || !conjunto){
        throw QString("Array nao criado");
    }
    int inicio = 0;
    int fim = conjunto->getTamanhoVetor() - 1;
    while (inicio <= fim){
        int meio = (inicio + fim)/2;
        if (metodoOrdenacao(conjunto->getProfessorSelectionSort()[meio], entrada) == 0){
            return meio;
        }
        if (metodoOrdenacao(conjunto->getProfessorSelectionSort()[meio], entrada) < 0){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return -1;
}
Conjunto *Busca::getConjunto(){
    return conjunto;
}
