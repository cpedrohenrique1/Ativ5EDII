#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "AbrirArquivo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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
    delete ui;
}


void MainWindow::on_pushButton_executar_clicked()
{
    try {
//        AbrirArquivo AbrirArquivo;
        if (ui->lineEdit->text().isEmpty()){
//            ui->lineEdit->setText(AbrirArquivo(this));
        }

    } catch (QString &e) {
        QMessageBox::critical(this,"Erro", e);
    }
}

