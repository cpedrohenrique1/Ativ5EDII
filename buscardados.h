#ifndef BUSCARDADOS_H
#define BUSCARDADOS_H

#include "QTableWidget"

class BuscarDados
{
public:
    BuscarDados(QTableWidget *parent, QString CurrentText);
    void operator()(QTableWidget *parent, QString CurrentText);
};

#endif // BUSCARDADOS_H
