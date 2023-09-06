#ifndef BUSCA_H
#define BUSCA_H

#include "professor.h"
#include "conjunto.h"

class Busca
{
private:
    Professor *array;
public:
    Busca(Professor *arrayProfessor){
        array = arrayProfessor;
    }
    ~Busca(){
        delete array;
    }
    virtual int metodoOrdenacao(const Professor p, QString entrada) = 0;
    int BuscaSequencial(QString entrada);
    int BuscaBinaria(QString entrada);
};

#endif // BUSCA_H
