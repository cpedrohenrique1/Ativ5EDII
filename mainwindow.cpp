#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "AbrirArquivo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      professor(0)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    QStringList cabecalho = {"Matricula", "Nome", "Departamento", "Titulacao", "Tipo de contrato"};
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->setHorizontalHeaderLabels(cabecalho);
    ui->tableWidget->setColumnWidth(0, 100); // Matricula
    ui->tableWidget->setColumnWidth(1, 250); // Nome
    ui->tableWidget->setColumnWidth(2, 100); // Departamento
    ui->tableWidget->setColumnWidth(3, 150);   // Titulacao
    ui->tableWidget->setColumnWidth(4, 150); // Tipo de contrato
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
        AbrirArquivo abrir_arquivo;
        if (ui->lineEdit->text().isEmpty() || ui->lineEdit->text().isNull() || tamanho_vetor == 0 || professor == 0){
            ui->lineEdit->setText(abrir_arquivo(this, &professor, tamanho_vetor));
        }
    //   for (int i = 0; i < 5; i++){
    //       ui->tableWidget->insertRow(0);
    //       ui->tableWidget->setItem(0,0, new QTableWidgetItem(QString::number(i)));
    //       ui->tableWidget->setItem(0,1, new QTableWidgetItem(QString::number(i)));
    //       ui->tableWidget->setItem(0,2, new QTableWidgetItem(QString::number(i)));
    //       ui->tableWidget->setItem(0,3, new QTableWidgetItem(QString::number(i)));
    //       ui->tableWidget->setItem(0,4, new QTableWidgetItem(QString::number(i)));
    //   }
    } catch (QString &e) {
        QMessageBox::critical(this,"Erro", e);
    }
}

