#ifndef BUSCABINARIAMATRICULA_H
#define BUSCABINARIAMATRICULA_H

#include "BuscaBinaria.h"

class BuscaBinariaMatricula : public BuscaBinaria {
    public:
        int metodoOrdenacao (Professor p, QString entrada) override {
            if (p.getMatricula() == entrada.toInt()){
                return 0;
            }
            else if (p.getMatricula() > entrada.toInt()){
                return 1;
            }
            else{
                return -1;
            }
        }
};

#endif // BUSCABINARIAMATRICULA_H
