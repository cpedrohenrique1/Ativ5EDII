#ifndef BUSCARDADOS_H
#define BUSCARDADOS_H

#include "QTableWidget"
#include "professor.h"
#include "conjunto.h"

class BuscarDados
{
public:
    BuscarDados(QTableWidget *parent, QString CurrentText, Professor *arrayProfessor, int &tamanho_vetor);
    Professor *buscaSequencialNome(Conjunto &conj, QString nome);
};

#endif // BUSCARDADOS_H
