#ifndef BUSCARDADOS_H
#define BUSCARDADOS_H

#include "QTableWidget"
#include "professor.h"
#include "conjunto.h"

class BuscarDados
{
public:
    BuscarDados(QTableWidget *parent, QString CurrentText, Professor *arrayProfessor, int &tamanho_vetor);
    template <typename T>
    Professor *buscaSequencial(Conjunto &conj, QString entrada, T compare);
    template <typename T>
    Professor *buscaBinaria(Conjunto &conj, QString entrada, T compare);
};

#endif // BUSCARDADOS_H
