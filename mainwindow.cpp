#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <iostream>
#include "operartabela.h"
#include "AbrirArquivo.h"
#include "buscardados.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      professor(0)
{
    ui->setupUi(this);
    OperarTabela tabela;
    tabela.start(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    if (professor != 0){
        delete[] professor;
    }
    delete ui;
}


void MainWindow::on_pushButton_executar_clicked()
{
    try {
        QString input_dado = ui->lineEdit->text();
        if (input_dado.isEmpty() || input_dado.isNull()){
            throw QString("Deve ser inserido algum dado para buscar");
        }
        OperarTabela tabela;
        tabela.popular(ui->tableWidget, tamanho_vetor, professor);
    } catch (QString &e) {
        QMessageBox::critical(this,"Erro", e);
    }
}

void MainWindow::on_pushButton_abrirArquivo_clicked()
{
    try {
        AbrirArquivo abrir_arquivo(this, &professor, tamanho_vetor);
        on_pushButton_executar_clicked();
    }catch (QString &e){
        QMessageBox::critical(this,"Erro", e);
    }
}

