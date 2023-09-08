#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "professor.h"
#include "QTableWidget"

class Ordenacao
{
public:
    Ordenacao(QTableWidget *parent, QString ordem_ordenacao, Professor *array_professor, int& tamanho_vetor);
};

#endif // ORDENACAO_H
