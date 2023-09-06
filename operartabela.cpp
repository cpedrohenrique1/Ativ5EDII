#include "operartabela.h"

OperarTabela::OperarTabela(QTableWidget*parent):
    parent(0)
{
    if (parent){
        this->parent = parent;
    }else{
        throw QString("Nao foi possivel localizar a tabela");
    }
}
OperarTabela::~OperarTabela(){
    delete parent;
}

void OperarTabela::start()
{
    if (!parent){
        throw QString("Tabela nao criada");
    }
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

void OperarTabela::limpar()
{
    if (!parent){
        throw QString("Tabela nao criada");
    }
    parent->setRowCount(0);
    parent->clearContents();
    start();
}

void OperarTabela::popular(int tamanho_vetor, Professor *array_professor)
{
    if (!parent){
        throw QString("Tabela nao criada");
    }
    if (!array_professor || tamanho_vetor == 0)
    {
        throw QString("Erro, Vetor de professores nao existe");
    }
    limpar();
    for (int i = 0; i < tamanho_vetor; ++i)
    {
        parent->insertRow(i);
        parent->setItem(i, 0, new QTableWidgetItem(QString::number(array_professor[i].getMatricula())));
        parent->setItem(i, 1, new QTableWidgetItem(array_professor[i].getNome()));
        parent->setItem(i, 2, new QTableWidgetItem(array_professor[i].getDepartamento()));
        parent->setItem(i, 3, new QTableWidgetItem(array_professor[i].getTitulacao()));
        parent->setItem(i, 4, new QTableWidgetItem(array_professor[i].getTipo_de_contrato()));
    }
}

void OperarTabela::buscaElemento(Professor *professor){
    if (!parent){
        throw QString("Tabela nao criada");
    }
    if (!professor){
        throw QString("Erro, elemento professor nao existe");
    }
    limpar();

    parent->insertRow(0);
    parent->setItem(0, 0, new QTableWidgetItem(QString::number(professor->getMatricula())));
    parent->setItem(0, 1, new QTableWidgetItem(professor->getNome()));
    parent->setItem(0, 2, new QTableWidgetItem(professor->getDepartamento()));
    parent->setItem(0, 3, new QTableWidgetItem(professor->getTitulacao()));
    parent->setItem(0, 4, new QTableWidgetItem(professor->getTipo_de_contrato()));
}
