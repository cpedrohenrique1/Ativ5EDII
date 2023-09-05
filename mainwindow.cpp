#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <iostream>
#include "operartabela.h"
#include "AbrirArquivo.h"
#include "buscardados.h"
#include "ordenacao.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      professor(0),
      tamanho_vetor(0)
{
    ui->setupUi(this);
    OperarTabela tabela;
    tabela.start(ui->tableWidget);
}

MainWindow::~MainWindow()
{
    if (professor){
        delete[] professor;
    }
    delete ui;
}


void MainWindow::on_pushButton_executar_clicked()
{
    try {
        QString input_dado = ui->lineEdit->text();
        if (ui->lineEdit->text().isEmpty() || ui->lineEdit->text().isNull()){
            Ordenacao ordem(ui->tableWidget, ui->comboBox_formaOrdenacao->currentText(), professor, tamanho_vetor);
        }else{
            BuscarDados buscar_dados(ui->tableWidget, ui->comboBox_buscarDado->currentText(), professor, tamanho_vetor);
        }
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

