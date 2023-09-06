#ifndef BUSCABINARIAMATRICULA_H
#define BUSCABINARIAMATRICULA_H

#include "busca.h"

class BuscaBinariaMatricula : public Busca {
    public:
        int metodoOrdenacao(const Professor p, QString entrada) override{
            getConjunto()->selectionSort()
            if (p.getMatricula() > entrada.toInt()){
                return 1;
            }
            else if(p.getMatricula() < entrada.toInt()){
                return -1;
            }else{
                return 0;
            }
        }
};

#endif // BUSCABINARIAMATRICULA_H
