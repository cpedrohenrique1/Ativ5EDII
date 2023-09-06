#ifndef OPERARTABELA_H
#define OPERARTABELA_H

#include "QTableWidget"
#include "professor.h"

class OperarTabela{
private:
    QTableWidget *parent;
public:
    OperarTabela(QTableWidget*parent);
    ~OperarTabela();
    void start();
    void limpar();
    void popular(int tamanho_vetor, Professor *prof);
    void buscaElemento(Professor *prof);
};

#endif // OPERARTABELA_H
