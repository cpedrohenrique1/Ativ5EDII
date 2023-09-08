#include "busca.h"

int Busca::BuscaSequencial(Professor *array, int& tamanho_vetor, QString& entrada){
    if (!array || tamanho_vetor == 0){
        throw QString("Array nao criado");
    }
    for (int i = 0; i < tamanho_vetor; i++){
        if (metodoOrdenacao(array[i], entrada) == 0){
            return i;
        }
        if (metodoOrdenacao(array[i], entrada) > 0){
            return -1;
        }
    }
    return -1;
}

int Busca::BuscaBinaria(Professor *array, int& tamanho_vetor, QString& entrada){
    if (!array || tamanho_vetor == 0){
        throw QString("Array nao criado");
    }
    int inicio = 0;
    int fim = tamanho_vetor - 1;
    while (inicio <= fim){
        int meio = (inicio + fim)/2;
        if (metodoOrdenacao(array[meio], entrada) == 0){
            return meio;
        }
        if (metodoOrdenacao(array[meio], entrada) < 0){
            inicio = meio + 1;
        }else{
            fim = meio - 1;
        }
    }
    return -1;
}
