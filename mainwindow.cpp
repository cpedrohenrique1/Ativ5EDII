#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
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
        bool caracter = true;
        for (int i = 0; i < input_dado.size() && caracter; ++i){
            if (input_dado[i] != ' '){
                caracter = false;
            }
        }
        if (input_dado.isEmpty() || input_dado.isNull() || caracter){
            Ordenacao ordem(ui->tableWidget, ui->comboBox_formaOrdenacao->currentText(), professor, tamanho_vetor);
        }else{
            BuscarDados buscar_dados(ui->tableWidget, ui->comboBox_buscarDado->currentText(), input_dado, professor, tamanho_vetor);
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

