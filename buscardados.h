#ifndef BUSCARDADOS_H
#define BUSCARDADOS_H

#include "QTableWidget"
#include "professor.h"

class BuscarDados
{
public:
    BuscarDados(QTableWidget *parent, QString current_text, QString entrada, Professor *arrayProfessor, int &tamanho_vetor);
};

#endif // BUSCARDADOS_H
