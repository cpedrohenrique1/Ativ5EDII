#ifndef BUSCA_H
#define BUSCA_H

#include "professor.h"

class Busca
{
public:
    virtual int metodoOrdenacao(const Professor& p, QString& entrada) = 0;
    int BuscaSequencial(Professor *array, int& tamanho_vetor, QString& entrada);
    int BuscaBinaria(Professor *array, int& tamanho_vetor, QString& entrada);
};

#endif // BUSCA_H
