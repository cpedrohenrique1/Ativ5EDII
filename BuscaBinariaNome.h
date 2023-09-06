#ifndef BUSCABINARIANOME_H
#define BUSCABINARIANOME_H

#include "BuscaBinaria.h"

class BuscaBinariaNome : public BuscaBinaria {
    public:
        int metodoOrdenacao (Professor p, QString entrada) override {
            if (p.getNome() == entrada){
                return 0;
            }
            else if (p.getNome() > entrada){
                return 1;
            }
            else{
                return -1;
            }
        }
};

#endif // BUSCABINARIANOME_H
