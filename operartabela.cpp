#include "operartabela.h"

void OperarTabela::start(QTableWidget *parent)
{
    parent->setColumnCount(5);
    QStringList cabecalho = {"Matricula", "Nome", "Departamento", "Titulacao", "Tipo de contrato"};
    parent->setHorizontalHeaderLabels(cabecalho);
    parent->setColumnWidth(0, 100); // Matricula
    parent->setColumnWidth(1, 250); // Nome
    parent->setColumnWidth(2, 100); // Departamento
    parent->setColumnWidth(3, 150); // Titulacao
    parent->setColumnWidth(4, 150); // Tipo de contrato
    parent->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void OperarTabela::limpar(QTableWidget *parent)
{
    parent->setRowCount(0);
    parent->clearContents();
    start(parent);
}

void OperarTabela::popular(QTableWidget *parent, int tamanho_vetor, Professor *prof)
{
    if (!prof || tamanho_vetor == 0)
    {
        throw QString("Erro, Vetor de professores nao existe");
    }
    limpar(parent);
    for (int i = 0; i < tamanho_vetor; ++i)
    {
        parent->insertRow(i);
        parent->setItem(i, 0, new QTableWidgetItem(QString::number(prof[i].getMatricula())));
        parent->setItem(i, 1, new QTableWidgetItem(prof[i].getNome()));
        parent->setItem(i, 2, new QTableWidgetItem(prof[i].getDepartamento()));
        parent->setItem(i, 3, new QTableWidgetItem(prof[i].getTitulacao()));
        parent->setItem(i, 4, new QTableWidgetItem(prof[i].getTipo_de_contrato()));
    }
}
